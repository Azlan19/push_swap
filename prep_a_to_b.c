/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prep_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 10:51:16 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 14:03:19 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	current_index(t_stack *stack)
{
	int	i;
	int	median;

	i = 0;
	if (!stack)
		return ;
	median = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= median)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		i++;
	}
}

static void	set_target_a(t_stack *a, t_stack *b)
{
	t_stack	*current_b;
	t_stack	*target_node;
	long	best_position;

	while (a)
	{
		best_position = LONG_MIN;
		current_b = b;
		while (current_b)
		{
			if (best_position < current_b->value && current_b->value < a->value)
			{
				best_position = current_b->value;
				target_node = current_b;
			}
			current_b = current_b->next;
		}
		if (best_position == LONG_MIN)
			a->target_node = find_max(b);
		else
			a->target_node = target_node;
		a = a->next;
	}
}

static void	cost_calculator_a(t_stack *a, t_stack *b)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(a);
	len_b = stack_len(b);
	while (a)
	{
		a->push_cost = a->index;
		if (!(a->above_median))
			a->push_cost = len_a - a->index;
		if (a->target_node->above_median)
			a->push_cost += a->target_node->index;
		else
			a->push_cost += len_b - a->target_node->index;
		a = a->next;
	}
}

void	find_cheapest(t_stack *stack)
{
	long	cheapest_value;
	t_stack	*cheapest_node;

	if (!stack)
		return ;
	cheapest_value = LONG_MAX;
	while (stack)
	{
		if (stack->push_cost < cheapest_value)
		{
			cheapest_value = stack->push_cost;
			cheapest_node = stack;
		}
		stack = stack->next;
	}
	cheapest_node->cheapest = true;
}

void	prep_nodes_a(t_stack *a, t_stack *b)
{
	current_index(a);
	current_index(b);
	set_target_a(a, b);
	cost_calculator_a(a, b);
	find_cheapest(a);
}
