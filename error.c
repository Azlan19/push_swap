/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 19:21:58 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/23 19:35:16 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "include/push_swap.h"

bool error_syntax(char *str)
{
    if (!(*str == '+' || *str == '-' || ('0' <= *str && *str <= '9')))
        return (false);
    if ((*str == '+' || *str == '-') && !(str[1] >= '0' && str[1] <= '9'))
        return (false);
    while (*++str)
    {
        if (!(*str >= '0' && *str <= '9'))
            return (false);
    }
    return (true);
}
