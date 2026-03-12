/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:57:20 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 14:00:14 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_back(t_tab **lst, t_tab *new)
{
	t_tab	*buffer;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	buffer = *lst;
	while (buffer -> next != NULL)
		buffer = buffer -> next;
	buffer -> next = new;
	return ;
}

t_tab	*ft_new(int value)
{
	t_tab	*new_node;

	new_node = malloc(sizeof(t_tab));
	if (!new_node)
		return (NULL);
	new_node -> value = value;
	new_node -> index = 0;
	new_node -> next = NULL;
	return (new_node);
}

t_tab  *do_stack(char *parsed)
{
    char    **splited;
    int     i;
    t_tab   *new;
    t_tab   *stack_a;

    splited = ft_split(parsed, ' ');
    i = 0;
    stack_a = NULL;
    while (splited[i])
    {
        new = ft_new(ft_atoi(splited[i++]));
        ft_add_back(&stack_a, new);
    }
    ft_free(splited);
    return (stack_a);
}