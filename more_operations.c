/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 20:06:21 by abegou            #+#    #+#             */
/*   Updated: 2026/03/14 14:03:17 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_tab **b)
{
	t_tab	*tmp;
	t_tab	*tmp2;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	tmp2 = ft_last(tmp);
	*b = tmp->next;
	tmp->next = NULL;
	tmp2->next = tmp;
	ft_printf("rb\n");
	return ;
}

void	rrb(t_tab **b)
{
	t_tab	*tmp;
	t_tab	*tmp2;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	tmp2 = ft_last(tmp);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	tmp2->next = *b;
	*b = tmp2;
	ft_printf("rrb\n");
	return ;
}
