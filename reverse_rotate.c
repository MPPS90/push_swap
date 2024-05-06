/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:41:11 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/06 19:25:30 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//SIN TERMINAR QUIZÁS TENGO QUE DECLARAR OTRA VARIABLE PARA GUARDAR LA POSICIÓN DEL SEGUNDO
#include "push_swap.h"

  void    reverse_rotate(t_numbers **stack)
{
    t_numbers   *first_node;
    t_numbers   *node;
    
    first_node = *stack;
    node = *stack;

    while(node->next->next != NULL) //hasta que el siguiente de ese apunte a NULL, O sea el siguiente del penultimo nodo apunte a NULL.
    {
        node = node->next;
    }
    ft_printf("comprobandoooo %d\n", node->numb);
    *stack = node->next;
    (*stack)->next = first_node;
    ft_printf("comprobandoooo %d\n", (node)->next->next->numb);
    node->next = NULL;
    //ft_printf("comprobandoooo %d\n", node->next->numb);
    //ft_printf("comprobandoooo %d\n", node->numb);

    // node->next = NULL;
    //ft_printf("comprobando %d\n", node->numb);
    // node->next = first_node;
    //ft_printf("comprobando %d\n", (node)->next->numb); Por qué esto da segfoult? Porque aún no ha llegado a darle valor a esa variable?
    //ft_printf("comprobando %d\n", previous_node->numb);
    //ft_printf("comprobando %d\n", node->next->numb);
    //first_node = first_node->next; por qué da igual tener está línea que no tenerla?
    //ft_printf("comprobando %d\n", first_node->numb);
    //ft_printf("comprobando %d\n", (first_node)->next->numb);
    // first_node = first_node->next;
    //ft_printf("comprobando %d\n", (first_node)->next->numb);
    //ft_printf("comprobando %d\n", (first_node)->next->numb);
    //previous_node->next = NULL;
}


 /* void    reverse_rotate(t_numbers **stack)
{
    t_numbers   *first_node;
    t_numbers   *node;
    t_numbers   *previous_node;
    
    first_node = *stack;
    node = *stack;
    previous_node = NULL;

    while(node->next != NULL)
    {
        previous_node = node;
        node = node->next;
    }
    //print_content(*stack);
    *stack = node;
    ft_printf("comprobando %d\n", node->numb);
    //ft_printf("comprobando %d\n", (node)->next->numb); Por qué esto da segfoult? Porque aún no ha llegado a darle valor a esa variable?
    ft_printf("comprobando %d\n", previous_node->numb);
    node->next = first_node;
    ft_printf("comprobando %d\n", first_node->numb);
    //first_node = first_node->next; por qué da igual tener está línea que no tenerla?
    ft_printf("comprobando %d\n", first_node->numb);
    ft_printf("comprobando %d\n", (first_node)->next->numb);
    //first_node->next = previus_node;
    ft_printf("comprobando %d\n", first_node->numb);
    ft_printf("comprobando %d\n", (first_node)->next->numb);
    previous_node->next = NULL;
} */

