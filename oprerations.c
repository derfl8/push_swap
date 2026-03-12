/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprerations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:06:03 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 21:11:00 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void    sa(t_tab **a)
{
    t_tab   *tmp;
    t_tab   *tmp2;

    if (!*a || !(*a) -> next)
        return ;
    tmp = *a;
    tmp2 = tmp -> next;
    tmp -> next = tmp2 -> next;
    tmp2 -> next = tmp;
    *a = tmp2;
}

void    ra(t_tab **a)
{
    t_tab   *tmp;
    t_tab   *tmp2;

    if (!*a || !(*a) -> next)
        return ;
    tmp = *a;
    tmp2 = ft_last(tmp);
    *a = tmp -> next;
    tmp -> next = NULL;
    tmp2 -> next = tmp;
}

void    rra(t_tab **a)
{
    t_tab   *tmp;
    t_tab   *tmp2;

    if (!*a || !(*a) -> next)
        return ;
    tmp = *a;
    tmp2 = ft_last(tmp);
    *a = tmp -> next;
    tmp -> next = NULL;
    tmp2 -> next = tmp;
}

void    pb(t_tab **a, t_tab **b)
{
    t_tab   *header_a;
    t_tab   *header_b;
    t_tab   *tmp;

    header_a = *a;
    header_b = *b;
    tmp = *a;
    header_a = header_a -> next;
    *a = header_a;
    tmp -> next = *b;
    *b = tmp;
    return ;
}

void    pa(t_tab **a, t_tab **b)
{
    pb(b, a);
    return ;
}