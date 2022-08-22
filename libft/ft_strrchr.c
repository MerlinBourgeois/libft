#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *str;

    str = s;
    while (*s)
        s++;
    while(s >= str)
    {
        if(*s-- == (char)c)
        {
            return((char *)s + 1);
        }
    }
    if (c == '\0')
        return ((char *)s);
    return (NULL);   
}

/*

int main(void)
{
    printf("%s", ft_strrchr("heloe\nlloq", '\0'));
}

*/