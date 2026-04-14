/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 17:55:55 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/14 18:14:36 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

void swap(t_stack** stack)
{
    t_stack* first;
    t_stack* second;

    first = *stack;
    second = first->next;
    first->next = second->next;
    second->next = first;
    first->prev = second;
    second->prev = NULL;
    *stack = second;
    
}
