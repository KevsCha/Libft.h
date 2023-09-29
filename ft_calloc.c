void	*ft_calloc(size_t num, size_t bit)
{
	char	*arr;

	arr = (char *)malloc(num * bit);
	ft_bzero(arr, num *bit);
	return (arr);
}
