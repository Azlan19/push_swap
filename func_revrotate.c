/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_revrotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:41:02 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 13:54:58 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

static void	revrotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = find_last(first);
	last->next = first;
	first->prev = last;
	last->prev->next = NULL;
	last->prev = NULL;
	*stack = last;
}

void	rra(t_stack **a, bool print)
{
	revrotate(a);
	if (print)
		ft_printf("rra\n");
}

void	rrb(t_stack **b, bool print)
{
	revrotate(b);
	if (print)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b, bool print)
{
	revrotate(a);
	revrotate(b);
	if (print)
		ft_printf("rrr\n");
}

void	revrotate_both(t_stack **a, t_stack **b, t_stack *cheapest_node)
{
	while (*b != cheapest_node->target_node && *a != cheapest_node)
	{
		rrr(a, b, false);
	}
	current_index(*a);
	current_index(*b);
}
