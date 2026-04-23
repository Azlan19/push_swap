/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:21:58 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/23 19:48:12 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

bool error_syntax(char *str)
{
    if (!(*str == '+' || *str == '-' || ('0' <= *str && *str <= '9')))
        return (false);
    if ((*str == '+' || *str == '-') && !(str[1] >= '0' && str[1] <= '9'))
        return (false);
    while (*++str)
    {
        if (!(*str >= '0' && *str <= '9'))
            return (false);
    }
    return (true);
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

bool error_duplicate(t_stack* stack, int num)
{
    if(stack == NULL)
    {
        return(true);
    }
    while(stack)
    {
        if(num == stack->value)
        {
            return(false);
        }
        stack = stack->next;
    }
    return(true);
}
