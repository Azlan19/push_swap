/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_b_to_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 11:04:53 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/03 11:13:50 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void set_target_b(t_stack *a, t_stack *b)
{
    t_stack *current_a;
    t_stack *target_node;
    long best_position;
    
    while(b)
    {
        best_position = LONG_MAX;
        current_a = a;
        while(current_a)
        {
            if (b->value < current_a->value && current_a->value < best_position)
            {
                best_position = current_a->value;
                target_node = current_a;
            }
            current_a = current_a->next;
        }
        if (best_position == LONG_MAX)
        {
            b->target_node = find_min(a);
        }
        else
        {    
            b->target_node = target_node;
        }
        b = b->next;
    }
}


void prep_nodes_b(t_stack *a, t_stack *b)
{
    current_index(a);
    current_index(b);
    set_target_b(a, b);
}
