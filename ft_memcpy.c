/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:49:00 by deboiech          #+#    #+#             */
/*   Updated: 2025/11/24 11:51:27 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	void	*psrc;

	psrc = dest;
	i = 0;
	while (i < n)
	{
		psrc[i] = src[i];
		i++;
	}
	return (dest);
}
