/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:44:44 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/15 17:16:54 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    deletMem(void *content)
{
    free(content);   
}

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;

    while (*(lst))
    {
        temp = (*lst) -> next;
        del((*lst) -> content);
        free((*lst));
        (*lst) = temp;
    }
}