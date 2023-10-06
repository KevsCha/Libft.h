#include "libft.h"
char	*ft_strdup(const char *str)
{
	int	i;
	int	size;
	char	*temp;

	i = 0;
	size = ft_strlen(str);
	temp = (char *)malloc(size);
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
