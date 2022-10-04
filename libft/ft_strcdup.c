/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:33:16 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/03 13:33:18 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s, int c)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	while (s[i] != c)
		i++;
	dst = malloc(i + 1 * sizeof(char));
	j = i;
	i = 0;
	while (i != j)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*

int main(void)
{
    printf("%s", ft_strcdup("hel\0lo\0", '\0'));
}

*/