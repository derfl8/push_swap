/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:50:08 by abegou            #+#    #+#             */
/*   Updated: 2026/03/09 21:41:40 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	int_check(char *arg)
{
	static int	i = 0;
	int			j;
	char		conv[13];
	
	*conv = (char){0};
	j = 0;
	while (arg[i] != ' ' && arg[i] != '\0')
		conv[j++] = arg[i++];
	if (ft_atol(conv) > INT_MAX || ft_atol(conv) < INT_MIN)
		return (FALSE);
	else if (arg[i] != '\0')
		int_check(arg);
	return (TRUE);
}

char	*argkiller(char **av)
{
	while (av[i])
	{
		while (av[i][j])
			av[i][j++];
		av[i][j] = ' ';
		i++;
	}
	return (&av)
}

static int	argcheck(char *arg)
{
	int		i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] != ' ' && arg[i] != '-' && (arg[i] < '0' || arg[i] > '9'))
			return (FALSE);
		else if (arg[i] == '-'
			&& (arg[i + 1] == ' ' || arg[i + 1] == '-' || arg[i + 1] == '\0'))
			return (FALSE);
		else if (i > 0
			&& (arg[i] == '-' && (arg[i - 1] >= '0' && arg[i - 1] <= '9')))
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	main(int ac, char **av)
{
	bool	is_valid;

	if (ac < 2)
		return (0);
	while (--ac > 0)
	{
		is_valid = argcheck(av[ac]);
		if (is_valid == FALSE)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		else 
		{
			is_valid = int_check(av[ac]);
			if (is_valid == FALSE)
			{
				write(2, "Error\n", 6);
				return (0);
			}
		}
		
	}
	return (0);
}
