/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:55:55 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/17 12:44:52 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

void swap(t_stack** stack)
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

void sa(t_stack** a)
{
    swap(a);
    ft_printf("sa\n");
}

void sb(t_stack** b)
{
    swap(b);
    ft_printf("sb\n");
}

void ss(t_stack** a, t_stack** b)
{
    swap(a);
    swap(b);
    ft_printf("ss\n");
}
