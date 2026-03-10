/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:50:08 by abegou            #+#    #+#             */
/*   Updated: 2026/03/10 20:07:52 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	int_check(char *arg)
{
	int		i;
	int		j;
	char	conv[12];

	ft_bzero(conv, 12);
	i = 0;
	j = 0;
	while (arg[i] != '\0')
	{
		conv[j++] = arg[i++];
		while (arg[i] == ' ' || arg[i] == '\0')
		{
			if (ft_atol(conv) > INT_MAX || ft_atol(conv) < INT_MIN)
				return (false);
			j = 0;
			ft_bzero(conv, 12);
		}
		if (arg[i] == ' ')
			i++;
		if (j > 11)
			return (false);
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
