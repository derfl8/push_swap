/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:38:14 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 16:45:43 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_rating(char **stack, char *value)
{
	int	i;
	int	index;
	int	valint;

	i = 0;
	index = 0;
	valint = ft_atoi(value);
	while (stack[i])
	{
		if (ft_atoi(stack[i]) < valint)
			index++;
		i++;
	}
	return (index);
}
