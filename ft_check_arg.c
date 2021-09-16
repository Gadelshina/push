#include "lib_push_swap.h"

int	ft_check_double(char **tmp_arg)
{
	int	i;
	int	j;
	int count;

	i = 0;
	j = 1;
	count = 1;
	while(tmp_arg[count])
		count++;
	count--;
	while(j < count)
	{
		while(j < count)
		{
			if(!ft_strncmp(tmp_arg[i], tmp_arg[j], -1))
				ft_put_error;
			j++;
		}
		i++;
		j+= i;
	}
	return(0);	
}

int check_minus(char *tmp_arg)
{
	if (tmp_arg[0] == '-')
		return(1);
	return(0);
}

int	ft_check_max_value(char *tmp_arg)
{
	int		i;
	int		len;
	char	*max;

	if (check_minus(tmp_arg))
		max = "2147483648";
	else
		max = "2147483647";
	if (*tmp_arg == '-' || *tmp_arg == '+')
		*tmp_arg++;
	len = ft_strlen(tmp_arg);
	if (len > 10)
		ft_put_error;
	while (tmp_arg[i])
	{
		if(!ft_isdigit(tmp_arg[i]))
			ft_put_error;
		if(max[i] - tmp_arg[i] < 0  && len == 10)
			ft_put_error;
		i++;
	}

	return(0);
}

void	ft_put_error(void)
{
	ft_putstr_fd("Error", 1);
	exit(0);
}

