#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{	
	size_t	i;
	char	*p;

	i = 0;
	p = malloc(size * count);
	if (p != NULL)
		ft_memset(p, 0, (size * count));
	return (p);
}
