#include <stdlib.h>

static int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

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

static char *ft_strcat(char *dest, const char *src)
{
    char *ptr;

    ptr = dest;
    while (*ptr)
        ptr++;
    while (*src)
    {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str1;
    char    *str2;

    str1 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    str2 = malloc(ft_strlen(s2) + 1);
    if (!str1 || !str2)
        return (NULL);
    ft_strcpy(str1, s1);
    ft_strcpy(str2, s2);
    str1 = ft_strcat(str1, str2); 
    return (str1);  
}

#include <stdio.h>
int main()
{
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char *result;

    result = ft_strjoin(str1, str2);
    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return (0);
}