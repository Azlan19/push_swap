/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:30:36 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/28 14:28:35 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"


static void push(t_stack** src, t_stack** dest)
{
    t_stack* node;

    if (!src || !*src)
        return;
    
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
    ft_printf("pa\n");
}

void pb(t_stack** a, t_stack** b)
{
    push(a, b);
    ft_printf("pb\n");
}
