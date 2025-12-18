/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:10:23 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/05 15:46:31 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    int i;
    
    i = 0;
    if (n == -2147483648)
        write(fd, "-2147483648", 11);
    else if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    ft_putnbr_fd(n % 10, fd);
    i = n + 48;
    write(fd, &i, 1);
}