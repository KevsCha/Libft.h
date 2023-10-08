#include <string.h>
#include "libft.h"
#include <ctype.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void con(unsigned int index, char c)
{
	if (c >= 'a' && c <= 'z')
		printf("%c",c);
	else if (c >= 'A' && c <= 'Z')
		printf("%c",c);
	else 
		printf("%c",c);
}
int main(void)
{
	char *str = "HOLA GUAPETON";
	ft_putchar(str[0]);
	//ft_striteri(str, &con);
	/*
	*ft_strmapi = :c
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