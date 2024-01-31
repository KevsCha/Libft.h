/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 00:50:10 by kquispe           #+#    #+#             */
/*   Updated: 2023/11/17 21:30:43 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;
	size_t	end;

	i = 0;
	end = 0;
	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	if (size == 0)
		return (size_src);
	if (size <= size_dest)
		return (size_src + size);
	if (size - size_dest > 0)
		end = size - 1 - size_dest;
	while (i < end && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
