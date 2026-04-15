/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 11:26:00 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/15 11:52:28 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

void rotate(t_stack** stack)
{
    int first_node;
    t_stack* last_node;
    t_stack* second;

    first_node = (*stack)->value;
    
    second = (*stack)->next;
    *stack = second;
    append_node(stack, first_node);
}
