/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:55:14 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/04 12:19:56 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*res;

	if ((start > len) || (start == len))
	{
		return (NULL);
	}
	i = 0;
	res = (char *) malloc((len - start + 1) * sizeof(char));
	while(s[i] && start != len)
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return	(res);
}

/*

int main(void)
{
	printf("%s", ft_substr("bonjour", 2160, 2360));
}

*/