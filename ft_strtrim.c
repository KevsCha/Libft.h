#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	len_s1;

	len_s1 = ft_strlen(s1) - 1;

// tengo que buscar las coincidencias de set al principio y al final 
// y de esas pocicones crear un calcular un leg y ponerlo con un 
// malloc a la nueva string desde tal poscion hasta la final de posc
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[len_s1] && ft_strchr(set, s1[len_s1]))
		len_s1--;
	printf("%c___%c",s1[i], s1[len_s1]);
	str = (char *)s1;

	return (0);
}
