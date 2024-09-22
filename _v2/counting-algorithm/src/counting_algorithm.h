#ifndef COUNTING_ALGORITHM_H
#define COUNTING_ALGORITHM_H

#include "stack.h"

// Function to perform counting sort using a linked list stack
void counting_sort(Stack *stack);

// Function to find the maximum value in the stack
int find_max(Stack *stack);

// Function to initialize the counting array
void initialize_counting_array(int *count, int size);

// Function to place sorted elements back into the stack
void place_sorted_elements(Stack *stack, int *count, int size);

#endif // COUNTING_ALGORITHM_H