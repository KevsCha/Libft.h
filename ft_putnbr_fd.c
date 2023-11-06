/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:28:54 by kquispe           #+#    #+#             */
/*   Updated: 2023/11/06 14:48:45 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	expo(int n)
{
	int	i;
	int	div;

	i = 0;
	div = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	while (--i > 0)
		div *= 10;
	return (div);
}

static int	max_int(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = -(n % 1000000000);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		dig;
	int		div;

	n = max_int(n, fd);
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
	else
	{
		div = expo(n);
		while (div != 0)
		{
			dig = ((n / div) % 10) + '0';
			div /= 10;
			ft_putchar_fd(dig, fd);
		}
	}
}
