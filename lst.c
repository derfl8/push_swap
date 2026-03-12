/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:57:20 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 13:22:01 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list  do_stack(char *parsed)
{
    char    **splited;
    int     i;
    t_list  *new;

    splited = ft_split(parsed, ' ');
    i = 0;
    while (splited[i])
    {
        ft_lstnew(ft_atoi(splited[i++]));
        ft_lstadd_back(&t_list, new);
    }
    ft_free(splited);
}