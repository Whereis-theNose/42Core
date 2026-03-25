/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 15:18:20 by deboiech          #+#    #+#             */
/*   Updated: 2026/03/19 18:03:00 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include "ft_printf/ft_printf.h"
#include "ft_printf/libft/libft.h"
#include <limits.h>

typedef struct llist
{
	long			*content;
	struct llist	*next;
    struct llist    *previous;
}			llist;







#endif
