/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 22:23:28 by abegou            #+#    #+#             */
/*   Updated: 2026/03/13 15:13:44 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool already_sort(t_tab **a)
{
    int x;

    x = (*a) -> index;
    while ((*a) -> next)
    {
        if (x > (*a) -> next -> index)
            return (false);
        *a = (*a) -> next;
        x = (*a) -> index;
    }
    return (true);
}