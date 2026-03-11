/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abegou <abegou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 17:37:38 by abegou            #+#    #+#             */
/*   Updated: 2026/03/11 14:12:01 by abegou           ###   ########.fr       */
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

bool    int_check(char *arg);
bool	argcheck(char *arg);
void	ft_free(char **arg);
void	argkiller(int ac, char **av);

#endif