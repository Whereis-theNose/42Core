/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:29:08 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/18 14:53:37 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = s;
	i = 0;
	while (i < n && str[i])
	{
		if (str[i] == c)
			return (str[i]);
		i++;
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