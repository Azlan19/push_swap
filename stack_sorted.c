/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:28:06 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/23 16:56:53 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

bool stack_sorted(t_stack* stack)
{
    while (stack->next != NULL)
    {
        if (stack->value > stack->next->value)
        {
            return(false);
        }
        stack = stack->next;
    }
    return(true);
    
}

