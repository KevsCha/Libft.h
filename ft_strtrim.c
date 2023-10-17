/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:51:07 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/17 16:52:13 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	lentot(size_t in, size_t leng)
{
	size_t	i;

	i = 0;
	while (in <= leng)
	{
		in++;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len_s;
	size_t	j;
	char	*strc_cat;

	i = 0;
	j = 0;
	len_s = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (s1[len_s] && ft_strchr(set, s1[len_s]) != NULL)
		len_s--;
	len_s = lentot(i, len_s);
	strc_cat = (char *)malloc(len_s + 1);
	while (j < len_s)
	{
		strc_cat[j] = s1[i];
		j++;
		i++;
	}
	strc_cat[j] = '\0';
	return (strc_cat);
}
