/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:20:23 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/22 19:49:26 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_pa(t_numbers **stack_a, t_numbers **stack_b)
{
    t_numbers   *first_node_b;
    t_numbers   *second_node_b;
    t_numbers   *first_node_a;
    
    if(lst_size(*stack_b) == 0)
        return ;
    
    first_node_b = *stack_b;
    second_node_b = first_node_b->next;
    // nos guardamos referencia al primero y segundo
    *stack_b = second_node_b;

    first_node_a = *stack_a;
    first_node_b->next = first_node_a;
    *stack_a = first_node_b; 
}