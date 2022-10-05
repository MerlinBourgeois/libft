/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:30:05 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 16:31:49 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n != 0)
	{
		if (*str++ == (unsigned char)c)
			return (str - 1);
		n--;
	}
	return (NULL);
}

/*

int main(void)
{
    char *str = "walalepmerlin";
    printf("%s", ft_memchr(str, 'p', 21));
}

*/