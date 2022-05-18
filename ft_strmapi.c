#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    unsigned int    i;

    i = 0;
    str = (char *)malloc(sizeof(*str) * (ft_strlen(s) + 1));
    if (!str)
        return (0);
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = 0;
    return (str);
}