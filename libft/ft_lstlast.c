#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstlst;

	lstlst = lst;
	if (lstlst)
	{
		while (lstlst->next != NULL)
			lstlst = lstlst->next;
		return (lstlst);
	}
	return (NULL);
}
