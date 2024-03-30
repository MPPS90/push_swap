CC = gcc 
CFLAGS = -c -Wall -Werror -Wextra 

SRCS = main.c\
 
OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	@make -C libft_completa
#llama a make en el directorio libft_completa
#el -C es para indicarle a make que cambie del directorio actual (push_swap) al directorio libft_completa antes de continuar con la construcción. Es decir make cambiará al directorio libft_completa antes de ejecutar el make
	@$(CC) $(CFLAGS) $(NAME) -L libft_completa -lft 
#con la instrucción de la línea de arriba se crea el ejecutable

#va primero la linea de libft completo antes de la generación del ejecutable porque el ejecutable debe construir componentes de la libft_completa y por lo tanto antes de crearlo se deben generar esos componentes de la libft_completa

clean:
	@make fclean -C libft_completa
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
