#ifndef LIB_PUSH_SWAP_H
# define LIB_PUSH_SWAP_H

# include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"


// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }				t_list;

int ft_check_arg(int argc,char **argv);
void	ft_put_error(void);
int	ft_check_max_value(char *tmp_arg);
int	ft_check_double(char **tmp_arg);



#endif
