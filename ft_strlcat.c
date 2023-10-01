/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:50:10 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/01 17:28:07 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	size_dest;
	size_t	end;

	i = 0;
	size_dest = ft_strlen(dest);
	if (size - size_dest > 0)
		end = size - 1 -size_dest;
	while (i < end && src[i])
	{	
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + ft_strlen(src));
}
