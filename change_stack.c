#include "push_swap.h"

static void    change_stack_extra(t_list **stack_a, t_list **stack_b, t_oper *oper)
{
	if (oper->ra)
	{
		ft_putstr_fd("ra\n", 1);
		operation_rr(stack_a);
		oper->ra--;
	}
	if (oper->rra)
	{
		ft_putstr_fd("rra\n", 1);
		operation_reverserr(stack_a);
		oper->rra--;
	}
	if (oper->rb)
	{
		ft_putstr_fd("rb\n", 1);
		operation_rr(stack_b);
		oper->rb--;
	}
	if (oper->rrb)
	{
		ft_putstr_fd("rrb\n", 1);
		operation_reverserr(stack_b);
		oper->rrb--;
	}
}

void    change_stack(t_list **stack_a, t_list **stack_b, t_oper *oper)
{
	while (oper->ra && oper->rb)
	{
		ft_putstr_fd("rr\n", 1);
		oper->ra--;
		oper->rb--;
		operation_rr(stack_a);
		operation_rr(stack_b);
	}
	while (oper->rra && oper->rrb)
	{
		ft_putstr_fd("rrr\n", 1);
		oper->rra--;
		oper->rrb--;
		operation_reverserr(stack_a);
		operation_reverserr(stack_b);
	}
	while (oper->ra || oper->rra || oper->rb || oper->rrb)
		change_stack_extra(stack_a, stack_b, oper);
	if (stack_b)
	{
		ft_putstr_fd("pa\n", 1);
		operation_pp(stack_b, stack_a);
	}		
}