/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:35:39 by mpena-so          #+#    #+#             */
/*   Updated: 2024/06/04 07:56:55 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//falta una función para comprobar si está ordenado antes de entrar en esta función.

void    check_nodes(t_numbers **stack, t_numbers **stack_b)
{
    int  first_numb;
    int  second_numb;
    int  third_numb;
    int result;

    //ft_printf("HOLAAAA\n");
    result = ft_lst_size(*stack);
    first_numb = (*stack)->numb;
    second_numb = (*stack)->next->numb;
    third_numb = (*stack)->next->next->numb;
    //ft_printf("%d\n", result);
    
    if(result == 2)
    {
        if((*stack)->numb < (*stack)->next->numb)
            swap(stack, 0);
            //ojo que aqui he puesto solo para el stack a
    }
    if(result == 3)
    {
        if((first_numb < second_numb) && (second_numb > third_numb) && (third_numb< first_numb))
        {
            reverse_rotate(stack);
            print_content(*stack);
        }
        else if((first_numb > second_numb) && (second_numb < third_numb) && (third_numb < first_numb))
        {
            rotate(stack, 0);
            //ojo que aquí he puesto solo para el stack a
            print_content(*stack);
        }    
        else if((first_numb > second_numb) && (second_numb > third_numb) && (third_numb < first_numb))
        {
            swap(stack, 0);
            reverse_rotate(stack);
            //ojo que aquí he puesto solo para el stack a
            print_content(*stack);
        }
        else if((first_numb > second_numb) && (second_numb < third_numb) && (third_numb > first_numb))
        {
            swap(stack, 0);
            //ojo que aquí he puesto solo para el stack a
            print_content(*stack);
        }   
        else if((first_numb < second_numb) && (second_numb > third_numb) && (third_numb > first_numb))
        {
            swap(stack, 0);
            rotate(stack, 0);
            //ojo que aquí he puesto solo para el stack
            print_content(*stack);
        }
    }
/*     first_node = *stack;
    second_node = first_node; */
}