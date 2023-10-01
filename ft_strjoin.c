#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		i;
	char	*strTot;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strTot = (char *)malloc(len1 + len2 + 1);
	if (strTot == NULL)
		return (NULL);
	while (i < len1 + len2)
	{
		if (i < len1)
			strTot[i] = *s1;
		if (i < len2)
			strTot[i + len1] = *s2;
		s1++;
		s2++;
		i++;
	}
	strTot[i] = '\0';
	return (strTot);
}
