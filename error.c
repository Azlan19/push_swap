/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:21:58 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 13:54:33 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

bool	error_syntax(char *str)
{
	if (!(*str == '+' || *str == '-' || ('0' <= *str && *str <= '9')))
		return (false);
	if ((*str == '+' || *str == '-') && !('0' <= str[1] && str[1] <= '9'))
		return (false);
	while (*++str)
	{
		if (!('0' <= *str && *str <= '9'))
			return (false);
	}
	return (true);
}

void	fail_free(t_stack **a, char **argv, bool is_string)
{
	free_stack(a);
	if (is_string)
		free_argv(argv);
	write(2, "Error\n", 6);
	exit(1);
}

void	free_argv(char **argv)
{
	int	i;

	if (argv == NULL)
		return ;
	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*current;

	if (NULL == stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

bool	error_duplicate(t_stack *stack, int num)
{
	if (stack == NULL)
	{
		return (true);
	}
	while (stack)
	{
		if (num == stack->value)
		{
			return (false);
		}
		stack = stack->next;
	}
	return (true);
}
