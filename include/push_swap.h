/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:37:25 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/23 16:37:17 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/include/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>

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


//Temporary
void    display(t_stack *head);

void create_stack(t_stack** a, char **argv);
long ft_atol(const char *str);
void append_node(t_stack** stack, int num);

//Utils
t_stack *find_last(t_stack* head);
int stack_len(t_stack* stack);


//Commands
void swap(t_stack** stack);
void sa(t_stack** a);
void sb(t_stack** b);
void ss(t_stack** a, t_stack** b);

void push(t_stack** src, t_stack** dest);
void pa(t_stack** a, t_stack** b);
void pb(t_stack** a, t_stack** b);

void rotate(t_stack** stack);
void ra(t_stack** a);
void rb(t_stack** b);
void rr(t_stack** a, t_stack** b);

void revrotate(t_stack** stack);
void rra(t_stack** a);
void rrb(t_stack** b);
void rrr(t_stack** a, t_stack** b);

//Split
char	**ft_split(char const *s, char c);

//Stack sorted
bool stack_sorted(t_stack* a);

#endif