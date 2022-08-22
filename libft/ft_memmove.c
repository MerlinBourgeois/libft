/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:42:09 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 21:42:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*

int main(void)
{
    printf("%s", ft_memmove("hello", "all", 2));
}

*/