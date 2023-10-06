#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_bzero(char *s,size_t n);
void	*ft_calloc(size_t num, size_t bit);
void	*ft_memchr(const void *ptr, int c, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t n);
int	ft_strnstr(const char *str1, const char *str2, size_t num);
int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_toupper(int c);
size_t	ft_strlcpy(char *buff, char *src, size_t n);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	*ft_striteri(char *s, void (*f)(unsigned int, char *));
void	*ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif

