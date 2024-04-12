NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCE = main.c

OBJ = $(SOURCE:.c=.o)

LIBFT_DIR = /Users/mpena-so/Desktop/Github/push_swap/libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = /Users/mpena-so/Desktop/Github/push_swap/printf
PRINTF = $(PRINTF_DIR)/printf.a

all: $(LIBFT) $(PRINTF) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -L$(LIBFT_DIR)  -L$(PRINTF_DIR) -lft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBFT):
	echo "Make libft"
	make -C $(LIBFT_DIR)

$(PRINTF):
	echo "Make printf",
	make -C $(PRINTF_DIR)

clean:
	@rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean

fclean: clean
	@rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
