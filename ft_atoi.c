/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:40:32 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/23 13:52:19 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	const char	*pstr;
	int			num;
	int			buf;
	int			sign;

	pstr = nptr;
	num = 0;
	buf = 0;
	sign = 1;
	if (*pstr == '-')
	{
		sign = -1;
		pstr++;
	}
	while (*pstr >= '0' && *pstr <= '9')
	{
		buf = *pstr - 48;
		num = num * 10 + buf;
		pstr++;
	}
	return (sign * num);
}
/*
int	main(void)
{
	char *nptr = "--1234567890987654321"; 

	printf("Number is %s\n", nptr);
	printf("My function: %d\n", ft_atoi(nptr));
	printf("Original: %d\n", atoi(nptr));
	return (0);
}
*/
