/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:32:46 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/12 10:02:48 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buffersrc;
	unsigned char	*bufferdst;

	buffersrc = (unsigned char *)src;
	bufferdst = (unsigned char *)dst;
	if (bufferdst < buffersrc)
		while (len--)
			*bufferdst++ = *buffersrc++;
	if (bufferdst > buffersrc)
		while (len--)
			bufferdst[len] = buffersrc[len];
	return (dst);
}

/*

int main(void)
{
	// char yolo[60] = "chameaulamaalpaga";
	char alpaga[6];
	char lama[] = {97, 108, 112, 97, 103, 97};
    //printf(">>%s\n", lama);
	ft_memmove(alpaga, lama, 5);
	int i = 0;
	while (i < 5)
		printf("%c", lama[i++]);
	printf("\n");
	return (0);
}

*/