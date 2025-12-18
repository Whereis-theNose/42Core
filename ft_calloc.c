/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:11:04 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/18 14:44:14 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*memory;

	memory = malloc(nmemb * size);
	if (!memory || size == 0 || nmemb == 0)
		return (NULL);
	ft_bzero(memory, (nmemb * size));
	return (memory);
}
