/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 18:05:50 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/06 15:27:22 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	count(int s)
{
	size_t	i;

	i = 0;
	while (s > 0)
	{
		s /= 10;
		i++;
	}
	return(i);
}
char *ft_itoa(int n)
{
	char	*str;
	size_t	i;
	
	i = count(n);
	str = (char *) malloc(i + 1);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		str[i] = n % 10 + '0';
		i--;
	}
	str[count(n)] = '\0';
	return (str);
}

#include <stdio.h>
int	main(void)
{
	int		num;
	char	*result;

	num = -23523;
	result = ft_itoa(num);
	printf("The original number: %d\nThe output string: %s", num, result);
 	free(result);
	return (0);
}
