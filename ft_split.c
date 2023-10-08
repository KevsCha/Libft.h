/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:45:08 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/06 20:35:34 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_start(const char *str, int posIg, char c)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] == c && start == posIg)
			break;
		if (str[i] == c)
			start++;
		i++;
	}
	i++;
	return (i);
}
size_t	ft_end(const char *str, int posIn, char c)
{
	size_t	i;

	i = 0;
	while (str[posIn] != c)
	{
		i++;
		posIn++;
	}
	return (i);
}

int	ft_Leng_Malloc(char const *str, char c)
{
	int		i;
	size_t	j;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		if(str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}
char	**ft_split(char const *s, char c)
{
	size_t	leng_aStr;
	char	**aStr;
	int		i;
	int		j;

	i = 0;
	leng_aStr = ft_Leng_Malloc(s, c) + 1;
	aStr = (char **)malloc((leng_aStr)  * sizeof(char *));
	if (aStr == NULL)
		return(NULL);
	aStr[leng_aStr] == NULL;
	while(leng_aStr > 1)
	{
		j = ft_start(s, i, c);
		aStr[i] = ft_substr(s, j,ft_end(s, j, c));
		i++;
		leng_aStr--;
	}
	return (aStr);
}