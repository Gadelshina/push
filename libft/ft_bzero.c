#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	char			*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
