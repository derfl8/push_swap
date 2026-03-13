/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:30:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/13 19:34:18 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    three_sort(t_tab **a)
{
    if (((*a) -> index  == 1 && (*a) -> next -> index == 2) ||
        ((*a) -> index  == 0 && (*a) -> next -> index == 2))
        rra(a);
    if ((*a) -> index  == 2)
        ra(a);
    if (((*a) -> index  == 1 && (*a) -> next -> index == 0))
        sa(a);
}

void    radix(t_tab **a, t_tab **b, int size)
{
    int i;
    int j;

    i = 0;
    while (i < 9) // 2^9 = 512 > 500
    {
        j = 0;
        while (j < size)
        {
            if (((*a)->index >> i) & 1) // bit à 1 → reste dans a
                ra(a);
            else                         // bit à 0 → va dans b
                pb(a, b);
            j++;
        }
        while (*b)                       // on remet tout dans a
            pa(a, b);
        i++;
    }
    return ;
}
