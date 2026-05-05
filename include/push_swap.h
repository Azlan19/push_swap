/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:37:25 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 14:11:30 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/include/ft_printf.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
// # include <stdio.h>

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

// Temporary
// void				display(t_stack *head);
//--------------------------------

// ft_split.c
char				**ft_split(char const *s, char c);

// utils.c
t_stack				*find_last(t_stack *stack);
int					stack_len(t_stack *stack);
t_stack				*find_max(t_stack *stack);
t_stack				*find_min(t_stack *stack);
bool				stack_sorted(t_stack *stack);

// sort_three.c
void				sort_three(t_stack **stack);

// error.c
bool				error_syntax(char *str);
void				fail_free(t_stack **a, char **argv, bool is_string);
void				free_argv(char **argv);
void				free_stack(t_stack **stack);
bool				error_duplicate(t_stack *stack, int num);

// operations.c
void				create_stack(t_stack **a, char **argv, bool is_string);
long				ft_atol(const char *str);
void				append_node(t_stack **stack, int num);
t_stack				*get_cheapest(t_stack *stack);

// func_*.c
void				sa(t_stack **a, bool print);
void				sb(t_stack **b, bool print);
void				ss(t_stack **a, t_stack **b, bool print);

void				pa(t_stack **a, t_stack **b, bool print);
void				pb(t_stack **a, t_stack **b, bool print);

void				ra(t_stack **a, bool print);
void				rb(t_stack **b, bool print);
void				rr(t_stack **a, t_stack **b, bool print);
void				rotate_both(t_stack **a, t_stack **b,
						t_stack *cheapest_node);

void				rra(t_stack **a, bool print);
void				rrb(t_stack **b, bool print);
void				rrr(t_stack **a, t_stack **b, bool print);
void				revrotate_both(t_stack **a, t_stack **b,
						t_stack *cheapest_node);

// algorithm.c
void				push_a_to_b(t_stack **a, t_stack **b);
void				prep_for_push(t_stack **stack, t_stack *top_node,
						char stack_name);
void				push_b_to_a(t_stack **a, t_stack **b);

// push_swap.c
void				push_swap(t_stack **a, t_stack **b);

// prep_a_to_b.c
void				current_index(t_stack *stack);
void				find_cheapest(t_stack *stack);
void				prep_nodes_a(t_stack *a, t_stack *b);

// prep_b_to_a.c
void				prep_nodes_b(t_stack *a, t_stack *b);

#endif