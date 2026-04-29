/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:17:50 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/29 13:27:58 by oazlan           ###   ########.fr       */
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
    if(stack_len(*a) > 3)
        pb(a, b);
    if(stack_len(*a) > 3)
        pb(a, b);
    while(stack_len(*a) > 3)
    {
        push_a_to_b(a, b);
        display(*a);
        display(*b);
        printf("\n");
    }
    sort_three(a);
    while(stack_len(*b))
    {
        printf("stack_len(a) = %d\n", stack_len(*b));
        pa(a, b);
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
        printf("HERE\n");
        rrb(b);
        pb(a, b);
    }
    else
    {
        pb(a, b);
    }
    printf("max_value = %d\n", max_value->value);
}
