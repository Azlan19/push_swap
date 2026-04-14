/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oazlan <oazlan@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:46:34 by oazlan            #+#    #+#             */
/*   Updated: 2026/04/14 15:32:07 by oazlan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// PLAN
// TURK ALGORITHM
// 1) If stack 'a' > 3
        // Push 'a' node to stack 'b'
            // While pushing 'a' node to 'b', sort 'b' in descending order
// 2) Once stack 'a' = 3
        // Sort the 3 nodes in stack 'a'
// 3) Push all 'b' nodes back to stack 'a'

// (Have target nodes from a->b or b->a)
// (closest bigger/smaller value before pushing from 1 stack to the other)



// PSUEDOCODE
// Declare pointers to 2 data structures, one for stack 'a' and another for stack 'b'
    // Set both pointers to NULL to avoid undefined behaviour and indicate we're starting with empty stacks
    
// Handle input count errors. Argument count must be 2 or more, and the second input must not be empty
    // If input errors, return error

// Handle both cases of input, whether a variable number of command line arguments, or as a string
    // If the input of numbers is as a string, call 'ft_split()' to split the substrings

// Initialize stack 'a' by appending each input number as a node to stack 'a'
    // Handle integer overflow, duplicates, and syntax errors, e.g. input must only contain digits, or '-' '+' signs
        // If errors found, free stack 'a' and return error
    // Check for each input, if it is a long integer
        // If the input is a string, convert it to a long integer
    // Append the nodes to stack 'a'
    
// Check if stack 'a' is sorted
    // If not sorted, implement our sorting algorithm
        // Check for 2 numbers
            // If so, simply swap the numbers
        // Check for 3 numbers
            // If so, implement our simple 'sort three' algorithm
        // Check if the stack has more than 3 numbers
            // If so, implement our Turk Algorithm

// Clean up the stack


// BASIC UTILS
// - Functions to handle errors
// - Operations (sa, sb, ss etc.)
// - Get stack length
// - Get last node
// - Get Min & Max nodes

#include "include/push_swap.h"

int main(int argc, char **argv)
{
    t_stack* a;
    t_stack* b;

    a = NULL;
    b = NULL;
    



    
    list_numbers(argv);
    return(0);
}