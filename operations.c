/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:22:57 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/02 20:23:57 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

long ft_atol(const char *str)
{
    long num;
    int sign;
    int i;

    i = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
        || str[i] == '\v' || str[i] == ' ')
		i++;
    sign = 1;
    if ((str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }
    num = 0;
    while ('0' <= str[i] && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * sign);
    
}

void create_stack(t_stack **a, char **argv, bool is_string)
{
    int i;
    long num;

    i = 0;
    while (argv[i])
    {
        if(!error_syntax(argv[i]))
            fail_free(a, argv, is_string);
        num = ft_atol(argv[i]);
        if (num < INT_MIN || INT_MAX < num)
            fail_free(a, argv, is_string);
        if(!error_duplicate(*a, (int)num))
            fail_free(a, argv, is_string);
        append_node(a, num);
        i++;
    }
}


void append_node(t_stack **stack, int num)
{
    t_stack* new_node;
    t_stack* last_node;
    
    if(!stack)
        return ;
    new_node = malloc(sizeof(t_stack));
    if(!new_node)
        return ;
    new_node->value = num;
    new_node->next = NULL;
    if (*stack == NULL)
    {
        *stack = new_node;
        return ;
    }
    last_node = find_last(*stack);
    last_node->next = new_node;
    new_node->prev = last_node;
}

t_stack	*get_cheapest(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}
