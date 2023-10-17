/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:31:51 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/15 21:59:01 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list  *new;
 
    new = (t_list *)malloc(sizeof(t_list));
    if(!new)
        return(NULL);
    new -> content = content;
    new -> next = NULL;
    return(new);
}