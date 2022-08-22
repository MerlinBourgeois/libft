#include "libft.h"

int     ft_isspace(int c)
{
    return (c == '\f' || c == '\n' || c == '\r' \
    || c == '\t' || c == '\v' || c == ' ');
}

int     ft_atoi(const char *str)
{
    int num;
    int sign;

    num = 0;
    sign = 1;
    while (ft_isspace(*str))
        str++;
    if (*str == '-')
        sign = - 1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
        num = num * 10 + *str++ - '0';
    return (num * sign);
}

/*

#include <stdio.h>

int main(void)
{
    printf("%d" ,ft_atoi("-43ssgr2gdsg"));
}

*/