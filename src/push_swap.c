/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:00:45 by sfarren           #+#    #+#             */
/*   Updated: 2024/10/14 11:52:26 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	push_swap(int *arr, int length)
{
	int		*ranks;
	int		i;
	t_node	*stack_a;
	// t_node	*current;
	// t_node	*stack_b;

	ranks = get_ranks(arr, length);
	if (!ranks)
		return (-1);

	// Print ranks
	i = 0;
	while (i < length)
	{
		ft_printf("arr: %d - rank[%d] = %d\n",arr[i], i, ranks[i]);
		i++;
	}

	// Create stacks a and b
	stack_a = create_linked_list(length);
	populate_count_list(arr, length, stack_a, 0);
	// i = 0;
	// while (stack_a != NULL)
	// {
	// 	stack_a->value = arr[i];
	// 	stack_a->count = ranks[i];
	// 	stack_a = stack_a->next;
	// 	i++;
	// }



	// Iterate over arr in reverse order to populate stack a
	//	- Create a new node with the value of arr[i] This should put the first value of the array at the top of stack_a
	//	- Set the next pointer of the new node to the current top of stack_a
	//	- Set the top of stack_a to the new node
	//	- Increment i
	//	- Repeat until i is equal to length



	// Print stack a

	// Initialize stack a with the input array & rank
	// Initialize stack b as an empty stack




	//ranks is in original order bu only ints 0 to n


	free(ranks);
	return (0);
}

