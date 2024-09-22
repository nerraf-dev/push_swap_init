#include "counting_algorithm.h"
#include "stack.h"
#include <stdlib.h>

void counting_sort(Stack *stack) {
    if (stack->top == NULL) {
        return; // Empty stack, nothing to sort
    }

    int max = stack->top->data;
    int min = stack->top->data;
    Node *current = stack->top;

    // Find the maximum and minimum values in the stack
    while (current != NULL) {
        if (current->data > max) {
            max = current->data;
        }
        if (current->data < min) {
            min = current->data;
        }
        current = current->next;
    }

    int range = max - min + 1;
    int *count = (int *)calloc(range, sizeof(int));
    int *output = (int *)malloc(stack->size * sizeof(int));

    // Count occurrences of each number
    current = stack->top;
    while (current != NULL) {
        count[current->data - min]++;
        current = current->next;
    }

    // Calculate cumulative count
    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array
    current = stack->top;
    while (current != NULL) {
        output[count[current->data - min] - 1] = current->data;
        count[current->data - min]--;
        current = current->next;
    }

    // Push sorted elements back to the stack
    for (int i = stack->size - 1; i >= 0; i--) {
        push(stack, output[i]);
    }

    free(count);
    free(output);
}