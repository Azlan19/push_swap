/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:49:57 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 13:56:46 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

// BASIC UTILS
// - Functions to handle errors
// - Operations (sa, sb, ss etc.)
// - Get stack length
// - Get last node
// - Get Min & Max nodes

t_stack	*find_last(t_stack *stack)
{
	while (stack->next)
	{
		stack = stack->next;
	}
	return (stack);
}

int	stack_len(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

t_stack	*find_max(t_stack *stack)
{
	t_stack	*max;

	max = stack;
	while (stack->next)
	{
		if (max->value < stack->next->value)
		{
			max = stack->next;
		}
		stack = stack->next;
	}
	return (max);
}

t_stack	*find_min(t_stack *stack)
{
	t_stack	*min;

	min = stack;
	while (stack->next)
	{
		if (min->value > stack->next->value)
		{
			min = stack->next;
		}
		stack = stack->next;
	}
	return (min);
}

bool	stack_sorted(t_stack *stack)
{
	if (!stack)
		return (false);
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (false);
		stack = stack->next;
	}
	return (true);
}
