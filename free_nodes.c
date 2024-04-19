/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_nodes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:41:54 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/19 21:00:10 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_nodes(t_numbers **numbs)
{
    t_numbers   *aux;

    while(numbs != NULL)
    {
        aux = *numbs;
        free(*numbs);
        *numbs= (*numbs)->next;
        
    }
    //free(aux);
}