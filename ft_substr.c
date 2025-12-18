/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:56:11 by deboiech          #+#    #+#             */
/*   Updated: 2025/12/10 17:46:37 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new;
    size_t  i;

    i = 0;
    new = malloc(len + 1);
    if (new == NULL)
        return (NULL);
    while (s[start + i] && i < len)
    {
        new[i] = s[start + i];
        i++;
    }
   return (new);
}
/*
#include <stdio.h>

int main(void)
{
    char *s = "mansfCarpe Diem!wqeqweq";

    printf("The original string: %s\nThe substring: %s", s, ft_substr(s, 5, 10));
    return (0);
}
    */