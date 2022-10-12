/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:30:19 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/11 08:36:43 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		isneg = (str[i] == '-');
		i++;
	}
	while (str[i] != '\0' && ft_isdigit(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (isneg == 1 && (-nbr) > 2147483648)
		return (0);
	if (isneg == 0 && (-nbr) > 2147483647)
		return (-1);
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	(void)argc;
//     printf("%d" ,ft_atoi(*(++argv)));
// 	printf("%s", "\n");
// 	printf("%d" ,atoi(*argv));
// }