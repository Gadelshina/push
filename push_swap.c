#include "push_swap.h"

static void	last_sorting(t_list **stack_a, t_oper *oper)
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

static void	push_swap(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_oper	oper;

	stack_b = NULL;
	stack_a = NULL;
	ft_check_arg(argc, argv, &stack_a);
	presorting(&stack_a, &stack_b);
	while (stack_b)
		sorting(&stack_a, &stack_b, &oper);
	last_sorting(&stack_a, &oper);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return(0);
}
