/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfarren <sfarren@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:39:44 by sfarren           #+#    #+#             */
/*   Updated: 2024/09/20 14:11:11 by sfarren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	if (argc == 1)
		printf("No arguments provided.\n");
	else
	{
		printf("Arguments provided:\n");
		i = 1;
		while (i < argc)
		{
			if (is_valid_integer(argv[i]))
			{
				num = ft_atoi(argv[i]);
				printf("%d\n", num);
			}
			else
			{
				printf("Invalid integer: %s\n", argv[i]);
			}
			i++;
		}
	}
	return (0);
}
