/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 17:09:06 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/08 16:04:14 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t len1(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static size_t len2(const char *str, char c)
{
    size_t  i;
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

char **ft_split(char const *s, char c)
{
	char	*str1;
	char	*str2;
	char	**res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	str1 = malloc(len1(s,c) + 1);
	if (!str1)
		return (NULL);
	str2 = malloc(len2(s,c) + 1);
	if (!str2)
		return (NULL);
	res = malloc(3 * sizeof *res);
	if (!res)
		return (NULL);
	while (s[i] != c)
	{
		str1[i] = s[i];
		i++;
	}
	str1[i] = '\0';
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
/*
#include <stdio.h>
int	main(int argc, char **argv)
{
    char **res;

    if (argc != 3)
    {
        printf("Insert string, then character");
        return (1);
    }
    res = ft_split(argv[1], argv[2][0]);
    printf("The original string %s is split into %s and %s\n", argv[1], res[0], res[1]);
	free(res);
    return (0);
}
*/