NAME = push_swap.a

HEAD = lib_push_swap.h

SRC =	push_swap.c ft_check_arg.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o :	%.c $(HEAD)
		gcc $(FLAGS) -c $< -o $@ 
all:	$(NAME)

$(NAME):	$(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

PHONY : all clean fclean re 
