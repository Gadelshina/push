#include "push_swap.h"

void    init_location(t_oper *oper)
{
	oper->len_stack = 0;
	oper->loc = 0;
	oper->ra = 0;
	oper->rra = 0;
	oper->rb = 0;
	oper->rrb = 0;
}

int	search_min_index(t_list *lst)
{
	int	index;

	index = lst->index;
	while (lst)
	{
		if (lst->index < index)
			index = lst->index;
		lst = lst->next;
	}
	return (index);
}

int	search_location(t_list *lst, int index)
{
	int	loc;

	loc = 1;
	while (lst)
	{
		if (lst->index == index)
			return(loc);
		loc++;	
		lst = lst->next;
	}	
	return(0);
}

int	search_direction(int index, t_list *lst)
{
	int	direct;
	int	current;
	int	next;
	int	min_index;
	t_list *tmp;

	tmp = lst->next;
	current = lst->index;
	next = tmp->index;
	min_index = search_min_index(lst);
	if (min_index > index)
		return (search_location(lst, min_index));
	direct = 2;
	while (1)
	{
		if (current < index && index < next)
			return (direct);
		current = tmp->index;
		if (!tmp->next)
			tmp = lst;
		else
			tmp = tmp->next;
		next = tmp->index;
		direct++;
	}
}

int	operation_count(t_list *stack_a, t_list *stack_b, \
t_oper *oper, int index)
{
	init_location(oper);
	oper->len_stack = ft_lstsize(stack_b);
	oper->loc = search_location(stack_b, index);
	if (oper->len_stack / 2 >= oper->loc)
		oper->rb = oper->loc - 1;
	else if (oper->len_stack > 1)
		oper->rrb = oper->len_stack - oper->loc + 1;	
	oper->len_stack = ft_lstsize(stack_a);
	oper->loc = search_direction(index, stack_a);
	if (oper->loc <= oper->len_stack / 2)
		oper->ra = oper->loc - 1;
	else
		oper->rra = oper->len_stack - oper->loc + 1;	
	return (oper->ra + oper->rra + oper->rb + oper->rrb);

}

void    sorting(t_list **stack_a, t_list **stack_b, t_oper *oper)
{
	int  operation_min;
	int     operation;
	t_list  *tmp;
	t_list  *transfer;

	tmp = *stack_b;
	operation_min = -1;
	while (tmp)
	{
		operation = operation_count(*stack_a, *stack_b, oper, tmp->index);
		if (operation_min == -1 || operation < operation_min)
		{
			operation_min = operation;
			transfer = tmp;
		}
		tmp = tmp->next;
	}
	operation_count(*stack_a, *stack_b, oper, transfer->index);
	change_stack(stack_a, stack_b, oper);
}
