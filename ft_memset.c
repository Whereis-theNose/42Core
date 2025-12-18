/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:56:46 by deboiech          #+#    #+#             */
/*   Updated: 2025/11/24 12:00:42 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	int	i;
	int	*p;

	i = 0;
	p = str;
	while (i < n)
	{
		*p = c;
		p++;
	}
	return (str);
}
