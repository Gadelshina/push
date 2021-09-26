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