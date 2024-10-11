/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:20:42 by sfarren           #+#    #+#             */
/*   Updated: 2024/10/11 13:34:10 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_node	*node;

	node = stack->top;
	ft_printf("Stack A: ");
	while (node)
	{
		ft_printf("%d ", node->value);
		node = node->next;
	}
	ft_printf("\n");
}

int	print_instructions(char *instructions)
{
	char	**split_instructions;
	int		i;

	split_instructions = ft_split(instructions, ',');
	if (!split_instructions)
		return (0);
	i = 0;
	while (split_instructions[i])
	{
		ft_printf("%s\n", split_instructions[i]);
		free(split_instructions[i]);
		i++;
	}
	free(split_instructions);
	return (i);
}

int	push_swap(int *arr, int length)
{
	int		i;
	int		min;
	int		max;
	int		range;
	int		offset;
	int		moves;
	char	*arr_sorted;
	char	*instructions;

	// i = length;
	// while (i > 0)
	// {
	// 	push(&stack_a, arr[i - 1]);
	// 	i--;
	// }
	// print_stack(&stack_a);
	// ft_printf("Stack B: \n");

	i = 0;
	min = INT_MAX;
	max = INT_MIN;
	ft_printf("len: %d\n", length);
	moves = 0;
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
	// 1 2 3 = MIN 1 MAX 3 RANGE 2
	// Create sorted array

	// Rank the array
	// copy ranks to stack


	//sorting 2 & 3 digits
	if (length == 2)
	{
		instructions = sort_two(&stack_a, arr, min, max);
		print_stack(&stack_a);
		moves = print_instructions(instructions);
		ft_printf("Moves: %d\n", moves);
	}
	if (length == 3)
	{
		instructions = sort_three(&stack_a, arr, min, max);
		print_stack(&stack_a);
		moves = print_instructions(instructions);
		ft_printf("Moves: %d\n", moves);

	}

	//sorting 4 & 5 digits

	//sorting 6 + numbers



	return (0);
}
