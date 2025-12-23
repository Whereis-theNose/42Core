/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:29:08 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 19:35:03 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n && *str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	unsigned char s;

	s = "hakuna matata";
	printf("My function: %d\n", ft_memchr(s, 'n', 6));
	printf("Original function: %d\n", memchr(s, 'n', 6));
}
*/