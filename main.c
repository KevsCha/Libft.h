#include <string.h>
#include "libft.h"
#include <ctype.h>
int main(void)
{
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
	/*
	*fT_split = :3
	*ft_strjoin = :3
	*ft_strnstr = :3
	*ft_memcmp = :3
	+ft_substr = :3 
	*/
	return (0);
}