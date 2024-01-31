/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:45:08 by kquispe           #+#    #+#             */
/*   Updated: 2023/11/16 19:10:40 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_start(const char *str, int posig, char c)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	if (posig == 0 && str[0] != c)
		return (0);
	while (str[i])
	{
		if (i == 0)
			while (str[i] == c)
				i++;
		if (str[i] == c && str[i + 1] != c)
			start++;
		if (posig == 0)
			i--;
		if (start == posig)
			break ;
		i++;
	}
	i++;
	return (i);
}

static size_t	ft_end(const char *str, int posin, char c)
{
	size_t	i;

	i = 0;
	while (str[posin] != c && str[posin] != '\0')
	{
		i++;
		posin++;
	}
	return (i);
}

static int	ft_leng_malloc(char const *str, char c)
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

static char	**freetwo(char **astr, int i)
{
	while (i >= 0)
	{
		free(astr[i]);
		i--;
	}
	free(astr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	leng_astr;
	char	**astr;
	int		start;
	int		end;
	int		i;

	i = 0;
	leng_astr = ft_leng_malloc(s, c) + 1;
	astr = (char **)malloc((leng_astr) * sizeof(char *));
	if (astr == NULL)
		return (NULL);
	astr[leng_astr - 1] = NULL;
	while (leng_astr > 1)
	{
		start = ft_start(s, i, c);
		end = ft_end(s, start, c);
		astr[i] = ft_substr(s, start, end);
		if (!astr[i])
			return (freetwo(astr, i - 1));
		i++;
		leng_astr--;
	}
	return (astr);
}
