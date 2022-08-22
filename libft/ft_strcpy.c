/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:44:08 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 21:44:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*

#include <stdio.h>
#include <string.h>

int main(void)
{
    	char dest[13];
	char src[] = "aonjour asdf\0 asdf";
	ft_strcpy(dest, src);
	for (int i = 0; i < 13; i++)
		printf("%d ", dest[i]);
	printf("\n%s\n", dest);
	strcpy(dest, "");
	strcpy(dest, src);
	for (int i = 0; i < 13; i++)
		printf("%d ", dest[i]);
	printf("\n%s\n", dest);

}

*/