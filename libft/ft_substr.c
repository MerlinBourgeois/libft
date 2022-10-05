/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:55:14 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/04 15:28:42 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	res = (char *) malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s[i] && i != len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

/*

int main(void)
{
	printf("%s", ft_substr("bonjourrrrrrrinnnnn", 1, 1));
}

*/