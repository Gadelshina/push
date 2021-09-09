#include "libft.h"
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long	i;
	char			*p;

	i = 0;
	p = (char *)b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
