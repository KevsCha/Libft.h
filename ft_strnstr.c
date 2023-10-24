/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:28:33 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/24 12:51:05 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t num)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!str2[0])
		return ((char *)str1);
	while (str1[i] && i < num)
	{
		n = 0;
		while (str1[i + n] == str2[n] && str1[i + n] && (i + n) < num)
			n++;
		if (str2[n] == '\0')
			return ((char *)str1 + i);
		i++;
	}
	return (0);
}
