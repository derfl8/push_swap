/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:37:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 21:07:21 by abegou           ###   ########.fr       */
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

bool				int_check(char *arg);
bool				argcheck(char *arg);
void				argkiller(int ac, char **av);
bool				dup_check(char **check);
void				ft_add_back(t_tab **lst, t_tab *new);
t_tab				*ft_new(int value, int index);
t_tab				*do_stack(char *parsed);
void				ft_free_stack(t_tab *array);
int					index_rating(char **stack, char *value);
void				sa(t_tab **a);
t_tab				*ft_last(t_tab *lst);
void				ra(t_tab **a);
void				pb(t_tab **a, t_tab **b);
void				pa(t_tab **a, t_tab **b);
void    			rra(t_tab **a);

#endif