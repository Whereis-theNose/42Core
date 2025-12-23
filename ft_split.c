/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:09:06 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 19:31:37 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len1(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static size_t	len2(const char *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	i++;
	j = 0;
	while (str[i + j])
		j++;
	return (j);
}

static void	cpyfirst(char const *s, char c)
{
	char	*str1;
	int		i;

	i = 0;
	str1 = NULL;
	while (s[i] != c)
	{
		str1[i] = s[i];
		i++;
	}
	str1[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	*str1;
	char	*str2;
	char	**res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str1 = malloc(len1(s, c) + 1);
	str2 = malloc(len2(s, c) + 1);
	res = malloc(3 * (sizeof res));
	if (!res || !str1 || !str2)
		return (NULL);
	cpyfirst(s, c);
	i++;
	while (s[i + j])
	{
		str2[j] = s[i + j];
		j++;
	}
	str2[j] = '\0';
	res[0] = str1;
	res[1] = str2;
	res[2] = NULL;
	return (res);
}
