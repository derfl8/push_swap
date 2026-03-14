/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:37:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/14 14:09:26 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_tab
{
	int				value;
	int				index;
	struct s_tab	*next;
}					t_tab;

bool	int_check(char *arg);
bool	argcheck(char *arg);
void	argkiller(int ac, char **av);
bool	dup_check(char **check);
void	ft_add_back(t_tab **lst, t_tab *new);
t_tab	*ft_new(int value, int index);
t_tab	*do_stack(char *parsed);
void	ft_free_stack(t_tab **array);
int		index_rating(char **stack, char *value);
void	sa(t_tab **a);
t_tab	*ft_last(t_tab *lst);
void	ra(t_tab **a);
void	rb(t_tab **b);
void	rra(t_tab **a);
void	rrb(t_tab **b);
void	pa(t_tab **a, t_tab **b);
void	pb(t_tab **a, t_tab **b);
bool	already_sort(t_tab *a);
void	wich_case(t_tab **a);
void	three_sort(t_tab **a);
void	sort_five(t_tab **a, t_tab **b);
void	k_distrib(t_tab **a, t_tab **b);
int		how_many(t_tab *a);
void	comeback_of_the_b_stack_in_a(t_tab **a, t_tab **b);
int		index_stalker(t_tab *a_or_b, int index_stalked);

#endif