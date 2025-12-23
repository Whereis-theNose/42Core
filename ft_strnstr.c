/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:25:15 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 20:06:45 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*pbig;
	char	*plittle;
	size_t	i;
	size_t	j;

	pbig = (char *)big;
	plittle = (char *)little;
	i = 0;
	if (*little == '\0')
		return (pbig);
	while (pbig[i])
	{
		j = 0;
		while (pbig[i + j] == plittle[j] && plittle[j] && j < len)
		{
			j++;
		}
		if (!plittle[j])
			return (&pbig[i]);
		i++;
	}
	return (0);
}
