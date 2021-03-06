#include "libft.h"

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
