#include "libft.h"
/**
* Copies bytes (at most n). can copy less than n, stop when found c in src.
*/
void	*ft_memccpy(void *dst1, const void *src1, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)dst1;
	src = (unsigned char *)src1;
	i = 0;
	while (n--)
	{
		dst[i] = src[i];
		if ((unsigned char)c == dst[i])
			return ((void *)dst + i + 1);
		i++;
	}
	return (0);
}
