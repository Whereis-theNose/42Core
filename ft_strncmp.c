/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:09:40 by deboiech          #+#    #+#             */
/*   Updated: 2025/11/24 12:28:13 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (str1[i] == str2[i] && i < n && str1)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
