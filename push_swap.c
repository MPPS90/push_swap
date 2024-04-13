/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:59:20 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/13 17:54:13 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_numbers   *create_node(int numb)
{
    t_numbers    *new_nodo;
       
    new_nodo = malloc(sizeof(t_numbers));
    new_nodo->numb = numb;
    new_nodo->next = NULL;
    return (new_nodo);
}

void add_nodo(t_numbers **numbs, t_numbers *new)
{
    t_numbers   *aux;
    aux = *numbs;

    if (aux == NULL)
        aux = new;
    while(aux->next != NULL)
    {
        aux = aux->next; //esto lo hacemos porque hay que recorrer toda la lista hasta llegar  a la última posición para agregar el nuevo nodo de la lista allí.
        //así le decimos a aux, que es el primer nodo de la lista, sea = al puntero que apunta al siguiente hasta llegar al final de la lista
    }
    aux->next = new;    
}

