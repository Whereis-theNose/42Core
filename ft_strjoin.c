/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:41:48 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 13:43:12 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	size_t	size;

	size = ft_strlen(s1) + ft_strlen(s2);
	str1 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	str2 = malloc(ft_strlen(s2) + 1);
	if (!str1 || !str2)
		return (NULL);
	ft_strlcpy(str1, s1, ft_strlen(s1));
	ft_strlcpy(str2, s2, ft_strlen(s2));
	ft_strlcat(str1, str2, size); 
	return (str1);
}
/*
#include <stdio.h>
int main()
{
	char str1[] = "Hello, ";
	char str2[] = "World!";
	char *result;

	result = ft_strjoin(str1, str2);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	return (0);
}
	*/