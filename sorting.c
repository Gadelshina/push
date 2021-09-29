#include "push_swap.h"

void    location_init(t_oper *oper)
{
	oper->len_stack = 0;
	oper->loc = 0;
	oper->ra = 0;
	oper->rra = 0;
	oper->rb = 0;
	oper->rrb = 0;
}

int	location_search(t_list *lst, int index)
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

int	direction_search()
{
	
}

int	operation_count(t_list *stack_a, t_list *stack_b, \
t_oper **oper, int index)
{
	location_init(oper);
	oper->len_stack = ft_lstsize(stack_b);
	oper->loc = location_search_b(stack_b, index);
	if (oper->len_stack / 2 >= oper->loc)
		oper->ra = oper->loc - 1;
	else if (oper->len_stack > 1)
		oper->rra = oper->len_stack - oper->loc + 1;	
	oper->len_stack = ft_lstsize(stack_a);
	oper->loc = location_search_a();

	return ();

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
		operation = operation_count(*stack_a, *stack_b, oper, tmp->idex);
		if (operation_min == -1 || operation < operation_min)
		{
			operation_min = operation;
			min_num = tmp;
		}
		tmp = tmp->next;
	}

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