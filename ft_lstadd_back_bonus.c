/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:16:09 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/15 21:32:56 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
		*lst = new;
	else
	{
		while ((*lst) -> next)
			*lst = (*lst) -> next;
		(*lst) -> next = new;
	}
}