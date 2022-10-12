/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:52:43 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/10 15:33:07 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstcast;
	const char	*srccast;

	if (dst == src || n == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	dstcast = (char *)dst;
	srccast = (const char *)src;
	while (n--)
		*dstcast++ = *srccast++;
	return (dst);
}

/*

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int length = sizeof( int ) * 5;
       
    copy = (int *) malloc( length );
    memcpy( copy, array, length );
        
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return EXIT_SUCCESS;
}

*/