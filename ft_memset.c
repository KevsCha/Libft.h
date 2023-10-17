/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:40:37 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/17 16:40:04 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = (unsigned char *)ptr;
	while (i < n)
	{
		str[i] = val;
		i++;
	}
	return (str);
}
