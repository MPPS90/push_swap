/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:35:39 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/30 20:15:29 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check(t_numbers **stack, t_numbers *new)
{
    t_numbers   *first_node;
    t_numbers   *second_node;

    if(ft_lstsize == 2)
    {
        if((*stack)->numb < (*stack)->next->numb)
            swap(stack, 0);
    }
    if(lst_size == 3)
    {
        if((*stack)->numb  (*stack)->next->numb)
    }
    
    first_node = *stack;
    second_node = first_node;

    
}