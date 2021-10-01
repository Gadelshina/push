#include "push_swap.c"

change_stack(t_list **stack_a, t_list **stack_b, t_oper *oper)
{
    if (oper->ra && oper->rb)
    {
        ft_putstr_fd("rr", 1);
        oper->ra--;
        oper->rb--;
        operation_rr(&stack_a);
        operation_rr(&stack_b);
    }

    if (oper->rra && oper->rrb)
    {
        ft_putstr_fd("rrr", 1);
        oper->rra--;
        oper->rrb--;
        operation_reverserr(&stack_a);
        operation_reverserr(&stack_b);
    }
}