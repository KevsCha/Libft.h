int	ft_atoi(const char *str)
{
	int	neg;
	int	num;
	int	i;
	char	c;

	num = 0;
	while (*str == ' ')
		str++;
	while (*str)
	{
		c = *(str + 1);
		if (*str == '-')
			neg = -1;
		if ((*str == '-' || *str == '+') && (c < '0' || c > '9'))
			return (num * neg);
	 	if (*str >= '0' && *str <= '9')
		{
			num = (num * 10) + str[i] - '0';
			if (c < '0' || c > '9')
				return (num * neg);
		}
		str++;
	}
	return (num * neg);
}
