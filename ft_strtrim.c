#include <stdlib.h>

static void ft_strcpy(char *dest, const char *src)
{
    int         i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

static int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strtrim(char const *s1, char const *set)
{
    const char    *str;
    int           i;

    i = ft_strlen(set) - 1;
    str = malloc(ft_strlen(s1) - ft_strlen(set) + 1);
    if (!str)
        return (NULL);
    ft_strcpy(str, s1[i]);
    return (str);
}

#include <stdio.h>

int main(int argc, char **argv)
{
    char *trimmed;

    if (argc < 3)
        return 1;
    trimmed = ft_strtrim(argv[1], argv[2]);
    if (trimmed)
    {
        printf("'%s'\n", trimmed);
        free(trimmed);
    }
    return 0;
}

// Return value: The trimmed string.
//  NULL if the allocation fails.