/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:50:08 by abegou            #+#    #+#             */
/*   Updated: 2026/03/11 17:41:08 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		j = ft_strlen(av[i]);
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
	return (0);
}
