#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *ft_dest;
	unsigned char *ft_src;
	size_t	i;

	i = 0;
	ft_dest = (unsigned char*)dest;
	ft_src = (unsigned char*)src;
	if (ft_dest > ft_src && ft_src + n > ft_dest)
	{
		while(--n)
			ft_dest[n] = ft_src[n];
	}
	else
	{
		while(--n)
		{
			ft_dest[i] = ft_src[i];
			i++;
		}
	}
	return(0);
}
