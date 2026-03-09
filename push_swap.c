/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:50:08 by abegou            #+#    #+#             */
/*   Updated: 2026/03/09 17:59:34 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	argcheck(char *arg)
{
	while (*arg)
	{
		if (*arg != ' ' && *arg != '-' && (*arg < '0' || *arg > '9'))
			return (1);
		arg++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	valid_or_not;
	
	if (ac < 2)
	{
		ft_printf("Give some numbers\n");
		return (0);
	}
	while (--ac > 0)
	{
		valid_or_not = argcheck(av[ac]);
		if (valid_or_not == 1)
		{
			ft_printf("Wrong argument(s)\n");
			return (0);
		}
	}
	return (0);
}
