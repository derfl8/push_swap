/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:20:35 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 19:23:35 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_tab	*ft_last(t_tab *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

void	ft_free_stack(t_tab *array)
{
	t_tab	*tmp;

	tmp = array;
	while (tmp)
	{
		tmp = array;
		array = array->next;
		free(tmp);
	}
	return ;
}