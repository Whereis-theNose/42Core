/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:35:14 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 13:54:24 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	if (*set == '\0')
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		size;

	res = NULL;
	if (!s1 || !set)
		return (NULL);
	while (setcheck(*s1, set) == 1 && *s1)
		s1++; 
	size = ft_strlen(s1);
	while (size != 0 && setcheck(s1[size - 1], set) == 1)
		size--;
	res = (char *) malloc(size + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, (char *)s1, size + 1);
	return (res);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
    char *trimmed;

    if (argc < 3)
        return 1;
    trimmed = ft_strtrim(argv[1], argv[2]);
    if (trimmed)
    {
        printf("Original string: %s \nTrimmed string: %s\n", argv[1], trimmed);
        free(trimmed);
    }
    return 0;
}
*/
