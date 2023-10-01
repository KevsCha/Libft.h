/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:21:32 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/01 20:10:36 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*temp;
	int		i;

	temp = (char *)s;
	i = 0;
	while (i < ft_strlen(temp + 1))
	{
		if (temp[i] == c)
			return (temp + i);
		i++;
	}
	return (0);
}
