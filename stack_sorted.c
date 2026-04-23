/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:28:06 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/23 16:40:27 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

bool stack_sorted(t_stack* a)
{
    t_stack *current;

    current = a;
    while (current->next != NULL)
    {
        if (current->value > current->next->value)
        {
            return(false);
        }
        current = current->next;
    }
    return(true);
    
}

