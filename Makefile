NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3 -fsanitize=address
SOURCE = main.c \
		push_swap.c \
		swap.c \
		swap_ss.c \
		print_content.c \
		lst_size.c \
		push_pa.c \
		push_pb.c \
		rotate.c \
		rotate_rr.c \
		reverse_rotate.c \
		check.c \
		join.c \
		

OBJ = $(SOURCE:.c=.o)

LIBFT_DIR = libft
LIBFT = libft/libft.a

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L$(LIBFT_DIR) -lft

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	@rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
