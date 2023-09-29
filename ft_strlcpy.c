size_t	ft_strlcpy(char *buff, char *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		buff[i] = src[i];
		i++;
	}
	buff[i] = '\0';
	return(0);
}
