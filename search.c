#include "push_swap.h"

static int	search_min_index(t_list *lst)
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

int	search_direction(t_list *lst, int index)
{
	int		direct;
	int		current;
	int		next;
	int		min_index;
	t_list	*tmp;

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