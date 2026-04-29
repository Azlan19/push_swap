/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:55:55 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/29 14:13:52 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

static void swap(t_stack **stack)
{
    t_stack* first;
    t_stack* second;

    if (!stack || !*stack || !(*stack)->next)
        return;
    
    first = *stack;
    second = first->next;
    
    first->next = second->next;
    if (second->next)
        second->next->prev = first;
    
    second->next = first;
    first->prev = second;
    
    second->prev = NULL;
    
    *stack = second;
    
}

void sa(t_stack **a, bool print)
{
    swap(a);
    if(print)
        ft_printf("sa\n");
}

void sb(t_stack **b, bool print)
{
    swap(b);
    if(print)
        ft_printf("sb\n");
}

void ss(t_stack **a, t_stack **b, bool print)
{
    swap(a);
    swap(b);
    if(print)
        ft_printf("ss\n");
}
