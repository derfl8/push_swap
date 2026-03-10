/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:50:08 by abegou            #+#    #+#             */
/*   Updated: 2026/03/10 21:00:11 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	int_check(char *arg)
{
	int		i;
	char	**conv;

	conv = ft_split(arg, ' ');
	i = 0;
	while (conv[i])
	{
		if (ft_strlen(conv[i]) > 11)
			return (false);
		if (ft_atol(conv[i]) > INT_MAX || ft_atol(conv[i]) < INT_MIN)
			return (false);
		i++;
	}
	return (true);
}

bool	argcheck(char *arg)
{
	int		i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] != ' ' && arg[i] != '-' && (arg[i] < '0' || arg[i] > '9'))
			return (false);
		else if (arg[i] == '-'
			&& (arg[i + 1] == ' ' || arg[i + 1] == '-' || arg[i + 1] == '\0'))
			return (false);
		else if (i > 0
			&& (arg[i] == '-' && (arg[i - 1] >= '0' && arg[i - 1] <= '9')))
			return (false);
		i++;
	}
	return (true);
}

void	argkiller(int ac, char **av)
{
	int		i;
	int		j;

	i = 0;
	if (ac < 2)
		return ;
	--ac;
	while (ac > i)
	{
		j = ft_strlen(av[i]) ;
		av[i][j] = ' ';
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	bool	is_valid;

	if (ac < 2)
		return (0);
	argkiller(ac, av);
	ft_printf("%s", av[1]);
	is_valid = argcheck(av[1]);
	if (is_valid == false)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	is_valid = int_check(av[1]);
	if (is_valid == false)
	{
		write(2, "Error\n", 6);
		return (0);
	}
}
