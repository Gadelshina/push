#include "libft.h"

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
