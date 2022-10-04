/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:33:25 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/03 13:33:28 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s++ == (char)c)
		{
			return ((char *)s - 1);
		}
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*

int main(void)
{
    printf("%s", ft_strchr("heloe\nlloq", 'h'));
}

*/