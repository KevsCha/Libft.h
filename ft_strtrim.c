#include "libft.h"

size_t	lenTot(size_t in, size_t leng)
{
	size_t	i;

	i = 0;
	while (in <= leng)
	{
		in++;
		i++;
	}
	return (i);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len_s;
	size_t	j;
	char	*strCcat;

	i = 0;
	j = 0;
	len_s = ft_strlen(s1) - 1; 
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	while (s1[len_s] && ft_strchr(set, s1[len_s]) != NULL)
		len_s--;
	len_s = lenTot(i, len_s);
	strCcat = (char *)malloc(len_s + 1);
	while (j < len_s)
	{
		strCcat[j] = s1[i];
		j++;
		i++;
	}
	strCcat[j] = '\0';
	return (strCcat);
}
