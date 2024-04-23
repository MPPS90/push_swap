/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:40:37 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/23 18:35:09 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_numbers **stack_a)
{
    t_numbers   *first_node;
    t_numbers   *second_node;
    //t_numbers   *final_node;

    first_node = *stack_a; //first_node guarda el puntero al primer nodo del stack a
    second_node = first_node->next;
    //final_node = second_node->next;
    //final_node->next = NULL; //final_node apunta a NULL (indica final de la lista)
    *stack_a = second_node;
    first_node->next = second_node;

/*     while (first_node != NULL)
    {
        *stack_a = final_node;
        first_node = final_node->next;
        second_node = first_node->next;
        final_node = second_node->next;
        *stack_a = final_node;        
    } */
}