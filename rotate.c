/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:40:37 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/27 16:46:39 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_numbers **stack, bool check)
{
    t_numbers   *first_node;
    t_numbers   *node;
    int i;
    
    i = 0;
    first_node = *stack; //first_node guarda el puntero al primer nodo del stack a
    node = *stack;
    
    while(node->next != NULL)
    {
        node = node->next;
    }
    node->next = first_node;
    *stack = first_node->next;
    first_node->next = NULL;

    if(check == 0)
        printf("ra\n");
    else
        printf("rb\n");
}

