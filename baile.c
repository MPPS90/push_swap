/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:35:39 by mpena-so          #+#    #+#             */
/*   Updated: 2024/06/14 00:10:47 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//falta una función para comprobar si está ordenado antes de entrar en esta función.

int is_ordered(t_numbers *stack)
{
    t_numbers   *aux;

    aux = stack;

    while(aux->next != NULL)
    {
        if(aux->numb > aux->next->numb)
            return(0);
        aux = aux->next;
        //no sé qué se debe mostrar si ya está ordenada
    }
    return(1);
}

/* int compare(t_numbers **stack)
{
    t_numbers *aux;

    aux = stack;
    
} */


void    check_3_nodes(t_numbers **stack, t_numbers **stack_b)
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
            reverse_rotate(stack);
        else if((first_numb > second_numb) && (second_numb < third_numb) && (third_numb < first_numb))
        {
            rotate(stack, 0);
            //ojo que aquí he puesto solo para el stack a
        }    
        else if((first_numb > second_numb) && (second_numb > third_numb) && (third_numb < first_numb))
        {
            swap(stack, 0);
            reverse_rotate(stack);
            //ojo que aquí he puesto solo para el stack a
        }
        else if((first_numb > second_numb) && (second_numb < third_numb) && (third_numb > first_numb))
        {
            swap(stack, 0);
            //ojo que aquí he puesto solo para el stack a
        }   
        else if((first_numb < second_numb) && (second_numb > third_numb) && (third_numb > first_numb))
        {
            swap(stack, 0);
            rotate(stack, 0);
            //ojo que aquí he puesto solo para el stack
        }
    }
}

void    check_5_nodes(t_numbers **stack, t_numbers **stack_b)
{
    int result;
    //t_numbers   *aux;
    //t_numbers   *aux_2;
    
    result = ft_lst_size(*stack);
    
    if(result == 4)
    {
        push_pb(stack, stack_b);
        check_3_nodes(stack, stack_b);
        push_pa(stack, stack_b);
        //print_content(*stack);
    }

    //este da  mal porque no esta organizando despues de hacer el pa, ver como hago con eso
    //quizas crear un contador que sume el numb (del pa) + 1 y lo busque en la lista o el numb(del pa) - 1 y lo busque
    //coger el valor del stack b y compararlo en stack_b->numb > stack->numb si es así siga recorriendo sino es así frena y allí va, ver q
    //movimientos hay que hacer.
    if(result == 5)
    {
        //aux = stack;
        //aux_2 = stack_b;
        push_pb(stack, stack_b);
        check_3_nodes(stack, stack_b);
        push_pa(stack, stack_b);
        if(is_ordered(stack) == 1)
            return (0);
        
        print_content(*stack);
    }
}