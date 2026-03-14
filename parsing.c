/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:09:48 by abegou            #+#    #+#             */
/*   Updated: 2026/03/14 11:59:32 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	dup_check(char **check)
{
	int	i;
	int	j;

	i = 0;
	while (check[i])
	{
		j = i + 1;
		while (check[j])
		{
			if (ft_atol(check[i]) == ft_atol(check[j]))
				return (false);
			j++;
		}
		i++;
	}
	return (true);
}

bool	int_check(char *arg)
{
	int		i;
	char	**conv;
	bool	is_valid;

	conv = ft_split(arg, ' ');
	i = 0;
	while (conv[i])
	{
		if (ft_strlenin(conv[i]) > 11 || (ft_atol(conv[i]) > INT_MAX
				|| ft_atol(conv[i]) < INT_MIN))
		{
			ft_free(conv);
			return (false);
		}
		i++;
	}
	is_valid = dup_check(conv);
	ft_free(conv);
	return (is_valid);
}

bool	argcheck(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] != ' ' && arg[i] != '-' && (arg[i] < '0' || arg[i] > '9'))
			return (false);
		else if (arg[i] == '-' && (arg[i + 1] == ' ' || arg[i + 1] == '-'
				|| arg[i + 1] == '\0'))
			return (false);
		else if (i > 0 && (arg[i] == '-' && (arg[i - 1] >= '0' && arg[i
						- 1] <= '9')))
			return (false);
		i++;
	}
	return (true);
}
