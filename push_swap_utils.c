/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 22:41:38 by mpena-so          #+#    #+#             */
/*   Updated: 2024/07/13 22:41:48 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void change_index (t_numbers **stack, int index)
{
    t_numbers   *aux;
    int         min;

    aux = stack;
    while(aux->next != NULL)
    {
        if(aux->numb > aux->next->numb)
        {
            min = aux->next->numb;
            aux->index = 0;
        }
        aux = aux->next;
    }
}