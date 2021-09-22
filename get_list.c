#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	if (lst)
	{
		back = (*lst);
		if (back == NULL)
			(*lst) = new;
		else
		{
			while (back->next)
				back = back->next;
			back->next = new;
		}
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = (*lst);
	(*lst) = new;
}

t_list	*ft_lstnew(int content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

void	ft_lstindex(t_list **stack_a)
{
	t_list *tmp;
	t_list *small;
	int		index;
	int		lst_size;

	lst_size = ft_lstsize(*stack_a);
	index = 1;
	while (index < lst_size)
	{
		small = *stack_a;
		while (small->index != 0)
			small = small->next;
		tmp = *stack_a;
		while (tmp)
		{
			if (small->content > tmp->content && tmp->index == 0)
				small = tmp;
			tmp = tmp->next;
		}
		small->index = index;
		index++;
	}
	small = *stack_a;
	while(small->index != 0)
		small = small->next;
	small->index = index;
}