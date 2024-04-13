/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:59:20 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/13 14:55:13 by mpena-so         ###   ########.fr       */
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

