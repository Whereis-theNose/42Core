/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:28:57 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/18 15:36:50 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list	*last;

    if (!lst || !new)
        return;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    last = *lst;
    while (last->next)
        last = last->next;
    last->next = new;
}