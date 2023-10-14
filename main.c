#include <string.h>
#include "libft.h"
#include <ctype.h>

int main(void)
{
	char *str[] = {"Hola","soy", "un", "nodo", NULL};
	int i = 0;

	t_list *nodo;
	t_list *head;
	t_list *lst;

	head = NULL;
	while (str[i])
	{	
		nodo = ft_lstnew(str[i]);
		ft_lstadd_front(&head, nodo);
		i++;
	}
	int size = ft_lstsize(head);
	printf("%d", i);
	while (size > 0)
	{
		size--;
		free (head);
		head = (t_list *)head -> next;
	}
	
	/*
	*ft_
	*ft_lstnew = :3
	*ft_putnbr_fd = :3
	*ft_putendl_fd = :3
	*ft_putstr_fd = :3
	*ft_puthcar_fd = :3
	*ft_strmapi = :3
	*ft_itoa = :3
	*fT_split = :3
	*ft_strjoin = :3
	*ft_strnstr = :3
	*ft_memcmp = :3
	+ft_substr = :3 
	*/
	/*
	char *str1 = " hdo lahhh o   ";
	char c = ' ';
	char **strs;
	strs = ft_split(str1, c);
	int k = 0;
	int	a = 0;
	while (strs[k] != NULL)
	{
		printf("%s\n", strs[k]);
		free(strs[k]);
		k++;
	}
	printf("%d", k);
	free(strs);
	*/
	return (0);
}