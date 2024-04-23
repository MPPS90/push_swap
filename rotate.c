/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:40:37 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/23 20:36:23 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_numbers **stack, bool check)
{
    t_numbers   *first_node;
    t_numbers   *second_node;
    t_numbers   *third_node;
    int i;
    
    i = 0;
    first_node = *stack; //first_node guarda el puntero al primer nodo del stack a
    second_node = first_node->next;
    third_node = second_node->next;
    
    while(stack != NULL)
    {
        stack = (*stack)->next;
        i++;
    }
    *stack = second_node;
    second_node->next = third_node;
    third_node->next = first_node;
    first_node->next = NULL;

    if(check == 0)
        printf("ra\n");
    else
        printf("rb\n");
}