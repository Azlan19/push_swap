/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:30:36 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/17 00:02:05 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

void push(t_stack** src, t_stack** dest)
{
    t_stack* node;

    node = *src;
    *src = node->next;
    if (*src)
        (*src)->prev = NULL;

    node->next = *dest;
    if (*dest)
        (*dest)->prev = node;
    
    node->prev = NULL;
    
    *dest = node;
}

void pa(t_stack** a, t_stack** b)
{
    push(b, a);
}

void pb(t_stack** a, t_stack** b)
{
    push(a, b);
}
