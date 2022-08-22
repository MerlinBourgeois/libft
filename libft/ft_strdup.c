/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:44:14 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 21:44:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    int i;
    char *dst;

    i = 0;
    dst = malloc(ft_strlen(s) + 1 * sizeof(char));
    if(dst == NULL)
        return (dst);
    while (s[i] != '\0')
    {
        dst[i] = s[i];
        i++;
    }
    return(dst);
}

/*

int main(void)
{
    printf("%s", ft_strdup("hello"));
}

*/