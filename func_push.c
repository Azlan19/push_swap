/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:30:36 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/14 18:52:08 by oazlan           ###   ########.fr       */
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
    
    node->prev = NULL;
    
    node->next = *dest;
    if (*dest)
        (*dest)->prev = node;
    *dest = node;
}
