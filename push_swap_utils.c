/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:41:38 by mpena-so          #+#    #+#             */
/*   Updated: 2024/08/09 22:24:02 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_max(t_numbers **stack)
{
    t_numbers  *first_node;
    t_numbers  *node;
    int     count;
    
    ft_printf("entra aquí\n");
    first_node = *stack;
    while(first_node->next != NULL)
    {
        ft_printf(" y entra aquí\n");
        node = *stack;
        count = 0;
        
        while(node != NULL)
        {
            if(first_node->numb > node->numb)
            {
                count++;
                node = node->next;
                ft_printf(" y entra aquísss\n");
            }
            first_node->max = count;
            first_node = first_node->next;
            ft_printf("holisss\n");
        }
    }
}