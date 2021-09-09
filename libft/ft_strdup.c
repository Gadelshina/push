#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(*s2) * (len + 1));
	if (s2 == NULL)
		return (0);
	while (len >= i)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
