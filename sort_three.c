/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:04:00 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/28 14:54:57 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void sort_three(t_stack **stack)
{
    t_stack* biggest_node;

    biggest_node = find_max(*stack);

    if (biggest_node == *stack)
    {
        ra(stack);
    }
    else if (biggest_node == (*stack)->next)
    {
        rra(stack);
    }
    if ((*stack)->value > (*stack)->next->value)
    {
        sa(stack);
    }
}
