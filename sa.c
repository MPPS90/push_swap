/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 20:19:56 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/16 21:01:50 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap(t_numbers **numbs)
{
    t_numbers   *first_node;
    t_numbers   *second_node;
    
    first_node = *numbs;
    second_node = first_node->next;
    first_node->next = second_node->next;
    second_node->next = first_node;
    *numbs = second_node; //aquí es porque en *numbs que apunta a la cabeza de la lista tengo que igualarle la referencia del nuevo primer nodo. 
}