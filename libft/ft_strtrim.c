/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:20:31 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/05 16:09:57 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	res = (char *) malloc(78 * sizeof(char));
	while (s1[i] == *set++ && i != ft_strlen(set))
		i++;
	while (s1[i])
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

/*

int main(void)
{
	printf("%s", ft_strtrim("nbonjour1ouiouibonjour", "bnj"));
}

*/