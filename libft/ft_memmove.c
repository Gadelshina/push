#include "libft.h"
/**
* copies a byte from src to dest. areas may overlap.
*/
void	*ft_memmove(void *dst1, const void *src1, size_t n)
{
	size_t	i;
	char	*dst;
	char	*src;

	i = 0;
	if (n == 0 || dst1 == src1)
		return (dst1);
	dst = (char *)dst1;
	src = (char *)src1;
	if (dst > src)
	{
		while (n--)
			dst[n] = src[n];
	}
	else
	{
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst1);
}
