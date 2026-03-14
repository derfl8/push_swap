/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:30:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/14 12:56:50 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_tab **a)
{
	if (((*a)->index == 1 && (*a)->next->index == 2) || ((*a)->index == 0
			&& (*a)->next->index == 2))
		rra(a);
	if ((*a)->index == 2)
		ra(a);
	if (((*a)->index == 1 && (*a)->next->index == 0))
		sa(a);
}

int	index_stalker(t_tab *a_or_b, int index_stalked)
{
	int	location;

	location = 0;
	while (a_or_b)
	{
		if (a_or_b->index == index_stalked)
			return (location);
		a_or_b = a_or_b->next;
		location++;
	}
	return (-1);
}

void	comeback_of_the_b_stack_in_a(t_tab **a, t_tab **b)
{
	int	location;
    int reach;

    location = index_stalker(*b, how_many(*b) - 1);
	while (b)
	{
		reach = how_many(*b);
        location = index_stalker(*b, reach);
        if (location <= (*b) -> index / 2)
        {
            while ((*b) -> index != reach)
                rb(b);
        }
        else
        {
            while ((*b) -> index != reach)
                rrb(b);
        }
        pa(a, b);
	}
}

void	k_distrib(t_tab **a, t_tab **b)
{
	int	d;
	int	weir;

	d = ((how_many(*a) - 1) / 20) + 7;
	weir = 0;
	while (a)
	{
		if ((*a)->index <= weir + d)
		{
			pb(a, b);
			if ((*b)->index)
				rb(b);
			weir++;
		}
		else
			ra(a);
	}
	comeback_of_the_b_stack_in_a(a, b);
	return ;
}
