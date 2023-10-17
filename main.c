#include <string.h>
#include <ctype.h>
#include "libft.h"

void deletMemory(void *cont)
{
	free(cont);
}

void *strList( void *newDate)
{
	t_list *newNodo;
	char *str;
	int	i;

	i = 0;
	str = newDate;
	while (str[i])
		i++;
	newNodo = ft_lstnew(i);
	return (newNodo);
}

int main(void)
{
	char *str[] = {"Hola", "soy", "un", "nodo", NULL};
	char *s;
	int i = 0;

	t_list *head;
	t_list *tail;
	t_list *newNodos;
	t_list *newList;

	head = NULL;
	tail = NULL;
	
	while (str[i])
	{
		newNodos = ft_lstnew(str[i]);
		if(head == NULL)
			head = newNodos;
		if (tail != NULL)
			tail -> next = newNodos;
		tail = newNodos;
		i++;
	}
	newList = ft_lstmap(head, strList, deletMemory);
	
	int j = 0;
	//printf("%s", (char *) head -> next -> content);	
	t_list *temp;
	t_list *temp2;
	while (head && newList && j < 10)
	{
		printf("%s  %d\n", (char *)head -> content, j);
		temp = head -> next;
		temp2 = newList ->next;
		if (head != NULL)
			free(head);
		if (newList != NULL)
			free(newList);
		head = temp;
		newList = temp2;

		j++;
	}
	printf("%d",i);
	/*
	*ft_lst
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
char *ft_strcpy(char *str)
{
	char *s;
	int i = 0;
	size_t sizeLeng = ft_strlen(str);
	s = (char *)malloc(sizeLeng + 1 * (sizeof(char)));
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}