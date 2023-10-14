/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:25:28 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/14 19:20:58 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list **list;

    list = lst;
    if (!(*lst))
        *lst = new;
    else
    {
        new -> next = (struct s_list *)(*list);
        *lst = new;
       // printf("%s", lst -> content);
    }
}