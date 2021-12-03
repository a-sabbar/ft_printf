NAME = libftprintf.a

CC = gcc

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

SRC =	ft_printf.c \
		ft_hex.c	\
		function.c	\

OBJECTS = $(SRC:.c=.o)

INCLUDES = ft_printf.h \

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

%.o : %.c $(INCLUDES)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJECTS) $(OBJECTSB)

fclean: clean
	rm -rf $(NAME)

re: fclean all




