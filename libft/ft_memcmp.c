/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:43:40 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 21:43:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long	i;
	int				j;

	i = 0;
	while (i < n)
	{
		j = *(unsigned char *)s1++ - *(unsigned char *)s2++;
		if (j)
			return (j);
			i++;
	}
	return (0);
}

/*

int main() {

    int array1 [] = { 54, 85, 20, 63, 21 };
    int array2 [] = { 53, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;

    assert( memcmp( array1, array2, size) 
	== ft_memcmp( array1, array2, size) );            
    
    printf( "Test is ok\n" );
    
    return 0;
}

*/