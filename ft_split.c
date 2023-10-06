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

//s = " hola  como estas";
// c = " ";

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	j;
	char	**arrStr;

	i = 0;
	j = 1;
	//con esto calculo el leng de las palabras
	while (s[i])
	{
		if (s[i] != c && s[i + 1] == c)
		{
			printf("%d\n", i);
			j++;
		}
		else if (s[i] == c && s[i + 1] == '\0')
			j--;
		i++;
	}
	
	
	//TODO:Contar palabras  dependiendo del caracter pasado en  "c"
	//HAcer un malloc con el iterardor contado
	//utilizar
	// str = (char **)malloc
	// str[i] = ft_substr
	 printf("len _ %ld\n%d", j, i);
	return (0);
}
