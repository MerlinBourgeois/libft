/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:30:41 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 11:35:03 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n != 0)
	{
		*str++ = '\0';
		n--;
	}
	return (str);
}

/*

int main(void)
{
	printf("%s", ft_bzero("hello", 5));
}

*/