/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wich_case.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 22:23:28 by abegou            #+#    #+#             */
/*   Updated: 2026/03/13 16:07:55 by abegou           ###   ########.fr       */
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
	if (already_sort(*a) == true)
		return ;
	if (how_many(*a) == 3)
		three_sort(a);
	else if (how_many(*a) == 5)
		five_sort(a);
	else
		radix(a);
	return ;
}