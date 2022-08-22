#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *bufferSrc;
    unsigned char *bufferDst;

    bufferSrc = (unsigned char *)src;
    bufferDst = (unsigned char *)dst;
    if(src > dst)
    {
        while (len--)
        {
            *bufferDst++ = *bufferSrc++;
        }
    }
    return (dst);
}

int main(void)
{
    printf("%s", ft_memmove("hello", "all", 2));
}