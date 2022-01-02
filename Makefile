NAME	=	libftprintf.a

LIB		=	libft/libft.a

TEST_OUT=	print.out

SRCS	=	ft_printf.c \
			ft_printf_spec.c \
			ft_printf_num.c

FLAGS	=	-Wall -Werror -Wextra

OBJS	=	$(SRCS:%.c=%.o)

CC		=	gcc

.PHONY	:	all clean fclean re

$(NAME)	:	$(OBJS)
			make -C libft
			cp libft/libft.a ./$(NAME)
			ar rcs $(NAME) $(OBJS)
			ranlib $(NAME)

%.o		:	%.c
			$(CC) $(FLAGS) -c $< -o $@

all		:	$(NAME)

test	:	$(TEST_OUT)

$(TEST_OUT):$(NAME) test/test.c
			$(CC) $(FLAGS) -I. -I./libft -L. -lftprintf test/test.c -o print.out

clean	:
			@$(MAKE) -C libft clean
			rm -rf $(OBJS)

fclean	:	clean
			@$(MAKE) -C libft fclean
			rm -rf  $(NAME)

re		:	fclean all
