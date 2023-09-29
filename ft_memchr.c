void *ft_memchr(const void *ptr, int c, size_t num)
{
	char *str;
	size_t i;

	i = 0;
	str =  (char *)ptr;
	while (i < num)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return(0);
}
