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
	min_index = search_min_index;
	if (min_index > index)
		return (search_location(min_index, lst))
	direct = 2;
	while (1)
	{
		if (currrent < index && index < next)
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
t_oper **oper, int index)
{
	location_init(oper);
	oper->len_stack = ft_lstsize(stack_b);
	oper->loc = location_search(stack_b, index);
	if (oper->len_stack / 2 >= oper->loc)
		oper->ra = oper->loc - 1;
	else if (oper->len_stack > 1)
		oper->rra = oper->len_stack - oper->loc + 1;	
	oper->len_stack = ft_lstsize(stack_a);
	oper->loc = direction_search(index, stack_a);

	return (oper->ra + oper->rra + oper->rb + oper->rrb);

}

void    sorting(t_list **stack_a, t_list **stack_b, t_oper **oper)
{
	int  operation_min;
	int     operation;
	t_list  *tmp;
	t_list  *min_num;

	tmp = *stack_b;
	operation_min = -1;
	while (tmp)
	{
		operation = operation_count(*stack_a, *stack_b, oper, tmp->index);
		if (operation_min == -1 || operation < operation_min)
		{
			operation_min = operation;
			min_num = tmp;
		}
		tmp = tmp->next;
	}
	operation_min = operation_count(*stack_a, *stack_b, &oper, index)

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