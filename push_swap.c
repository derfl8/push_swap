/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 15:50:08 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 20:32:07 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "ft_printf/ft_printf.h"

void	argkiller(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	if (ac < 2)
		return ;
	--ac;
	while (ac > i)
	{
		j = ft_strlen(av[i]);
		av[i][j] = ' ';
		i++;
	}
	return ;
}

int	main(int ac, char **av)
{
	bool	is_valid;

	if (ac < 2)
		return (0);
	argkiller(ac, av);
	is_valid = argcheck(av[1]);
	if (is_valid == false)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	is_valid = int_check(av[1]);
	if (is_valid == false)
	{
		write(2, "Error\n", 6);
		return (0);
	}
// Print some test
	t_tab	*a;
	t_tab	*b;
	t_tab	*tmp;
	a = do_stack(av[1]);
	b = NULL;
	tmp = a;
	while (tmp)
	{
		ft_printf("Value : %d\n", tmp->value);
		ft_printf("Index : %d\n\n", tmp->index);
		tmp = tmp->next;
	}
	ra(&a);
	tmp = a;
	ft_printf("ra :\n");
	while (tmp)
	{
		ft_printf("Value : %d\n", tmp->value);
		ft_printf("Index : %d\n\n", tmp->index);
		tmp = tmp->next;
	}
	pb(&a, &b);
	tmp = b;
	ft_printf("pb :\n");
	while (tmp)
	{
		ft_printf("Value : %d\n", tmp->value);
		ft_printf("Index : %d\n\n", tmp->index);
		tmp = tmp->next;
	}
	return (0);
}
