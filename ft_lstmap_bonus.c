/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:58:09 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/17 17:06:58 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*headlist;
	t_list	*taillist;

	headlist = NULL;
	taillist = NULL;
	while (lst)
	{
		if (headlist == NULL)
			headlist = f(lst->content);
		if (taillist != NULL)
			taillist->next = f(lst->content);
		taillist = f(lst->content);
		lst = lst->next;
	}
	return (headlist);
}
