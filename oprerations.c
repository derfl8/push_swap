/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprerations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:06:03 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 20:02:39 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void sa(t_tab **a)
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
void ra(t_tab **a)
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