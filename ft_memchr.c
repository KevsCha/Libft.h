/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:31:51 by kquispe           #+#    #+#             */
/*   Updated: 2023/11/06 14:31:38 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t num)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)ptr;
	while (i < num)
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	return (0);
}
