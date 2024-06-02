/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:35:39 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/31 19:28:55 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//falta una función para comprobar si está ordenado antes de entrar en esta función.

void    check_nodes(t_numbers **stack, t_numbers **stack_b)
{
/*     t_numbers   *first_node;
    t_numbers   *second_node; */
    int result;

    ft_printf("HOLAAAA\n");
    result = ft_lst_size(*stack);
    ft_printf("%d\n", result);
    
    if(result == 2)
    {
        if((*stack)->numb < (*stack)->next->numb)
            swap(stack, 0);
    }
    if(result == 3)
    {
        if(((*stack)->numb < (*stack)->next->numb) && ((*stack)->next->numb > (*stack)->next->next->numb) 
        && ((*stack)->next->next->numb < (*stack)->numb))
            reverse_rotate(stack);
    }
/*     first_node = *stack;
    second_node = first_node; */
}