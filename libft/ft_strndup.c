#include "libft.h"

char *ft_strndup(const char *s, size_t n)
{
    int i;
    char *dst;

    i = 0;
    dst = malloc(sizeof(char) * n + 1);
    if(dst == NULL)
        return (dst);
    while (i < n && s[i] != '\0')
    {
        dst[i] = s[i];
        i++;
    }
    return(dst);
}

/*

int main(void)
{
    printf("%s", ft_strndup("hello world", -1));
}

*/