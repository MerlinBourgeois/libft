/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:52:50 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 18:03:13 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	if (count == 0)
		count = 1;
	if (size == 0)
		size = 1;
	void	*res;
	
	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count);
	return (res);
}

/*

int main(void)
{
	printf("%s", ft_calloc(10, 10));
}

*/
