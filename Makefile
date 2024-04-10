NAME = push_swap

CC = gcc 
CFLAGS = -Wall -Werror -Wextra 

SRCS = main.c\

SRCS_PRINTF = printf/ft_printf.c\
	printf/ft_putchar.c\
	printf/ft_putnbr.c\
	printf/ft_putstr.c\
	printf/ft_print_hexa.c\
	printf/ft_putstr.c\
	printf/ft_print_ptr.c\

#SRCS_GNL = gnl/get_next_line_bonus.c \

OBJS = $(SRCS:.c=.o)
 
LIBFT_DIRECTORY = ./libft
LIBFT_LIBRARY = $(LIBFT_DIRECTORY)libft.a
LIBFT = -L $(LIBFT_DIRECTORY)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT_)

	@$(CC) $(CFLAGS) $(SRCS) $(SRCS_PRINTF) $(LIBFT) -o $(NAME)

	@make -C $(LIBFT_DIRECTORY)

clean:
	$(RM) $(OBJS)
	@make clean -C $(LIBFT_DIRECTORY)

fclean: clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIRECTORY)

re: fclean all

.PHONY: all clean fclean re
