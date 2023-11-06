/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:51:07 by kquispe           #+#    #+#             */
/*   Updated: 2023/11/06 14:50:15 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_true(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	char	*strc_cat;

	i = 0;
	j = 0;
	len_s = ft_strlen(s1);
	while (ft_true(set, s1[i]) && s1[i])
		i++;
	while (ft_true(set, s1[len_s - 1]) && (len_s - 1))
		len_s--;
	if (len_s < i)
		len_s = i;
	strc_cat = malloc(len_s - i + 1);
	if (!strc_cat)
		return (NULL);
	while (i < len_s)
		strc_cat[j++] = s1[i++];
	strc_cat[j] = '\0';
	return (strc_cat);
}
