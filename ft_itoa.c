/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:58:51 by kquispe           #+#    #+#             */
/*   Updated: 2024/01/08 13:22:39 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_char(int num, int pos, int end_pos)
{
	int	div;

	div = 1;
	if (num < 0)
		num *= -1;
	while (num / div > 9 && pos != end_pos)
	{
		div *= 10;
		pos++;
	}
	num = num / div;
	num %= 10;
	num += '0';
	return (num);
}

static size_t	len_str(int n)
{
	size_t	i;

	i = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	i;

	i = 0;
	len = len_str(n);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
		str[i++] = '-';
	while (i < len)
	{
		if (n == -2147483648)
		{
			n = 147483648;
			str[i++] = '2';
		}
		str[i] = ft_char(n, i, len - 1);
		i++;
	}
	str[i] = '\0';
	return (str);
}
