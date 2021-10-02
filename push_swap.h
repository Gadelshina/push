#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
// #include "libft/libft.h"

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}				t_list;

typedef struct	s_oper
{
	int	len_stack;
	int	loc;
	int	ra;
	int	rra;
	int	rb;
	int	rrb;
}				t_oper;

int		ft_atoi(const char *str);
int		ft_isdigit (int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_lstindex(t_list **stack_a);


void    ft_free_arr(char **arr);
void	ft_check_arg(int argc, char **argv, t_list **stack_a);
void	ft_put_error(int var);
void    init_location(t_oper *oper);
int	search_location(t_list *lst, int index);



void	operation_ss(t_list **lst);
void	operation_pp(t_list **donor, t_list **recipient);
void	operation_rr(t_list **lst);
void	operation_reverserr(t_list **lst);

void    presorting(t_list **stack_a, t_list **stack_b);
void    sorting(t_list **stack_a, t_list **stack_b, t_oper *oper);
void    change_stack(t_list **stack_a, t_list **stack_b, t_oper *oper);








#endif
