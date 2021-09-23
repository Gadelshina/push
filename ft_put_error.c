#include "push_swap.h"

void	ft_put_error(int var)
{
	if (var == 1)
		ft_putstr_fd("Please, enter numbers\n", 2);
	else
		ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}