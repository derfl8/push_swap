/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oprerations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 17:06:03 by abegou            #+#    #+#             */
/*   Updated: 2026/03/14 14:03:09 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_tab **a)
{
	t_tab	*tmp;
	t_tab	*tmp2;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*a = tmp2;
	ft_printf("sa\n");
	return ;
}

void	ra(t_tab **a)
{
	t_tab	*tmp;
	t_tab	*tmp2;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	tmp2 = ft_last(tmp);
	*a = tmp->next;
	tmp->next = NULL;
	tmp2->next = tmp;
	ft_printf("ra\n");
	return ;
}

void	rra(t_tab **a)
{
	t_tab	*tmp;
	t_tab	*tmp2;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	tmp2 = ft_last(tmp);
	while (tmp->next->next)
		tmp = tmp->next;
	tmp->next = NULL;
	tmp2->next = *a;
	*a = tmp2;
	ft_printf("rra\n");
	return ;
}

void	pb(t_tab **a, t_tab **b)
{
	t_tab	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = tmp->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("pb\n");
	return ;
}

void	pa(t_tab **a, t_tab **b)
{
	t_tab	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = tmp->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
	return ;
}
