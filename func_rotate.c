/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:26:00 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/28 14:54:24 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

static void rotate(t_stack **stack)
{
    t_stack* first;
    t_stack* last;

    if (!stack || !*stack || !(*stack)->next)
        return ;
    
    first = *stack;
    last = find_last(*stack);

    *stack = first->next;
    first->next->prev = NULL;

    last->next = first;
    first->prev = last;

    first->next = NULL;
}

void ra(t_stack **a)
{
    rotate(a);
    ft_printf("ra\n");
}

void rb(t_stack **b)
{
    rotate(b);
    ft_printf("rb\n");
}

void rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    ft_printf("rr\n");
}
