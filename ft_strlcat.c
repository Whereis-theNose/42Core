/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:43:50 by deboiech          #+#    #+#             */
/*   Updated: 2025/11/24 11:47:44 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dst[j])
	{
		j++;
	}
	while (i < (size - j) && src[i])
	{
		dst[j + i] = src[i];
		i++
	}
	dst[j + i] = '\0';
	
	return ();
}
