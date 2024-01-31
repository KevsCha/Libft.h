# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kquispe <kquispe@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 18:04:31 by kquispe           #+#    #+#              #
#    Updated: 2023/12/14 13:35:35 by kquispe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Declarar variables 
#declara una variable que almacene una lista de los las funciones pero 
	#camviando la extencion "Variable":.c=.o

#Crear los targets que se ejecutaran
	#all, clean, fclean, re

#"%.c%.o" es un target que se utiliza cuando el make detecta que existe un 
	#archivo con extencion .o y hace todo lo necesario par compilar ese 
	#archivo fuente en un archivo objeto usando las acciones que se le 
	#especifica al target

#para que cree el archivo .a
#arreglar como se ejecuta el main
#para que se ejecute el archivo main.c
NAME = libft.a
LIBFTH = libft.h

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_isalpha.c ft_bzero.c\
	ft_calloc.c ft_atoi.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memcpy.c ft_memset.c\
	ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_strmapi.c\
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	ft_tolower.c ft_toupper.c ft_itoa.c

BONUS_SRC = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
	ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\
	ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS_SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) $(LIBFTH)
	ar rcs $(NAME) $(OBJ)

bonus: $(BONUS_OBJ) $(OBJ) $(LIBFTH)
	ar rcs $(NAME) $(BONUS_OBJ) $(OBJ)

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
