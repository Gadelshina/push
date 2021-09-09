#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	res = NULL;
	while (lst && f)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (res)
			{
				new = res->next;
				(*del)(res->content);
				free(res);
				res = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
