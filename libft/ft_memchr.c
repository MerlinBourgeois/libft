#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    
    str = (unsigned char *)s;
    while (n != 0)
        if (*str++ == (unsigned char)c)
            return (str - 1);
    return (NULL);
}

/*

int main(void)
{
    char *str = "coucoupioik";
    printf("%s", ft_memchr(str, 'p', 2147483648));
}

*/