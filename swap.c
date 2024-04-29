/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:19:56 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/29 20:39:46 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_numbers **numbs, int check)
{
    if (lst_size(*numbs) < 2)
        return ; 
    t_numbers   *first_node;
    t_numbers   *second_node;
    
    first_node = *numbs; //primer nodo
    second_node = first_node->next; //segundo nodo
    first_node->next = second_node->next; //el siguiente nodo al que apunta el primer nodo toma el valor de a lo que apunta el segundo nodo
    second_node->next = first_node;  //el siguiente nodo al que apunta el segundo nodo es igual al primer nodo
    *numbs = second_node; // porque *numbs (la lista) que apunta a la cabeza de la lista tengo que igualarlo a la referencia del nuevo primer nodo.
    //si no se hace esto de arriba se pierde la referencia al nuevo primer nodo.
    //el check no admite bool porque sino en el ss no puedo bloquearlo ya que el bool solo admite dos valores con el tercero que
    //se obliga a tomar en ss ya no funcionaría y no tomaría el 2. 
    if(check == 0)
        printf("sa\n");
    else if(check == 1)
        printf("sb\n");
}