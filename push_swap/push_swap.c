/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deboiech <deboiech@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 12:50:34 by deboiech          #+#    #+#             */
/*   Updated: 2026/03/19 18:05:41 by deboiech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int validator(int argc, char **argv)
{
    int i;
    int j;
    
    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
             if (argv[i][j] == '-')
            {
                if (argv[i][j + 1] < '0' || argv[i][j] > '9')
                    return (0);
            }
            if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != '-')
            {
                return (0);
            }
           
            j++;
        }
        
        i++;
    }
    return (1);
}

llist   *atoilist(int argc, char **argv)
{
    int     i;
    llist   *newlist;
    
    i = 1;
    while (i < argc)
    {
        newlist->content = ft_atoi(argv[i]);
        newlist = newlist->next;
        i++;
    }
    return (newlist);
}

int main(int argc, char **argv)
{
    int number;
    // char    **string;

    if (argc < 2)
        return (1);
    number = validator(argc, argv);
    printf("%d\n", number);
//     string = argv;
//     number = ft_atoi(string);
//     printf("result: %s\n", string);
     return (0);
}
// if argc < 2 = error
// if argc = 2 -> split
// if argc > 2 -> normal distribution