/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:46:34 by oazlan            #+#    #+#             */
/*   Updated: 2026/03/26 15:42:06 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PLAN
// TURK ALGORITHM
// 1) If stack 'a' > 3
//      - Push 'a' node to stack 'b'
//          - While pushing 'a' node to 'b', sort 'b' in descending order
// 2) Once stack 'a' = 3
//      - Sort the 3 nodes in stack 'a'
// 3) Push all 'b' nodes back to stack 'a'

// (Have target nodes from a->b or b->a)
// (closest bigger/smaller value before pushing from 1 stack to the other)


#include <stdio.h>

int main(int argc, char **argv)
{
    int i;

    printf("argc = %d\n", argc);
    
    i = 0;
    while(i < argc)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
        i++;
    }
    return(0);
}