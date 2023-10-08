#include <string.h>
#include "libft.h"
#include <ctype.h>
int main(void)
{
	int c = -456;
	char *str;
	str = ft_itoa(c);
	printf("%s", str);
	free(str);
	//printf("%s", ft_itoa(c));
	/*
	*ft_itoa = :3
	*fT_split = :3
	*ft_strjoin = :3
	*ft_strnstr = :3
	*ft_memcmp = :3
	+ft_substr = :3 
	*/
	/*
	char *str1 = " hdo lahhh o   ";
	char c = ' ';
	char **strs;
	strs = ft_split(str1, c);
	int k = 0;
	int	a = 0;
	while (strs[k] != NULL)
	{
		printf("%s\n", strs[k]);
		free(strs[k]);
		k++;
	}
	printf("%d", k);
	free(strs);
	*/
	return (0);
}