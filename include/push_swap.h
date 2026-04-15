/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:37:25 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/15 11:36:56 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/include/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				push_cost;
	bool			above_median;
	bool			cheapest;

	struct s_stack	*target_node;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

void create_stack(t_stack** a, char **argv);
long ft_atol(const char *str);
void append_node(t_stack** stack, int num);
t_stack *find_last(t_stack* head);

void swap(t_stack** stack);
void sa(t_stack** a);
void sb(t_stack** b);
void ss(t_stack** a, t_stack** b);

void push(t_stack** src, t_stack** dest);
void pa(t_stack** a, t_stack** b);
void pb(t_stack** a, t_stack** b);

void rotate(t_stack** stack);
	
#endif