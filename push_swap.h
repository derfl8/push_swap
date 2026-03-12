/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:37:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/12 14:03:47 by abegou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_tab
{
	int				value;
	int				index;
	struct s_tab	*next;
}					t_tab;

bool    int_check(char *arg);
bool	argcheck(char *arg);
void	argkiller(int ac, char **av);
bool    dup_check(char **check);
void	ft_add_back(t_tab **lst, t_tab *new);
t_tab	*ft_new(int value);
t_tab  *do_stack(char *parsed);

#endif