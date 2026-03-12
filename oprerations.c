/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprerations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:06:03 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 22:10:39 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
    ft_printf("sa\n");
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
    ft_printf("ra\n");
}

void    rra(t_tab **a)
{
    t_tab   *tmp;
    t_tab   *tmp2;

    if (!*a || !(*a) -> next)
        return ;
    tmp = *a;
    tmp2 = ft_last(tmp);
    while (tmp)
    {
        tmp = tmp -> next;
        if (tmp -> next -> next == NULL)
            break;
    }
    tmp2 -> next = *a;
    *a = tmp2;
    tmp -> next = NULL;
    ft_printf("rra\n");
}

void    pb(t_tab **a, t_tab **b)
{
    t_tab   *tmp;

    tmp = *a;
    *a = tmp -> next;
    tmp -> next = *b;
    *b = tmp;
    ft_printf("pb\n");
    return ;
}

void    pa(t_tab **a, t_tab **b)
{
    t_tab   *tmp;

    tmp = *b;
    *b = tmp -> next;
    tmp -> next = *a;
    *a = tmp;
    ft_printf("pa\n");
    return ;
}