NAME = libftprintf.a
FLAGS = -Werror -Wall -Wextra
CC = cc
LDFLAGS = -L. -lft

MY_SOURCES =	ft_printf.c \
				ft_printf_char.c \
				ft_printf_int.c \
				ft_printf_lhex.c \
				ft_printf_uhex.c \
				ft_printf_string.c \
				ft_printf_uint.c \
				ft_printf_pointer.c \
				ft_printf_perc.c

LIBFT_DIR = ./libft
LIBFT_NAME = libft.a

MY_OBJECTS = $(MY_SOURCES:.c=.o)

all: $(NAME)

$(NAME): libft $(MY_OBJECTS)
	ar rcs $(NAME) $(MY_OBJECTS)

%.o: %.c
	$(CC) $(FLAGS) $(LDFLAGS) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME) $(LIBFT_NAME)

re: fclean all

libft:
	cd $(LIBFT_DIR) && make && make clean
	mv $(LIBFT_DIR)/libft.a ./libft.a

.PHONY: all clean fclean re libft
