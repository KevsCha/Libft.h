int	ft_strnstr(const char *str1, const char *str2, size_t num)
{
	while (*str1 && *str2 && --num)
	{
		if(*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}


