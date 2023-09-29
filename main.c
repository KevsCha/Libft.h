#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"
int main(void)
{
	char *str1 = "hola mundo";
	char *str2 = "HOLA MUNDO";
	char dest[] = "buen dia";
	char ft_dest[] = "hoy es un buen dia";
	char *ft_at = "   -1-2345678";
	char buff[10];
	int i = 0;

/*----------ft_strdup----------*/
/*	
	char *copy;
	char *copy2;
	copy = strdup(str1);
	printf("Este es el texto copiado: %s\n", copy);
	free(copy);
	copy2 = ft_strdup(dest);
	while (copy2[i])
	{
		printf("%c", copy2[i]);
		i++;
	}
	printf("texto copiado: %s", copy2);
	free(copy2);
*/	
/*----------ft_bzero-----------*/
	
	(char *)ft_bzero(buff, sizeof(buff));
	while (i < sizeof(buff))
	{
		buff[i] = i + '0';
		printf("%c", buff[i]);
		i++;
	}
	
/*----------ft_calloc----------*/
/*		
	char *arr;
	int n = 0;

	arr = (char *)ft_calloc(5, sizeof(char));
	printf("\n");	
	while (n < 5)
	{
		printf("%c_", arr[n]);
		n++;
	}
	free(arr);
	*/
/*----------ft_atoi------------*/
	
	printf("%d\n", ft_atoi(ft_at));
	
/*----------ft_strnstr---------*/
	
	printf("%d\n", ft_strnstr(dest, ft_dest, 6));
	
/*----------ft_memchr----------*/
	/*
	printf("%s",(char *)ft_memchr(dest, 'e', 10));
	
	ft_memmove(ft_dest, ft_dest + 3, 11);
	printf("\n%s\n", ft_dest);
	
	ft_strlcpy(buff, "holacola", 8);
	printf("%s", buff);
	*/
	if (ft_isdigit('a'))
		printf("es un numero\n");
	if (ft_isalnum(','))
		printf("es un alfanumerico");
	if (ft_isascii(127))
		printf("es un ascii");
	return (0);
}
