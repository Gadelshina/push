#include "push_swap.h"

static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

static unsigned int	ft_nb_words(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_strs++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_strs++;
	return (nb_strs);
}

static void	ft_get_str(char **str, unsigned int *str_len, char c)
{
	unsigned int	i;

	*str += *str_len;
	*str_len = 0;
	i = 0;
	while (**str && **str == c)
		(*str)++;
	while ((*str)[i])
	{
		if ((*str)[i] == c)
			return ;
		(*str_len)++;
		i++;
	}
}

static char	**ft_error(char **res)
{
	unsigned int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**res;
	char			*str;
	unsigned int	str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb_strs = ft_nb_words(s, c);
	res = (char **)malloc(sizeof(char *) * (nb_strs + 1));
	if (!res)
		return (NULL);
	i = 0;
	str = (char *)s;
	str_len = 0;
	while (i < nb_strs)
	{
		ft_get_str(&str, &str_len, c);
		res[i] = (char *)malloc(sizeof(char) * (str_len + 1));
		if (!res[i])
			return (ft_error(res));
		ft_strlcpy(res[i++], str, str_len + 1);
	}
	res[i] = NULL;
	return (res);
}
