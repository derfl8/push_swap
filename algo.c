/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:30:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/14 15:07:37 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	three_sort_for_five(t_tab **a)
{
	if (((*a)->index == 3 && (*a)->next->index == 4) || ((*a)->index == 2
			&& (*a)->next->index == 4))
		rra(a);
	if ((*a)->index == 4)
		ra(a);
	if (((*a)->index == 3 && (*a)->next->index == 2))
		sa(a);
    return ;
}

void	sort_five(t_tab **a, t_tab **b)
{
    while (how_many(*a) > 3)
    {
        if ((*a) -> index < 2)
            pb(a, b);
        else
            ra(a);
    }
    three_sort_for_five(a);
    if ((*b) -> index == 0)
        rb(b);
    pa(a, b);
    pa(a, b);
    return ;
}

void	three_sort(t_tab **a)
{
	if (((*a)->index == 1 && (*a)->next->index == 2) || ((*a)->index == 0
			&& (*a)->next->index == 2))
		rra(a);
	if ((*a)->index == 2)
		ra(a);
	if (((*a)->index == 1 && (*a)->next->index == 0))
		sa(a);
    return ;
}

void	comeback_of_the_b_stack_in_a(t_tab **a, t_tab **b)
{
	int	location;
	int	reach;

	location = index_stalker(*b, how_many(*b) - 1);
	while (*b)
	{
		reach = how_many(*b) - 1;
		location = index_stalker(*b, reach);
		if (location <= how_many(*b) / 2)
		{
			while ((*b)->index != reach)
				rb(b);
		}
		else
		{
			while ((*b)->index != reach)
				rrb(b);
		}
		pa(a, b);
	}
	return ;
}

void	k_distrib(t_tab **a, t_tab **b)
{
	int	d;
	int	weir;

	d = ((how_many(*a) - 1) / 20) + 7;
	weir = 0;
	while (*a)
	{
		if ((*a)->index <= weir + d)
		{
			pb(a, b);
			if ((*b)->index <= weir)
				rb(b);
			weir++;
		}
		else
			ra(a);
	}
	comeback_of_the_b_stack_in_a(a, b);
	return ;
}
