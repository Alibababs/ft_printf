NAME = libftprintf.a

CC = cc 

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils.c ft_printf_hexa.c

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
		ar rc ${NAME} ${OBJ}

.c.o:
		${CC} ${FLAGS} -c $< -o $@

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re