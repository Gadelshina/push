#include "lib_push_swap.h"

// int	ft_check_digit(int argc,char **argv)
// {
// 	int i;
// 	int j;

// 	i = 1;
// 	j = 0;

// 	while (i < argc)
// 	{
// 		while(argv[j])
// 		{
// 			if(!((argv[j] > 47 && argv[j] < 58) || argv[j] == 45))
// 			{
// 				ft_putstr("Error", 1);
// 				return(1);
// 			}	
// 			j++;
// 		}
// 		i++;
// 	}
// 	return(0);
		
// }

// int	ft_check_double(int argc,char **argv)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 1;
// 	while(j < argc)
// 	{
// 		while(j < argc)
// 		{
// 			if(!ft_strcmp(argv[i], argv[j], -1))
// 			{
// 				ft_putstr("Error", 1);
// 				return(1);
// 			}
// 			j++;
// 		}
// 		i++;
// 		j+= i
// 	}
// 	return(0);	
// }

int	ft_check_max_value(int argc,char **argv)
{
	int	i = atoi(argv[1]);
	printf("%d", i);
	return(0);
}

// int	main(int argc, char **argv)
// {
// 	ft_check_max_value(argc, argv);
// 	return(0);
// }
