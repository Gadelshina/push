NAME = push_swap

SRCS = ft_split.c utils.c ft_put_error.c operations.c\
		push_swap.c ft_check_arg.c get_list.c get_free.c \
		sorting.c presorting.c change_stack.c search.c\
		

CC = gcc

FLAGS = -Wall -Werror -Wextra

HEADER = push_swap.h

OBJS = $(SRCS:.c=.o)

%.o : %.c $(HEADER)
		$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re