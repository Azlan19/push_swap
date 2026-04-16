/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_revrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:41:02 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/17 00:23:40 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

void revrotate(t_stack** stack)
{
    t_stack* first;
    t_stack* last;

    first = *stack;
    last = find_last(first);

    last->next = first;
    first->prev = last;

    last->prev->next = NULL;
    last->prev = NULL;

    *stack = last;


    
}

void rra(t_stack** a)
{
    revrotate(a);
}

void rrb(t_stack** b)
{
    revrotate(b);
}

void rrr(t_stack** a, t_stack** b)
{
    revrotate(a);
    revrotate(b);
}
