CFLAGS = -Wall -Wextra -Werror

SRC = srcs/ft_printf.c \
	srcs/ft_printnbr.c \
	srcs/ft_printstr.c \
	srcs/ft_printuns.c \
	srcs/ft_printptr.c \
	srcs/ft_printhexa.c \

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
