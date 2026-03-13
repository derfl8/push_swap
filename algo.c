/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 22:23:28 by abegou            #+#    #+#             */
/*   Updated: 2026/03/13 15:27:41 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool already_sort(t_tab *a)
{
    while (a -> next)
    {
        if (a -> index > a -> next -> index)
            return (false);
        a = a -> next;
        }
    return (true);
}