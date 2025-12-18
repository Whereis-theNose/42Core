/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:52:56 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/10 16:46:37 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_strlen.c"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	if (size == 0)
	{
		return (ft_strlen(src));
	}
	if (size != 0)
	{
		i = 0;
		while (i < size - 1 && src[i])
		{
			dst[i] = (char) src[i];
			i++;
		}
		dst[i] = '\0';
	}
		return (ft_strlen(src));
}
