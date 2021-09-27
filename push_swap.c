#include "push_swap.h"

int	ft_push_swap(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_oper	*oper;

	stack_b = NULL;
	stack_a = NULL;
	ft_check_arg(argc, argv, &stack_a);
	presorting(&stack_a, &stack_b);
	while (stack_b)
		sorting(&stack_a, &stack_b, &oper);
	
	// if (ft_lstsize(stack_a) < 4)

	// while(stack_a->next)
	// {
	// 	printf("%d\n", stack_a->content);
	// 	stack_a = stack_a->next;
	// }
	// printf("%d\n", stack_a->content);
	// printf("stack_b\n%d\n", stack_b->content);

	return(0);
}

int	main(int argc, char **argv)
{
	ft_push_swap(argc, argv);
	return(0);
}
