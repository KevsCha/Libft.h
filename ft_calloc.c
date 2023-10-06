/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:33:16 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/01 15:33:36 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t num, size_t bit)
{
	char	*arr;

	arr = (char *)malloc(num * bit);
	ft_bzero(arr, num *bit);
	return (arr);
}
