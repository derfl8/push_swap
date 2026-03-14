/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wich_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 22:23:28 by abegou            #+#    #+#             */
/*   Updated: 2026/03/14 13:31:37 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	how_many(t_tab *a)
{
	int	i;

	i = 1;
	while (a->next)
	{
		a = a->next;
		i++;
	}
	return (i);
}

bool	already_sort(t_tab *a)
{
	if (!a)
		return (true);
	while (a->next)
	{
		if (a->index > a->next->index)
			return (false);
		a = a->next;
	}
	return (true);
}

void	wich_case(t_tab **a)
{
	t_tab	*b;

	b = NULL;
	if (already_sort(*a) == true)
	{
		ft_free_stack(a);
		return ;
	}
	if (how_many(*a) == 3)
		three_sort(a);
	else if (how_many(*a) == 2)
		sa(a);
	else
		k_distrib(a, &b);
	ft_free_stack(a);
	return ;
}
