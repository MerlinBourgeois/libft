/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:01:18 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/11 09:49:42 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{	
	unsigned char	*s1cast;
	unsigned char	*s2cast;

	s1cast = (unsigned char *)s1;
	s2cast = (unsigned char *)s2;
	while (n && *s1cast && *s1cast == *s2cast)
	{
		s1cast++;
		s2cast++;
		n--;
	}
	if (n)
		return (*s1cast - *s2cast);
	else
		return (0);
}

/*

int	main()
{
	char ptr1[] = "12345";
	char ptr2[] = "12345678910";

	printf("%d\n", ft_strncmp(ptr1, ptr2, 12));
	printf("%d\n", strncmp(ptr1, ptr2, 10));
}

*/