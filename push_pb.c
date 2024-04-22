/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 19:48:44 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/22 22:25:03 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_pb(t_numbers **stack_a, t_numbers **stack_b)
{
    t_numbers   *first_node_a;
    t_numbers   *second_node_a;
    t_numbers   *first_node_b;

    if(lst_size(*stack_a) == 0)
        return ;
    
    first_node_a = *stack_a; //asignación de valor al primer nodo del stack a
    //en first_node_a guardamos el puntero que apunta al primer elemento del stack a
    second_node_a = first_node_a->next; //asignación de valor al segundo nodo del stack a
    //el valor asignado al segundo nodo del stack a es el puntero al que apunta al nodo siguiente del primer puntero
   *stack_a = second_node_a; //asignación de valor al puntero que apunta al inicio del stack a
   //el valor del puntero al que apunta el stack a es el segundo nodo de a
   
    first_node_b = *stack_b;//asignación de valro al primer nodo del stack b
    //en fist_node_b guardamos el puntero que apunta al primer nodo del stack b
    first_node_a->next = first_node_b; //el puntero que apunta al siguiente nodo del primer nodo del stack a es el primer nodo del stack b
    *stack_b = first_node_a; //asignación de valor al puntero que apunta al inicio del stack b
    //el valor del puntero al que apunta el stack b es el primer nodo del stack a
}