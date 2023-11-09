CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
	ft_printnbr.c \
	ft_printstr.c \
	ft_printuns.c \
	ft_printptr.c \
	ft_printhexa.c \

NAME = libftprintf.a

OBJ = ${SRC:.c=.o}

%.o : %.c ft_printf.h
	cc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}

all : ${NAME}

clean :
	rm -f ${OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all
