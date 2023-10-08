/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 12:58:51 by kquispe           #+#    #+#             */
/*   Updated: 2023/10/08 12:58:51 by kquispe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    ft_char(int num, int pos, size_t end_pos)
{
    int div;

    div = 1;
    num = (num < 0) ? num * -1 : num;
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

size_t len_str(int n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (1);
    i = (n < 0) ? 1 : 0;
    while (n != 0)
    {
        n /= 10;
        i++;
    }
    return (i);
}
char *ft_itoa(int n)
{
    char    *str;
    size_t  len;
    size_t  i;

    i = 0;
    len = len_str(n);
    str = (char *)malloc(len + 1 * sizeof(char));
    if (str == NULL)
        return (NULL);
    if ( n < 0)
        str[i++] = '-';
    while (i < len)
    {
        str[i] = ft_char(n, i, len - 1);
        i++;
    }
    str[i] = '\0';
    return (str);
}