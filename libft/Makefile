CC = gcc 
CFLAGS = -Wall -Werror -Wextra 

SRCS = ft_atoi.c\
	ft_atol.c \
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putchar_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_split.c\
	ft_strchr.c\
	ft_strlcat.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strmapi.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strtrim.c\
	ft_tolower.c\
	ft_substr.c\
	ft_toupper.c\
	ft_striteri.c \
	ft_lstadd_front_bonus.c \
	ft_lstnew_bonus.c \
	ft_lstsize_bonus.c \
	printf/ft_print_hexa.c \
	printf/ft_print_ptr.c \
	printf/ft_printf.c \
	printf/ft_putchar.c \
	printf/ft_putnbr.c \
	printf/ft_putstr.c \
	
OBJS = $(SRCS:.c=.o)

NAME = libft.a 
#el .a es para hacer la fusion de todos los .o

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

exe: $(OBJS)
	@$(AR) rcs $(NAME) $(OBJS)
#linea arriba .a
	@$(CC) $(CFLAGS) $(NAME)
#linea arriba ./a.out
	@./a.out
#para decirle que cuando haga todo lo anterior genere también el a.out

.PHONY: all clean fclean re
