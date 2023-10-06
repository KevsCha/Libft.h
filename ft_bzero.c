#include "libft.h"
void *ft_bzero(char *s, size_t n)
{
	unsigned char *str;
	size_t i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (0);
}
