#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	if (s[i] == c)
		return (&p[i]);
	return (0);
}
