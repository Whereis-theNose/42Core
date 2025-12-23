/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:11:04 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 20:45:23 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memory;
	size_t	total;

	memory = NULL;
	if (size == 0 || nmemb == 0)
	{
		memory = malloc(1);
		if (!memory)
			return (NULL);
		else
			return (memory);
	}
	total = nmemb * size;
	if (total / nmemb != size)
		return (NULL);
	memory = malloc(total);
	if (!memory)
		return (NULL);
	ft_bzero(memory, total);
	return (memory);
}
