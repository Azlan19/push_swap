/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:49:57 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/17 00:37:11 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

// BASIC UTILS
// - Functions to handle errors
// - Operations (sa, sb, ss etc.)
// - Get stack length
// - Get last node
// - Get Min & Max nodes

t_stack *find_last(t_stack* head)
{
    while (head->next)
    {
        head = head->next;
    }
    return head;
}

int stack_len(t_stack* stack)
{
    int i;

    i = 0;
    while (stack)
    {
        stack = stack->next;
        i++;
    }
    
    return i;
}
