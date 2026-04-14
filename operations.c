/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:22:57 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/14 15:17:39 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

long ft_atol(const char *str)
{
    long num;
    int sign;
    int i;

    i = 0;
	while (str[i] == '\f' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == ' ')
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
