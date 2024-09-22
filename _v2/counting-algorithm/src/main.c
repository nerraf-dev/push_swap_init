#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "counting_algorithm.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Error: No input provided.\n");
        return 1;
    }

    Stack *stack = create_stack();
    if (!stack) {
        fprintf(stderr, "Error: Stack creation failed.\n");
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        push(stack, num);
    }

    counting_sort(stack);

    printf("Sorted elements:\n");
    while (!is_empty(stack)) {
        printf("%d\n", pop(stack));
    }

    free_stack(stack);
    return 0;
}