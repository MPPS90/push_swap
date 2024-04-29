/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 22:40:37 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/29 15:57:35 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rotate(t_numbers **stack, bool check)
{
    t_numbers   *first_node;
    t_numbers   *node;

    if (lst_size(*stack) < 2)
        return ; 
        
    first_node = *stack; //first_node guarda el puntero al primer nodo del stack a
    node = *stack; //node guarda el puntero al primer nodo del stack a, pero se va a usar para ir recorriendo toda 
    //la lista y encontrar el último para decirle que apunte al primero y el primero apuntará a NULL
    
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

