/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:57:06 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 19:39:59 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	i = 0;
	temp = NULL;
	ft_strlcpy(temp, src, sizeof src);
	ft_strlcpy(dest, temp, n);
	return (dest);
}
