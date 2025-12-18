#include "bsd/string.h"
#include "stdlib.h"

static int	ft_check_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = strlen(s1);
	while (size != 0)
	{
		if (ft_check_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (NULL);
	strlcpy(new, (char *)s1, size + 1);
	return (new);
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
