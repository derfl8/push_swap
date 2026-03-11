/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:09:48 by abegou            #+#    #+#             */
/*   Updated: 2026/03/11 14:12:53 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

bool	int_check(char *arg)
{
	int		i;
	char	**conv;

	conv = ft_split(arg, ' ');
	i = 0;
	while (conv[i])
	{
		if (ft_strlen(conv[i]) > 11 || (ft_atol(conv[i]) > INT_MAX || ft_atol(conv[i]) < INT_MIN))
		{
			ft_free(conv);
			return (false);
		}
		printf("%lld\n", ft_atol(conv[i]));
		i++;
	}
	ft_free(conv);
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
