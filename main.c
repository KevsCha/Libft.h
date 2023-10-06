
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *trim = "hola este es un ejemplo de imaginacion";
	char *set = "aeiou";
	printf("%s",ft_strtrim(trim, set));

	/*
	 * ft_strjoin !? falta hacer por tengo q utilizar la funcion strncat
	char *s1 = "hola";
	char *s2 = " buenos dias";
	printf("%s", ft_strjoin(s1, s2));
	*/
	/*	
	 *ft_substr
	char *str = "hola buenos dias";
	char *sub = ft_substr(str, 5, 10);
	printf("%ld", ft_strlen(sub));
	*/
	return (0);
}
