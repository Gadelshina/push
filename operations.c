#include "push_swap.h"

void	ss_operation(t_list **lst)
{
	t_list	*tmp;

	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->next = *lst;
	*lst = tmp;
}

void	pp_operation(t_list **donor, t_list **recipient)
{
	t_list	*tmp;
	
	tmp = *donor;
	if ((*donor)->next)
		*donor = (*donor)->next;
	else
		*donor = NULL;	
	tmp->next = NULL;
	ft_lstadd_front(recipient, tmp);
}

void	rr_operation(t_list **lst)
{
	t_list	*back;

	back = *lst;
	*lst = (*lst)->next;
	back->next = NULL;
	ft_lstadd_back(lst, back);
}

void	reverserr_operation(t_list **lst)
{
	t_list	*top;
	t_list	*tmp;

	tmp = *lst;
	top = *lst;
	while (top->next)
	{
		tmp = top;
		top = top->next;
	}	
	tmp->next = NULL;
	ft_lstadd_front(lst, top);
}

