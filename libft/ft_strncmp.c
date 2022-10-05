/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:01:18 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 12:02:16 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	while (n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*s1 - *s2);
	else
		return (0);
}

/*
#include <string.h>
int	main()
{
	char ptr1[] = "12345";
	char ptr2[] = "12345678910";

	printf("%d\n", ft_strncmp(ptr1, ptr2, 12));
	printf("%d\n", strncmp(ptr1, ptr2, 10));
}
*/
