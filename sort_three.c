/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 12:04:11 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 13:55:35 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void	sort_three(t_stack **stack)
{
	t_stack	*biggest_node;

	biggest_node = find_max(*stack);
	if (biggest_node == *stack)
		ra(stack, true);
	else if (biggest_node == (*stack)->next)
		rra(stack, true);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack, true);
}
