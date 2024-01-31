/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:33:16 by kquispe           #+#    #+#             */
/*   Updated: 2023/11/18 03:14:34 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t bit)
{
	char	*arr;
	size_t	i;

	arr = (char *)malloc(num * bit);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < num * bit)
		arr[i++] = '\0';
	return (arr);
}
