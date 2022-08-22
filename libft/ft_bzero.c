/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:42:48 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 21:42:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    
    str = (unsigned char *)s;
    while (n != 0)
        *str++ = (unsigned char)'\0';
}