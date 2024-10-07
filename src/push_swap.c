/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:00:45 by sfarren           #+#    #+#             */
/*   Updated: 2024/10/07 13:02:40 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Find min and max
// Create linked list for counts
// Populate counts
// Reconstruct sorted array


int	init_sort(int *arr, int length)
{
	int		i;
	int		min;
	int		max;
	int		range;
	int		offset;
	int		*sorted_arr;
	t_node	*head;
	t_node	*current;

	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	// find min and max
	while (i < length)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	// get range and offset
	range = max - min + 1;
	offset = 0 - min;
	ft_printf("min: %d max: %d\n", min, max);
	ft_printf("offset: %d  Range: %d \n", offset, range);

	// Create Linked List for counts
	head = create_linked_list(range);
	populate_linked_list(arr, length, head, offset);

	// Print the counts
	current = head;
	while (current != NULL)
	{
		ft_printf("Value: %d, Count: %d\n", current->value, current->count);
		current = current->next;
	}
	sorted_arr = (int *)malloc(length * sizeof(int));
	if (!sorted_arr)
	{
		ft_printf("Memory Allocation Failed");
		return (-1);
	}
	i = 0;
	current = head;
	while (current != NULL)
	{
		while (current->count > 0)
		{
			sorted_arr[i++] = current->value - offset;
			current->count--;
		}
		current = current->next;
	}
	// Print the sorted array
	ft_printf("Sorted array:\n");
	i = 0;
	while (i < length)
		ft_printf("%d\n", sorted_arr[i++]);

	   // Compare the sorted array with the original array
	ft_printf("Comparison of original and sorted arrays:\n");
	for (i = 0; i < length; i++)
	{
		ft_printf("Original: %d, Sorted: %d\n", arr[i], sorted_arr[i]);
	}


	// Free the linked list
	while (head != NULL)
	{
		t_node *temp = head;
		head = head->next;
		free(temp);
	}


	return (0);
}

