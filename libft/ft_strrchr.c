#include "libft.h"

char	*ft_strrchr (const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return (&p[i]);
		i--;
	}
	return (0);
}
