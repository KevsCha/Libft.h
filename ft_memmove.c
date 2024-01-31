/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:34:06 by kquispe           #+#    #+#             */
/*   Updated: 2023/11/17 21:24:56 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ft_dest;
	unsigned char	*ft_src;
	size_t			i;

	if (!dest && !src)
		return (dest);
	ft_dest = (unsigned char *)dest;
	ft_src = (unsigned char *)src;
	i = 0;
	if (ft_dest > ft_src && ft_dest < ft_src + n)
	{
		while ((int)--n != -1)
			ft_dest[n] = ft_src[n];
	}
	else
	{
		while (n--)
		{
			ft_dest[i] = ft_src[i];
			i++;
		}
	}
	return (ft_dest);
}
