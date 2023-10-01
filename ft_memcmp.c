/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:40:01 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/01 16:52:44 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *cmp1;
    char    *cmp2;
    size_t  i;

    cmp1 = (char *)s1;
    cmp2 = (char *)s2;
    i = 0;
    while (cmp1[i] && cmp2[i] && i < n)
    {
        if (cmp1[i] != cmp2[i])
			return (cmp1[i] - cmp2[i]);
		i++;
	}
    return (cmp1[i] - cmp2[i]);
}