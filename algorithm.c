/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:17:50 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/29 16:11:55 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

//push_swap function
//      - Until 'a' == 3, push nodes from 'a' to 'b' in decending order by choosing cheapest option
//      - sort_three(a)
//      - push nodes from 'b' to 'a' by choosing the cheapest option
//      - Make sure the smallest node in a is at the front/top of the list

void push_swap(t_stack **a, t_stack **b)
{
    int len_a;

    len_a = stack_len(*a);
    if(len_a-- > 3 && !stack_sorted(*a))
        pb(a, b, false);
    if(len_a-- > 3 && !stack_sorted(*a))
        pb(a, b, false);
    while(len_a-- > 3)
    {
        current_index(*a);
        push_a_to_b(a, b);
    }
    sort_three(a);
    while(*b)
    {
        pa(a, b, true);
        display(*a);
        display(*b);
        printf("\n");
    }
    
}

void push_a_to_b(t_stack **a, t_stack **b)
{
    t_stack* max_value;
    max_value = find_max(*b);
    if((*a)->value > max_value->value)
    {
        rrb(b, true);
        pb(a, b, true);
    }
    else
    {
        pb(a, b, true);
    }
}

void current_index(t_stack *stack)
{
    int i;
    int median;

    i = 0;
    if (!stack)
        return ;
    median = stack_len(stack) / 2;
    while(stack)
    {
        stack->index = i;
        if (i <= median)
            stack->above_median = true;
        else
            stack->above_median = false;
        stack = stack->next;
        i++;
    }
}

static void set_target_a(t_stack *a, t_stack *b)
{
    t_stack *current_b;
    t_stack *target_node;
    long best_position;

    while(a)
    {
        best_position = LONG_MIN;
        current_b = b;
        while(current_b)
        {
            if (best_position < current_b->value && current_b->value < a->value)
            {
                best_position = current_b->value;
                target_node = current_b;
            }
        }
        if (best_position == LONG_MIN)
        {
            a->target_node = find_max(b);
        }
        else
        {    
            a->target_node = target_node;
        }
        a = a->next;
    }
}
