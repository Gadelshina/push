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
}	t_list;


int		ft_atoi(const char *str);
int		ft_isdigit (int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
int	ft_lstsize(t_list *lst);
void	ft_lstindex(t_list **stack_a);


void    ft_free_arr(char **arr);
void	ft_check_arg(int argc, char **argv, t_list **stack_a);
void	ft_put_error(int var);
int		ft_check_max_value(char *tmp_arg);
void	ft_check_double(t_list *stack_a);
void	ft_check_sorted(t_list *stack_a);




#endif
