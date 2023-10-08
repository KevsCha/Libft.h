#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{	
	size_t	len_s;
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s + start);
	len = len < len_s ? len : len_s;
	substr = (char *)malloc(len + 1);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
