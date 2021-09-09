#include "libft.h"
/**
* Copies n byte from src to dest. memory areas should not overlap(ub).
*/
void	*ft_memcpy(void *dst1, const void *src1, size_t n)
{
	char	*dst;
	char	*src;

	if (n == 0 || dst1 == src1)
		return (dst1);
	dst = (char *)dst1;
	src = (char *)src1;
	while (n--)
		*dst++ = *src++;
	return (dst1);
}
