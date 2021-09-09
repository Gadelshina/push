#include "libft.h"
/**
* searches for the first occurrence of the character c 
* in the memory area s, limited to n bytes
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	c2;
	size_t			i;

	i = 0;
	s2 = (unsigned char *)s;
	c2 = (unsigned char )c;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (s2[i] == c2)
			return (s2 + i);
		i++;
	}
	return (NULL);
}
