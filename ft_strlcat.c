/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:43:50 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 20:45:21 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	j = ft_strlen(dst);
	if (!dst || size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dst))
		return (ft_strlen(src));
	while (i < (size - j) && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
