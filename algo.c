/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:30:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/13 18:05:52 by abegou           ###   ########.fr       */
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

void    five_sort(t_tab **a)
{
    
}