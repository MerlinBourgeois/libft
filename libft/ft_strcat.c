/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:33:06 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/10 15:40:57 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(dst);
	while (src[i] != '\0')
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (dst);
}

/*

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("-----------------\n");
	char *head;
	char dest[100] = "abc";
	char src[] = "acdfjdvhj";
	head =  ft_strcat(dest, src);
	printf("\n%s ", head);
	for (int i = 0; i < 15; i++)
		printf("%d ", head[i]);
	char _dest[10] = "abc";
	head = strcat(_dest, src);
	printf("\n%s ", head);
	for (int i = 0; i < 15; i++)
		printf("%d ", head[i]);

}

*/