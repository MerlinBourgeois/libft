/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:52:50 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/14 12:34:49 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (!size)
		return (malloc(0));
	if (count >= SIZE_MAX / size)
		return (0);
	res = NULL;
	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
#include <errno.h>
int main(void)
{
	register unsigned long *rbp asm("rbp");
	//printf("%p\n", ft_calloc(0, 0));
	//printf("%p\n", calloc(0, 0));
	char *s = ((char *)ft_calloc(LONG_MAX, 1));
	printf("errno:%d\n", errno);
	int i = -10000000;
	while (1)
	{
		printf("%d\n", *(s + i));
		printf("%p\n", (s + i));
		printf("%d\n", i);
		i++;
	}
	printf("%p\n", rbp);
}