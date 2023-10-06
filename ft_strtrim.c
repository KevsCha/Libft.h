#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len_s;
	char	*strCcat;

	i = 0;
	len_s = ft_strlen(s1) - 1; 
// y de esas pocicones crear un calcular un leg y ponerlo con un 
// malloc a la nueva string desde tal poscion hasta la final de posc
	while (s1[i] && strchr(set, s1[i]) != NULL)
		i++;
	while (s1[len_s] && strchr(set, s1[len_s]) != NULL)
		len_s--;

	/*
	TODO: calcular el leng entre los espacios que donde se encotraron las
	coincidencias, malloc, while, caracter null,  return 
	while (i + 1 <  )
	{

	}
	*/
	printf("%zu _ %zu\n", i, len_s);
	printf("%c __ %c", s1[i], s1[len_s]);


	return ("\nreturn");
}
