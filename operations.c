/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:22:57 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/14 15:07:11 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"



void list_numbers(char **argv)
{
    int i;

    i = 0;
    while (argv[i])
    {
        printf("%s\n", argv[i]);
        i++;
    }
}



// int main()
// {
//     t_stack* node = malloc(sizeof(node));
//     node->value = 5;
//     node->index = 1;
//     printf("%d\n", node->value);
//     printf("%d\n", node->index);
//     free(node);
//     return 0;
// }
