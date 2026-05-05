/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:46:34 by oazlan            #+#    #+#             */
/*   Updated: 2026/05/05 12:40:02 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

void    display(t_stack *head)
{
    t_stack  *current;

    current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }
    printf("NULL\n");
}


int main(int argc, char **argv)
{
    t_stack* a;
    t_stack* b;

    a = NULL;
    b = NULL;
    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return 1;
    else if (argc == 2)
    {
        argv = ft_split(argv[1], ' ');
        create_stack(&a, argv, true);        
    }
    else
        create_stack(&a, argv + 1, false);        
    if(!stack_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a, true);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else
            push_swap(&a, &b);   
    }   
    free(a);
    return(0);
}
