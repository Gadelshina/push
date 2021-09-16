#include "lib_push_swap.h"

int	ft_push_swap(int argc, char **argv)
{
	int	i;
	char **tmp_arg;

	if (!argv || !argv[0])
		ft_put_error;
	ft_check_double(tmp_arg);	
	i = 1;
	while (i++ < argc)
		tmp_arg = ft_split(argv[i], ' ');
	while(tmp_arg[i])
	{
		ft_check_max_value(tmp_arg[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	ft_push_swap(argc, argv);
	return(0);
}
