#Declarar variables 
#declara una variable que almacene una lista de los las funciones pero 
	#camviando la extencion "Variable":.c=.o
#Crear los targets que se ejecutaran
	#all, clean, fclean, re
#"%.c%.o" es un target que se utiliza cuando el make detecta que existe un 
	#archivo con extencion .o y hace todo lo necesario par compilar ese 
	#archivo fuente en un archivo objeto usando las acciones que se le 
	#especifica al target
NAME = libft.a

CCFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isascii.c ft_isdigit\
ft_memchr.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strlen ft_strnstr.c\
ft_toupper.c

OBJ = $(SRC:.c=.o)
LIBFTH = libft.h

all: $(NAME)

#para que cree el archivo .a
$(NAME): $(OBJ) $(LIBFTH)
	ar rcs $(NAME) $(OBJ)

#para que se ejecute el archivo main.c
all2: $(OBJ) $(LIBFTH)
	gcc $(CCFLAGS) main.o $(OBJ) -o prog
main.o: main.c libft.h
	gcc -c main.c



clean:
	rm -f *.o prog
