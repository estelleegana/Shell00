CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \

NAME = libftprintf.a

OBJ = ${SRC:.c=.o}

%.o : %.c
	cc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

all : ${NAME}

clean :
	rm -f ${OBJ}

fclean ;
	rm -f ${NAME}

re : fclean all
