/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:44:24 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 21:44:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
	{
		if (*s-- == (char)c)
		{
			return ((char *)s + 1);
		}
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

/*

int main(void)
{
    printf("%s", ft_strrchr("heloe\nlloq", '\0'));
}

*/