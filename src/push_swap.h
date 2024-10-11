/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:41:39 by sfarren           #+#    #+#             */
/*   Updated: 2024/10/11 13:57:01 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
// # include <stdbool.h>
# include "./libft/libft.h"

typedef struct s_node
{
	int				value;
	int				rank;
	struct s_node	*next;
}				t_node;

typedef struct s_stack
{
	t_node	*top;
}	t_stack;

/**
 * @brief Checks if the given string represents a valid integer.
 *
 * This function verifies if the input string is a valid integer representation.
 *
 * @param str The string to be checked.
 * @return 1 if the string is a valid integer, 0 otherwise.
 */
int		is_valid_integer(const char *str);

// *** LIBFT ***
/**
 * @brief Converts a string to an integer.
 *
 * This function converts the input string to an integer. It handles optional
 * leading whitespace and an optional plus or minus sign.
 *
 * @param str The string to be converted.
 * @return The integer value of the string.
 */
int		ft_atoi(const char *str);

// *** LIST_UTILS ***
/**
 * @brief Creates a new node with the given value.
 *
 * @param value The value to be stored in the new node.
 * @return A pointer to the newly created node.
 */
t_node	*create_node(int value);

/**
 * @brief Creates a linked list with nodes ranging from 0 to the specified range.
 *
 * initializes a linked list where each node contains an integer value.
 * The values start from 0 and increment by 1 up to the specified range.
 *
 * @param range The upper limit (exclusive) for the values in the linked list.
 *              The linked list will contain nodes with values from 0 to range-1.
 * @return A pointer to the head of the created linked list.
 */
t_node	*create_linked_list(int range);

/**
 * @brief Inserts a new node with the given value into the linked list.
 *
 * @param head A double pointer to the head of the linked list.
 * @param value The value to be inserted into the new node.
 */
void	insert(t_node **head, int value);

// void	populate_linked_list(int *arr, int length, t_node *head, int offset);

// PUSH SWAP COMMANDS
void	push(t_stack *stack, int value, int rank);
int		pop(t_stack *stack);
void	swap(t_stack *stack);
void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);

// **PS
void	print_stack(t_stack *stack);

// TODO: This one wil have to change
int		push_swap(int *arr, int length);
char	*sort_two(t_stack *stack, int *arr, int min, int max);
char	*sort_three(t_stack *stack, int *arr, int min, int max);
#endif
