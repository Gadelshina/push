#include "push_swap.h"

static void	sort_two(t_list **stack_a)
{
	operation_ss(stack_a);
	ft_putstr_fd("sa\n", 1);
	exit(0);
}

static void	sort_three_extra(t_list **stack, t_list *o, t_list *t, t_list *f)
{
	if (o->index > t->index && t->index < f->index && o->index > f->index)
	{
		operation_rr(stack);
		ft_putstr_fd("ra\n", 1);
	}
	else if (o->index < t->index && t->index > f->index && o->index < f->index)
	{
		operation_ss(stack);
		ft_putstr_fd("sa\n", 1);
		operation_rr(stack);
		ft_putstr_fd("ra\n", 1);
	}
	else if (o->index < t->index && t->index > f->index && o->index > f->index)
	{
		operation_reverserr(stack);
		ft_putstr_fd("rra\n", 1);
	}

}
static void	sort_three(t_list **stack)
{
	t_list	*o;
	t_list	*t;
	t_list	*f;

	o = *stack;
	t = o->next;
	f = t->next;
	if (o->index > t->index && t->index < f->index && o->index < f->index)
	{
		operation_ss(stack);
		ft_putstr_fd("sa\n", 1);
	}
	else if (o->index > t->index && t->index > f->index && o->index > f->index)
	{
		operation_ss(stack);
		ft_putstr_fd("sa\n", 1);
		operation_reverserr(stack);
		ft_putstr_fd("rra\n", 1);
	}
	else
		sort_three_extra(stack, o, t, f);
}

void    presorting(t_list **stack_a, t_list **stack_b)
{
	int original_size;

	original_size = ft_lstsize(*stack_a);
	if (original_size == 2)
		sort_two(stack_a);
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->index > original_size - 3)
		{
			operation_rr(stack_a);
			ft_putstr_fd("ra\n", 1);
		}
		else 
		{
			operation_pp(stack_a, stack_b);
			ft_putstr_fd("pb\n", 1);
		}
	}   
	sort_three(stack_a); 
}