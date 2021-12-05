NAME = libftprintf.a

CC = gcc

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_printf.c \
		ft_hex.c	\
		ft_str.c	\
		ft_num.c	\

OBJECTS = $(SRC:.c=.o)

INCLUDES = ft_printf.h \

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
