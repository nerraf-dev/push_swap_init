/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:39:44 by sfarren           #+#    #+#             */
/*   Updated: 2024/09/21 20:20:00 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	num;
	int	count;

	count = 0;
	if (argc == 1)
		ft_printf("No arguments provided.\n");
	else
	{
		ft_printf("Arguments provided:\n");
		i = 1;
		while (i < argc)
		{
			if (is_valid_integer(argv[i]))
			{
				num = ft_atoi(argv[i]);
				ft_printf("%d\n", num);
				count++;
			}
			else
				ft_printf("Invalid integer: %s\n", argv[i]);
			i++;
		}
	}
	return (0);
}
