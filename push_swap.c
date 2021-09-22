#include "push_swap.h"

int	ft_push_swap(int argc, char **argv)
{
	t_list *stack_a;

	stack_a = NULL;
	ft_check_arg(argc, argv, &stack_a);
	// if (ft_lstsize(stack_a) < 4)
	while(stack_a)
	{
		printf("%d\n", stack_a->index);
		stack_a = stack_a->next;
	}
	return(0);
}

int	main(int argc, char **argv)
{
	ft_push_swap(argc, argv);
	return(0);
}
