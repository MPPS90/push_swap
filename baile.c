/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:35:39 by mpena-so          #+#    #+#             */
/*   Updated: 2024/07/17 22:04:09 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//comprueba si antes de entrar en el algoritmo los número ya están ordenados

int is_ordered(t_numbers *stack)
{
    t_numbers   *aux;

    aux = stack;

    while(aux->next != NULL)
    {
        if(aux->numb > aux->next->numb)
            return(0);
        aux = aux->next;
        //no sé qué se debe mostrar por pantalla si ya está ordenada. Ver subject
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
    (void)stack_b;
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
    int         result;
    int         count;
    t_numbers   *min;
   
    min = *stack;
    count = 0;
    //print_content(*stack);
    if (is_ordered(stack) == 0)
    {
        while(min->next != NULL && min->numb > min->next->numb) 
        {
            ft_printf("entra aqui\n");
            ft_printf("%d\n", min->numb);
            min = min->next;
            count++;
        }
            // ft_printf("que sale: %d\n", (*stack)->numb);
        ft_printf("count: %d\n", count);
        if(count == 1)
            swap(stack, 0);
        else if(count == 2)
        {
            rotate(stack, 0);
            rotate(stack, 0);
            push_pb(stack, stack_b);
        }
        else if(count == 3)
        {
            reverse_rotate(stack); 
            push_pb(stack, stack_b);
        }
        print_content(*stack);
        print_content(*stack_b);
        result = ft_lst_size(*stack);
        if (result == 3)
        {
            check_3_nodes(stack, stack_b);
            push_pa(stack, stack_b);
        }
        sleep(1);
    }

    //print_content(*stack);
}

//PENDIENTES
//1. Que cuando se creen los nodos tengan indice. Todos deberían entrar a la lista con el mismo indice, cuando ya no entren más 
//ir comparándolos y dandole indice en orden según sea más pequeño (ver foto)
//2. Con el lt_size ver el total de nodos de la lista, si el que estoy buscando (más pequeño está de la primera mitad poner unos movimientos y si está en la otra mitad otros), esto es para 
//hacer que el más pequeño pase arriba y poder pushearlo al stack_b. Es diferente a lo de organizarlos cuando tenga 3 nodos. 



//lo que cambie con Fabri

/* void    check_5_nodes(t_numbers **stack, t_numbers **stack_b)
{
    int         result;
    int         count;
    t_numbers   *min;
   
    
    print_content(*stack);
    while(is_ordered(*stack) == 1)
    {
        min = *stack;
        count = 0;
        while(min->next != NULL && min->numb > min->next->numb) 
        //&& second_numb > third_numb && third_numb > fourth_numb)
        {
            ft_printf("entra aqui\n");
            ft_printf("%d\n", min->numb);
            min = min->next;
            count++;
        }
        // ft_printf("que sale: %d\n", (*stack)->numb);
        ft_printf("count: %d\n", count);
        if(count == 1)
            swap(stack, 0);
        else if(count == 2)
        {
            rotate(stack, 0);
            rotate(stack, 0);
        }
        else if(count == 3)
        {
            reverse_rotate(stack); 
            push_pb(stack, stack_b);
        }
        print_content(*stack);
        result = ft_lst_size(*stack);
        if (result == 3)
        {
            check_3_nodes(stack, stack_b);
            push_pa(stack, stack_b);
        }
        sleep(1);
        print_content(*stack);
    }

} */


//función que guarde la posición del mas pequeño 