/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:41:38 by mpena-so          #+#    #+#             */
/*   Updated: 2024/08/09 20:56:57 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_max(t_numbers **stack)
{
    t_numbers  *first_node;
    t_numbers  *node;
    int     count;
    
    first_node = *stack;
    while(first_node != NULL)
    {
        node = *stack;
        count = 0;
        
        while(node != NULL)
        {
            if(first_node->numb > node->numb)
            {
                count++;
                node = node->numb
            }
            first_node->max = count;
            first_node = first_node->next;
        }
    }
    
    

    
}