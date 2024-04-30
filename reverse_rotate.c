/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:41:11 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/30 22:26:23 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//SIN TERMINAR QUIZÁS TENGO QUE DECLARAR OTRA VARIABLE PARA GUARDAR LA POSICIÓN DEL SEGUNDO
#include "push_swap.h"

void    reverse_rotate(t_numbers **stack)
{
    t_numbers *first_node;
    t_numbers *node;
    
    first_node = *stack;
    node = *stack;

    while(node->next != NULL)
    {
        node = node->next;
    }
    //print_content(*stack);
    *stack = node->next;
    //ft_printf("comprobando %d\n", node->numb);
    print_content(*stack);
    node->next = first_node;
    //ft_printf("comprobando %d\n", first_node->numb);
    //ft_printf("comprobando %d\n", (first_node)->next->numb);
    first_node->next->next = NULL;
    ft_printf("entra aquí\n");
    print_content(*stack);
    
    while(node != NULL)
    {
        ft_printf("en el while %d\n", node->numb);
        node = node->next;
    }
}