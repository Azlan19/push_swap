/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_revrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:41:02 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/29 14:13:32 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

static void revrotate(t_stack **stack)
{
    t_stack* first;
    t_stack* last;

    if (!stack || !*stack || !(*stack)->next)
    return ;

    first = *stack;
    last = find_last(first);

    last->next = first;
    first->prev = last;

    last->prev->next = NULL;
    last->prev = NULL;

    *stack = last;


    
}

void rra(t_stack **a, bool print)
{
    revrotate(a);
    if(print)
        ft_printf("rra\n");
}

void rrb(t_stack **b, bool print)
{
    revrotate(b);
    if(print)
        ft_printf("rrb\n");
}

void rrr(t_stack **a, t_stack **b, bool print)
{
    revrotate(a);
    revrotate(b);
    if(print)
        ft_printf("rrr\n");
}
