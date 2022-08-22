#include "libft.h"

int ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
        c = c + 32;
    return (c);
}

/*

int main(void)
{
    printf("%c", ft_tolower('Z'));
}

*/