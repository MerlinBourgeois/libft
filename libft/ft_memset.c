/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:32:59 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 11:32:36 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len != 0)
	{
		*str++ = (unsigned char)c;
		len--;
	}
	return (b);
}

/*

int main()
{
	char str[80] = "This is string.h library function";

	puts(str);

	ft_memset(str, 'y',70);
	puts(str);

	return(0);
}

*/