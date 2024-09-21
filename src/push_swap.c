/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:00:45 by sfarren           #+#    #+#             */
/*   Updated: 2024/09/21 21:25:24 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->value = value;
	new_node->count = 0;
	new_node->next = NULL;
	return (new_node);
}

void	insert(t_node **head, int value)
{
	t_node	*new_node;

	new_node = create_node(value);
	new_node->next = *head;
	*head = new_node;
}

// t_node *

void	count_sort(int *arr, int length)
{
	int	i;
	int	min;
	int	max;
	int	range;
	int	offset;

	// Find min and max in list
	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	while (i < length)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	// Create linked list of counts
	offset = 0 - min;
	range = max - min + 1;
	t_node head = *create_node(0);
}

