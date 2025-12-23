/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:36:11 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 13:52:55 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *) str)[i] = '\0';
		i++;
	}
}

/*
int	main(void)
{
	void	*str;

	str = malloc (10);
	ft_bzero(str, 4);

	return (0);
}
*/