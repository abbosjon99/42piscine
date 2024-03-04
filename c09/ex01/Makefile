DIR	= ./srcs/
SRC	= ft_putchar.c \
		ft_swap.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_strcmp.c

SRCS	= ${addprefix $(DIR), $(SRC)}

OBJS 	= ${SRCS:.c=.o}

HEAD	= ./includes/

CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

AR	= ar rc
RM	= rm -f
LIB	= ranlib

.c.o:
		cc ${CFLAGS} -c -I ${HEAD} $< -o $@

all:	${NAME}

$(NAME):	$(OBJS)
		${AR} ${NAME} ${OBJS}
		${LIB} ${NAME}

clean:
		rm -rf ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re

