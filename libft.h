#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <unistd.h>

void	*ft_bzero(char *s, size_t n);
void	*ft_calloc(size_t num, size_t bit);
void	*ft_memchr(const void *ptr, int c, size_t num);
void	*ft_memmove(const void *dest, const void *src, size_t n);
int	ft_strnstr(const char *str1, const char *str2, size_t num);
int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
size_t	ft_strcpy(char *buff, char *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(char *str);


#endif
