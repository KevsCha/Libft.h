/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:45:08 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/17 17:02:29 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_start(const char *str, int posig, char c)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] == c && start == posig)
			break ;
		if (str[i] == c)
			start++;
		i++;
	}
	i++;
	return (i);
}

size_t	ft_end(const char *str, int posin, char c)
{
	size_t	i;

	i = 0;
	while (str[posin] != c)
	{
		i++;
		posin++;
	}
	return (i);
}

int	ft_leng_malloc(char const *str, char c)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	leng_astr;
	char	**astr;
	int		i;
	int		j;

	i = 0;
	leng_astr = ft_leng_malloc(s, c) + 1;
	astr = (char **)malloc((leng_astr) * sizeof(char *));
	if (astr == NULL)
		return (NULL);
	astr[leng_astr] = NULL;
	while (leng_astr > 1)
	{
		j = ft_start(s, i, c);
		astr[i] = ft_substr(s, j, ft_end(s, j, c));
		i++;
		leng_astr--;
	}
	return (astr);
}
