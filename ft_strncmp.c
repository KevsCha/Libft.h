/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 12:36:45 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/01 15:38:02 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t size)
{
    while (*str1 && *str2 && --size)
    {
		if(*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
    }
    return (*str1 - *str2);
}