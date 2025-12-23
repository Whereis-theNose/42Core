/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:44:01 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 19:58:54 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		i;

	i = 0;
	p = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	if (c == '\0')
		return (&p[i]);
	while (*p)
	{
		if (*p == c)
			return (p);
		p++;
	}
	return (p);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*s;

	s = "Hakuna Matata";

	printf("My function: %s\n", ft_strchr(s, 'n'));
	printf("Original function: %s", strchr(s, 'n'));
}
*/