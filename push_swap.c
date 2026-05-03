/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:43:26 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/03 11:17:22 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void push_swap(t_stack **a, t_stack **b)
{
    int len_a;

    len_a = stack_len(*a);
    if(len_a-- > 3 && !stack_sorted(*a))
        pb(a, b, false);
    if(len_a-- > 3 && !stack_sorted(*a))
        pb(a, b, false);
    while(len_a-- > 3)
    {
        prep_nodes_a(*a, *b);
        display(*a);
        display(*b);
        printf("\n");
        push_a_to_b(a, b);
        display(*a);
        display(*b);
        printf("- - - - - - - - - - \n");
    }
    sort_three(a);
    while(*b)
    {
        prep_nodes_b(*a, *b);
        display(*a);
        display(*b);
        printf("\n");
        push_b_to_a(a, b);
        display(*a);
        display(*b);
        printf("\n");
    }    
}
