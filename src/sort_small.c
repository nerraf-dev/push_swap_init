/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:40:20 by sfarren           #+#    #+#             */
/*   Updated: 2024/10/11 13:05:01 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// 	if input is 0 1 2, then return

char	*sort_two(t_stack *stack, int *arr, int min, int max)
{
	static char	*instructions;

	if (arr[0] == max && arr[1] == min)
	{
		swap(stack);
		return (instructions = "sa\n");
	}
	return (instructions = "none required\n");
}

char	*sort_three(t_stack *stack, int *arr, int min, int max)
{
	char	*instructions;

	if (arr[1] == min)
	{
		if (arr[0] > arr[1])
			rotate(stack);
		else
			swap(stack);
	}
	if (arr[2] == min)
	{
		if (arr[0] > arr[2])
			reverse_rotate(stack);
		else
		{
			swap(stack);
			rotate(stack);
		}
	}
	if (arr[0] == min)
	{
		if (arr[1] == max)
			reverse_rotate(stack);
		else
			swap(stack);
	}
	return (instructions = "");
}
