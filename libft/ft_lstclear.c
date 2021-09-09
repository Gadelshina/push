#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*start;

	start = *lst;
	if (!*lst || !del)
		return ;
	while (*lst)
	{
		tmp = ((*lst)->next);
		del((*lst)->content);
		free(*lst);
		(*lst) = tmp;
	}
	*lst = NULL;
}
