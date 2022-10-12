/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:50:22 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/11 10:36:54 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	c;
	unsigned int	d;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

/*

int main(void)
{
	char *dst= "beepboop";
	char *src = "testtestestestestes";
	char *dst1= "beepboop";
	char *src1 = "testtestestestestes";
	printf("%zu\n", ft_strlcat(dst, src, 0));
	printf("%zu\n", strlcat(dst1, src1, 0));
	printf("%s\n",dst);
	printf("%s",dst1);
}

*/