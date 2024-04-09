CC = gcc 
CFLAGS = -Wall -Werror -Wextra 

SRCS = main.c\

OBJS = $(SRCS:.c=.o)
 
NAME = push_swap

LIBFT_DIRECTORY = ./libft
LIBFT_LIBRARY = $(LIBFT_DIRECTORY)libft.a
LIBFT = -L $(LIBFT_DIRECTORY)
# -L para indicar a gcc que busque la biblioteca en el diretorio indicado

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_)
#llama a make en el directorio libft
#el -C es para indicarle a make que cambie del directorio actual (push_swap) al directorio libft antes de continuar con la construcción. Es decir make cambiará al directorio libft antes de ejecutar el make	
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME)
#con la instrucción de la línea de arriba se crea el ejecutable
#va primero la linea de libft directory antes de la generación del ejecutable porque el ejecutable debe construir componentes de la libft y por lo tanto antes de crearlo se deben generar esos componentes de la libft
$(LIBFT_):
	@make -C $(LIBFT_DIRECTORY)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT_DIRECTORY)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIRECTORY)

re: fclean all

.PHONY: all clean fclean re
