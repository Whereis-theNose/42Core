/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:48:36 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 20:16:22 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;

	if (!lst || !del)
		return ;
	iter = malloc (sizeof (t_list));
	if (!iter)
		return ;
	iter = *lst;
	while (iter)
	{
		ft_lstdelone(iter, del);
		free(iter);
		iter = iter->next;
	}
}
