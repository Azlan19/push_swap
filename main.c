/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:46:34 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/15 11:57:26 by oazlan           ###   ########.fr       */
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
    {
        printf("argc == %d\n", argc);
        printf("I failed\n");
        return 1;
    }
    else if (argc == 2)
    {
        printf("I need ft_split\n");
        return 1;
        
    }
    else
    {
        create_stack(&a, argv + 1);        
    }

    display(a);
    
    ra(&a);
    ra(&a);
    ra(&a);
    ra(&a);
    
    display(a);
    

    
    return(0);
}