/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 17:17:50 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/03 10:31:47 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

//push_swap function
//      - Until 'a' == 3, push nodes from 'a' to 'b' in decending order by choosing cheapest option
//      - sort_three(a)
//      - push nodes from 'b' to 'a' by choosing the cheapest option
//      - Make sure the smallest node in a is at the front/top of the list

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
        {
            stack->above_median = true;
        }
        else
        {
            stack->above_median = false;
        }
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
            current_b = current_b->next;
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

static void cost_calculator_a(t_stack *a, t_stack *b)
{
    int len_a;
    int len_b;
    
    len_a = stack_len(a);
    len_b = stack_len(b);
    while(a)
    {
        a->push_cost = a->index;
        if(!(a->above_median))
        {
            a->push_cost = len_a - a->index;
        }
        if(a->target_node->above_median)
        {
            a->push_cost += a->target_node->index;
        }
        else
        {
            a->push_cost += len_b - a->target_node->index;
        }
        
        a = a->next;
    }  
}

void find_cheapest(t_stack *stack)
{
    long cheapest_value;
    t_stack *cheapest_node;

    if(!stack)
    {
        return ;
    }
    cheapest_value = LONG_MAX;
    while(stack)
    {
        if (stack->push_cost < cheapest_value)
        {
            cheapest_value = stack->push_cost;
            cheapest_node = stack;
        }
        stack = stack->next;
    }
    cheapest_node->cheapest = true;
}

void rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
    {
        rr(a, b, false);
    }
    current_index(*a);
    current_index(*b);
}

void rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
    while (*b != cheapest_node->target_node && *a != cheapest_node)
    {
        rrr(a, b, false);
    }
    current_index(*a);
    current_index(*b);
}

void	prep_for_push(t_stack **stack, t_stack *top_node, char stack_name)
{
while (*stack != top_node)
{
    if (stack_name == 'a')
    {
        if (top_node->above_median)
            ra(stack, false);
        else
            rra(stack, false);
        }
    else if (stack_name == 'b')
    {
        if (top_node->above_median)
            rb(stack, false);
        else
            rrb(stack, false);
    }	
    }
}

void push_a_to_b(t_stack **a, t_stack **b)
{
    t_stack *cheapest_node;
    
    cheapest_node = get_cheapest(*a);
    if (cheapest_node->above_median && cheapest_node->target_node->above_median)
    {
        rotate_both(a, b, cheapest_node);
    }
    else if (!(cheapest_node->above_median) && !(cheapest_node->target_node->above_median))
    {
        rev_rotate_both(a, b, cheapest_node);
    }
    prep_for_push(a, cheapest_node, 'a');
    prep_for_push(b, cheapest_node->target_node, 'b');
    pb(a, b, false);
}

void prep_nodes(t_stack *a, t_stack *b)
{
    current_index(a);
    current_index(b);
    set_target_a(a, b);
    cost_calculator_a(a, b);
    find_cheapest(a);
}

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
        prep_nodes(*a, *b);
        display(*a);
        display(*b);
        printf("\n");
        push_a_to_b(a, b);
        display(*a);
        display(*b);
        printf("- - - - - - - - - - \n");
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
