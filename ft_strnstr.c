/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:28:33 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/17 19:59:13 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	if (!str2[0])
		return ((char *)str1);
	if (!num)
		return (0);
	while (*str1 && --num)
	{
		i = 0;
		while (str1[i] == str2[i] && i < num)
		{	
			if (str2[i + 1] == '\0')
				return (str1);
			i++;
		}
		if (str1 != '\0' && i == num)
			return (str1);
		str1++;
	}
	return (0);
}
/*
char	*ft_strnstr(const char *str1, const char *str2, size_t num)
{
	int	i;

	if (!str2[0])
		return ((char *)str1);
	while (*str1 && i < num)
	{
		i = 0;
		while (str1[i] == str2[i] && i < num)
		{
			if (str2[i + 1] == '\0')
				return ((char *)str1);
			i++;
		}
		str1++;
	}
	return (0);
}
*/