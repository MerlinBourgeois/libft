/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:34:04 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/03 13:34:07 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	int		i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * n + 1);
	if (dst == NULL)
		return (dst);
	while (i < n && s[i] != '\0')
	{
		dst[i] = s[i];
		i++;
	}
	return (dst);
}

/*

int main(void)
{
    printf("%s", ft_strndup("hello world", -1));
}

*/