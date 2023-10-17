/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:23:40 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/17 18:51:40 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		temp;

	ptr = (char *)s;
	temp = ft_strlen(ptr) - 1;
	if ((char)c == '\0')
		return (ptr + temp + 1);
	while (temp >= 0)
	{
		if (ptr[temp] == (char)c)
			return (ptr + temp);
		temp--;
	}
	return (0);
}
