SRCS   = ft_printf.c ft_printf_utils_csp.c ft_printf_utils_diux.c
OBJS   = ${SRCS:.c=.o}
NAME   = libftprintf.a
CC     = gcc
CFLAGS = -Wall -Wextra -Werror
RM	   = rm -f

all: ${NAME}

%.o: %.c
	${CC} ${FLAGS} -c $< -o $@

$(NAME): ${OBJS}
	make -C libft
	mv libft/libft.a $(NAME)
	ar -rcs $(NAME) ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} $(NAME)
	make fclean -C libft

re: fclean all

m: re
	gcc *.o -lftprintf -L.
	./a.out

.PHONY: all clean fclean re bonus
