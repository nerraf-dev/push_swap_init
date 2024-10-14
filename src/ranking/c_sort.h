/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_sort.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 21:18:15 by sfarren           #+#    #+#             */
/*   Updated: 2024/10/13 16:35:28 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_SORT_H
# define C_SORT_H

# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>
# include "../libft/libft.h"
# include "../stack/list_utils.h"
// # include "../push_swap.h"

typedef struct s_count_props
{
	int		min;
	int		max;
	int		range;
	int		offset;
}	t_count_props;

int		*sort_numbers(int *arr, int length);
int		*get_ranks(int *arr, int length);

#endif
