#include "push_swap.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int		    	neg;
	int	        	res;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] != '\0' && (str[i] == 32 || str[i] == '\t'\
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * neg);
}

int	ft_isdigit (int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		ft_putchar_fd(*s++, fd);
}

size_t	ft_strlen(const char *s)
{
	long	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}