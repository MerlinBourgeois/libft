/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:29:40 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 12:41:55 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*

//test de tah les fou realise pour l'occasion...

void test(int size)
{
    char string[] = "Et deam les gens c'est tibo en forme";
    char buffer[19];
    int r;

	r = ft_strlcpy(buffer,string,size);
	printf("%d%s%s", r, " \n", buffer);
}

int main()
{
    test(200);
    test(10);
	test(32);

    return(0);
}

*/