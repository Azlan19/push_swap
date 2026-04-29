/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:30:36 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/29 14:11:09 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"


static void push(t_stack **src, t_stack **dest)
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

void pa(t_stack **a, t_stack **b, bool print)
{
    push(b, a);
    if(print)
        ft_printf("pa\n");
}

void pb(t_stack **a, t_stack **b, bool print)
{
    push(a, b);
    if(print)
        ft_printf("pb\n");
}
