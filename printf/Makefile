CC = gcc 
CFLAGS = -c -Wall -Werror -Wextra 

SRCS = ft_printf.c\
	   ft_putchar.c\
	   ft_putnbr.c\
	   ft_putstr.c\
	   ft_print_hexa.c\
	   ft_print_ptr.c

OBJS = $(SRCS:.c=.o)
NAME = printf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re