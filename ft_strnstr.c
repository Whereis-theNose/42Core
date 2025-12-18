/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:25:15 by deboiech          #+#    #+#             */
/*   Updated: 2025/11/24 15:40:10 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*pBig;
	char	*pLittle;
	size_t	i;
	size_t	j;

	pBig = big;
	pLittle = little;
	i = 0;
	if (*little == '\0')
		return (big);
	while (pBig[i])
	{
		j = 0;
		while (pBig[i + j] == pLittle[j] && pLittle[j] && j < len)
		{
			j++;
		}
		if (!pLittle[j])
			return (pBig[i]);
		i++;
	}
	return (0);
}
