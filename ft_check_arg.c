#include "push_swap.h"

static void	ft_check_sorted(t_list *stack_a)
{
	t_list *next;

	next = stack_a->next;
	while (stack_a->content < next->content && next->next)
	{
		stack_a = stack_a->next;
		next = next->next;
	}
	if (stack_a->content < next->content && next->next == NULL)
		exit(EXIT_FAILURE);
}

static void	ft_check_double(t_list *stack_a)
{
	t_list *tmp_next;

	tmp_next = stack_a->next;
	while(stack_a->next)
	{
		while(tmp_next->next)
		{
			if((stack_a->content - tmp_next->content) == 0)
				ft_put_error(0);
			tmp_next = tmp_next->next;
		}
		if((stack_a->content - tmp_next->content) == 0)
			ft_put_error(0);
		stack_a = stack_a->next;
		tmp_next = stack_a->next;
	}
}

static int check_minus(char minus)
{
	if (minus == '-')
		return(1);
	return(0);
}

static int	ft_check_max_value(char *tmp_arg)
{
	int		i;
	int		len;
	char	*max;

	i = 0;
	len = ft_strlen(tmp_arg);
	if (check_minus(tmp_arg[0]))
	{
		max = "-2147483648";
		len--;
	}
	else
		max = "2147483647";
	if (tmp_arg[0] == '-' || tmp_arg[0] == '+')
		i++;
	if (len > 10)
		ft_put_error(0);
	while (tmp_arg[i])
	{
		if(!ft_isdigit(tmp_arg[i]))
			ft_put_error(0);
		if(max[i] - tmp_arg[i] < 0  && len == 10)
			ft_put_error(0);
		i++;
	}

	return(0);
}

void	ft_check_arg(int argc, char **argv, t_list **stack_a)	
{
	int	i;
	int	j;
	char **tmp_arg;

	if (argc < 2)
		ft_put_error(1);
	if (argv[1][0] == '\0')
		ft_put_error(0);
	i = 1;
	while (i < argc)
	{
		tmp_arg = ft_split(argv[i++], ' ');
		j = 0;
		while(tmp_arg[j])
		{
			ft_check_max_value(tmp_arg[j]);
			ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(tmp_arg[j++])));
		}
	}	
	if (ft_lstsize(*stack_a) == 1)
		exit (EXIT_FAILURE);
	ft_check_double(*stack_a);
	ft_check_sorted(*stack_a);
	ft_lstindex(stack_a);
}
