/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:41:11 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/07 12:38:10 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

  void    reverse_rotate(t_numbers **stack)
{
    t_numbers   *first_node;
    t_numbers   *node;
    
    first_node = *stack;
    node = *stack;
    //en estos dos auxiliares guardamos la cabeza de la lista una para recorrer la lista y otra para usarla despues.

    while(node->next->next != NULL) //hasta que el siguiente de ese apunte a NULL, O sea el siguiente del penultimo nodo apunte a NULL.
    {
        node = node->next;
    }
    ft_printf("comprobandoooo %d\n", node->numb);
    *stack = node->next;
    //aquí le indicamos que node->next que es el último (porque node al salir del bucle es el penultimo por la condición puesta en el while) se convierta en la cabeza de la lista
    ft_printf("comprobandii %d\n", (node)->next->numb);
    //ft_printf("comprobandoooo %d\n", (node)->next->next->numb); este printf daría error porque aún no le he asignado el siguiente de node->next y hasta ese momento es NULL porque es el final de la lista 
    (*stack)->next = first_node;
    //lo de arriba es igual a node->next->next = first_node. Una vez que ya tenenos que la cabeza de la lista es el ultimo le indicamos que su next no es NULL sino que será el que era primero antes.
    ft_printf("comprobandoooo %d\n", (node)->next->next->numb);
    node->next = NULL;
}

//REVERSE CON TRES VARIABLES (TRES AUXILIARES, DOS GUARDARN LA PRIMERA POSICIÓN Y UNA LA ULTIMA)
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
    //ft_printf("comprobando %d\n", node->numb);
    //ft_printf("comprobando %d\n", previous_node->numb);
    node->next = first_node;
    //ft_printf("comprobando %d\n", first_node->numb);
    //first_node = first_node->next; por qué da igual tener está línea que no tenerla?
    //ft_printf("comprobando %d\n", first_node->numb);
    //ft_printf("comprobando %d\n", (first_node)->next->numb);
    //ft_printf("comprobando %d\n", first_node->numb);
    //ft_printf("comprobando %d\n", (first_node)->next->numb);
    previous_node->next = NULL;
} */

