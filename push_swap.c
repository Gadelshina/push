#include "push_swap.h"

void	last_sorting(t_list **stack_a, t_oper *oper)
{
	init_location(oper);
	oper->len_stack = ft_lstsize(*stack_a);
	oper->loc = search_location(*stack_a, 1);
	if ((oper->len_stack / 2) >= oper->loc)
		oper->ra = oper->loc - 1;
	else if (oper->len_stack > 1)
		oper->rra = oper->len_stack - oper->loc + 1;
	change_stack(stack_a, NULL, oper);
}

int	push_swap(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_oper	oper;
	t_list	*test;

	stack_b = NULL;
	stack_a = NULL;
	ft_check_arg(argc, argv, &stack_a);
	presorting(&stack_a, &stack_b);
	test = stack_a;
	while(test->next)
	{
		printf("%d\n", test->content);
		test = test->next;
	}
	printf("%d\nstack b:\n", test->content);
	while (stack_b)
		sorting(&stack_a, &stack_b, &oper);
	last_sorting(&stack_a, &oper);


	// while(stack_a->next)
	// {
	// 	printf("%d\n", stack_a->content);
	// 	stack_a = stack_a->next;
	// }
	// printf("%d\nstack b:\n", stack_a->content);
	// if (stack_b)
	// {
	// 	while(stack_b->next)
	// 	{
	// 		printf("%d\n", stack_b->content);
	// 		stack_b = stack_b->next;
	// 	}
	// 	printf("%d\n", stack_b->content);
	// }
	// printf("stack_b\n%d\n", stack_b->content);

	return(0);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return(0);
}
