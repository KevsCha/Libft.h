#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	len1;
	int	len2;
	char	*strTot;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strTot = (char *)malloc(len1 + len2 + 1);
	if (strTot == NULL)
		return (NULL);
	//utilizar strlcat para concatenar una nueva string 
	/*
	while ()
	{
		return ();
	}*/
	printf("%d", len1 + len2);
	return ("Falta");
}
