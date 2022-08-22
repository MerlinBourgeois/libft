/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:44:04 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 21:44:04 by marvin           ###   ########.fr       */
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