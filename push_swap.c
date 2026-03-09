/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:50:08 by abegou            #+#    #+#             */
/*   Updated: 2026/03/09 19:01:59 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	argcheck(char *arg)
{
	int	i;
	
	i = 0;
	while (arg[i])
	{
		if (arg[i] != ' ' && arg[i] != '-' && (arg[i] < '0' || arg[i] > '9'))
			return (1);
		else if (arg[i] == '-'
			&& (arg[i + 1] == ' ' || arg[i + 1] == '-' || arg[i + 1] == '\0'))
			return (1);
		else if (arg[i] == '-' && (arg[i - 1] >= '0' && arg[i - 1] <= '9'))
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	valid_or_not;
	
	if (ac < 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	while (--ac > 0)
	{
		valid_or_not = argcheck(av[ac]);
		if (valid_or_not == 1)
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	return (0);
}
