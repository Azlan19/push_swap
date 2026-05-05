/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:43:26 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 13:55:33 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

static void	min_on_top(t_stack **a)
{
	long	min_value;

	min_value = find_min(*a)->value;
	while ((*a)->value != min_value)
	{
		if (find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	push_swap(t_stack **a, t_stack **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(a, b, false);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(a, b, false);
	while (len_a-- > 3)
	{
		prep_nodes_a(*a, *b);
		push_a_to_b(a, b);
	}
	sort_three(a);
	while (*b)
	{
		prep_nodes_b(*a, *b);
		push_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
