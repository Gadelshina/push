#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*res;
	int			i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	res = (char *)malloc(sizeof(*res) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (*s1)
	{
		res[i] = *s1++;
		i++;
	}
	while (*s2)
	{
		res[i] = *s2++;
		i++;
	}
	res[i] = '\0';
	return (&*res);
}
