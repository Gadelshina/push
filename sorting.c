#include "push_swap.h"

void    init_position(t_oper *oper)
{
    oper->len_stack = 0;
    oper->position = 0;
    oper->ra = 0;
    oper->rb = 0;
    oper->rra = 0;
    oper->rrb = 0;
}

void    sorting(t_list **stack_a, t_list **stack_b, t_oper **oper)
{
    int  operation_min;
    int     operation;
    t_list  *tmp;
    t_list  *min_num;

    tmp = *stack_b;
    operation_min = -1;
    while (tmp)
    {
        if (operation_min == -1 || operation < operation_min)
        {
            operation_min = operation;
            min_num = tmp;
        }
        tmp = tmp->next;
    }

}