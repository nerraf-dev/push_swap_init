/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:00:45 by sfarren           #+#    #+#             */
/*   Updated: 2024/09/22 12:29:05 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void	init_sort(int *arr, int length)
{
	int	i;
	int	min;
	int	max;
	int	range;
	int	offset;

	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	// get range and offset
	range = max - min + 1;
	offset = 0 - min;
	// find min and max
	while (i < length)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	ft_printf("offset: %d  Range: %d \n", offset, range);

	// Create Linked List for counts
	// Populate counts
	// Reconstruct the sorted array

}

