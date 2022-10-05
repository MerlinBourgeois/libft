/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:50:22 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 17:50:57 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
		size_t		i;
	int			j;
	size_t		dst_len;
	size_t		src_len;

	if (dstsize == 0)
		return (0);
	i = ft_strlen(dst);
	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize < dst_len + 1)
		return (src_len + dstsize);
	if (dstsize > dst_len + 1)
	{
		while (i < dstsize - 1)
			*(dst + i++) = *(src + j++);
		*(dst + i) = '\0';
	}
	return (dst_len + src_len);
}

/*

int main(void)
{
	char dst[100] = "hello";
	char src[100] = "helloccdcd";
	printf("%zu", ft_strlcat(0, 0, 7));
	//printf("%zu", strlcat(0, 0, 7));
}

*/