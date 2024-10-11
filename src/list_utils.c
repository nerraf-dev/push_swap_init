/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:48:50 by sfarren           #+#    #+#             */
/*   Updated: 2024/10/11 13:56:45 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->value = value;
	new_node->rank = 0;
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

// Function to create a linked list for counts
t_node	*create_linked_list(int range)
{
	t_node	*head;
	t_node	*current;
	int		i;

	head = create_node(0);
	current = head;
	i = 1;
	while (i < range)
	{
		current->next = create_node(i);
		current = current->next;
		i++;
	}
	return (head);
}

void	push(t_stack *stack, int value, int rank)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->rank = rank;
	new_node->next = stack->top;
	stack->top = new_node;
}

int	pop(t_stack *stack)
{
	t_node	*temp;
	int		value;

	if (!stack->top)
		return (-1);
	temp = stack->top;
	value = temp->value;
	stack->top = stack->top->next;
	free(temp);
	return (value);
}

// Function to populate the linked list with counts
// void	populate_linked_list(int *arr, int length, t_node *head, int offset)
// {
// 	int		i;
// 	int		index;
// 	t_node	*current;

// 	i = 0;
// 	while (i < length)
// 	{
// 		current = head;
// 		index = arr[i] + offset;
// 		while (index > 0)
// 		{
// 			current = current->next;
// 			index--;
// 		}
// 		current->count++;
// 		i++;
// 	}
// }


