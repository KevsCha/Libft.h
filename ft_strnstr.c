/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:28:33 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/01 17:21:53 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t num)
{
	int		i;
	while (*str1 && --num)
	{
		i = 0;
		while (str1[i] == str2[i])
		{
			if (str2[i + 1] == '\0')
				return ((char *)str1);
			i++;	
		}
		str1++;
	}
	return (0);
}