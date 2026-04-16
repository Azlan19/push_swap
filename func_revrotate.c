/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_revrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:41:02 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/16 13:21:26 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

void revrotate(t_stack** stack)
{
    t_stack* first;
    t_stack* last_node;

    first = *stack;
    last_node = find_last(first);

    last_node->prev->next = NULL;
    last_node->next = first;
    first->prev = last_node;
    *stack = last_node;
    
    
}
