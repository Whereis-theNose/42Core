char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *str;

    i=0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    return (str);
}
/*
int main(void)
{
    char    *s;
    char    *str;

    s = "Hakuna Matata";
    str = ft_strmapi(s, )
}
*/