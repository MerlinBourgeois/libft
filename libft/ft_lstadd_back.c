/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mebourge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:18:52 by mebourge          #+#    #+#             */
/*   Updated: 2022/10/11 19:05:07 by mebourge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	l = ft_lstlast(*lst);
	l->next = new;
}

// int main(void)
// {
// 	t_list **save;
// 	t_list **list;
// 	t_list elem1;
// 	t_list elem2;
// 	t_list elem3;
// 	t_list elem4;
// 	elem1.next = &elem2;
// 	elem2.next = &elem3;
// 	elem3.next = NULL;
// 	elem1.content = "gnah";
// 	elem2.content = "gnih";
// 	elem3.content = "gnoh";
// 	elem4.content = "gneh";
// 	elem4.next = NULL;
// 	*list = &elem1;
// 	save = list;
// 	// while (*list)
// 	// {
// 	// 	printf("%s\n", (*list)->content);
// 	// 	*list = (*list)->next;
// 	// }
// 	*list = NULL;
// 	printf("%d\n", ft_lstsize(*list));
// 	ft_lstadd_back(list, &elem4);
// 	printf("%d\n", ft_lstsize(*list));
// 	list = save;
// 	while (*list)
// 	{
// 		printf("%s\n", (*list)->content);
// 		*list = (*list)->next;
// 	}
// 	return 0;
// }