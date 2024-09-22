#include <stdlib.h>
#include "stack.h"

t_node *create_node(int value) {
    t_node *new_node = (t_node *)malloc(sizeof(t_node));
    if (!new_node) {
        return NULL;
    }
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

t_stack *create_stack() {
    t_stack *stack = (t_stack *)malloc(sizeof(t_stack));
    if (!stack) {
        return NULL;
    }
    stack->top = NULL;
    return stack;
}

int is_empty(t_stack *stack) {
    return stack->top == NULL;
}

void push(t_stack *stack, int value) {
    t_node *new_node = create_node(value);
    if (new_node) {
        new_node->next = stack->top;
        stack->top = new_node;
    }
}

int pop(t_stack *stack) {
    if (is_empty(stack)) {
        return -1; // or handle underflow
    }
    t_node *temp = stack->top;
    int value = temp->value;
    stack->top = stack->top->next;
    free(temp);
    return value;
}

void free_stack(t_stack *stack) {
    while (!is_empty(stack)) {
        pop(stack);
    }
    free(stack);
}
