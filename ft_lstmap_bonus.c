/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 17:58:09 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/15 22:03:31 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *headList;
	t_list *tailList;
	int	i;

	headList = NULL;
	tailList = NULL;
	i = 0;
    while (lst && i < 10)
    {
		if (headList == NULL)
			headList = f(lst -> content);
		if (tailList != NULL)
			tailList -> next = f(lst -> content);
		tailList = f(lst -> content);
		
		i++;
		lst = lst -> next;
		printf("%d", i);
    }
    return (headList);
}