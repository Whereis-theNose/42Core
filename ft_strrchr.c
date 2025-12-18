/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:43:31 by deboiech          #+#    #+#             */
/*   Updated: 2025/11/24 16:08:39 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char		*ptr;

	i = 0;
	ptr = s;
	while (ptr[i])
		i++;
	if (c == '\0')
		return (ptr[i]);
	while (i >= 0)
	{
		if (ptr[i] = c)
			return (ptr[i]);
		i--;
	}
	return (NULL);
}
