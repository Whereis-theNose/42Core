/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:25:52 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/18 14:53:32 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t		i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] && i < n && str1[i] == str2[i])
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
