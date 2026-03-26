/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:46:34 by oazlan            #+#    #+#             */
/*   Updated: 2026/03/26 14:50:58 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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