/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:35:39 by mpena-so          #+#    #+#             */
/*   Updated: 2024/08/12 01:15:33 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//comprueba si antes de entrar en el algoritmo los número ya están ordenados

int is_ordered(t_numbers **stack)
{
    t_numbers   *aux;

    aux = *stack;

    print_content(*stack);
    printf("\n");
    while(aux->next != NULL)
    {
        //printf("numero 1: %d y numero 2: %d\n", aux->numb, aux->next->numb);
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
    }
    if(result == 3)
    {
        if((first_numb < second_numb) && (second_numb > third_numb) && (third_numb< first_numb))
            reverse_rotate(stack);
        else if((first_numb > second_numb) && (second_numb < third_numb) && (third_numb < first_numb))
        {
            rotate(stack, 0);
        }    
        else if((first_numb > second_numb) && (second_numb > third_numb) && (third_numb < first_numb))
        {
            swap(stack, 0);
            reverse_rotate(stack);
        }
        else if((first_numb > second_numb) && (second_numb < third_numb) && (third_numb > first_numb))
        {
            swap(stack, 0);
        }   
        else if((first_numb < second_numb) && (second_numb > third_numb) && (third_numb > first_numb))
        {
            swap(stack, 0);
            rotate(stack, 0);
        }
    }
}

/*int find_min(t_numbers **stack)
{
    t_numbers   *aux;
    int         min;

    aux = *stack;
    min = aux->numb;
    while(aux != NULL)
    {   
        if (aux->numb < min)
            min = aux->numb;
        aux = aux->next;
    }
    return min;
}*/

//en este encontraba el menor, pero no la posición sino solo el número menor
/* void find_min(t_numbers **stack)
{
    t_numbers   *aux;

    aux = *stack;
    (*stack)->min = aux->numb;
    while(aux != NULL)
    {   
        if (aux->numb < (*stack)->min)
            (*stack)->min = aux->numb;
        aux = aux->next;
    }
} */

/* 
En este la función encuentra la POSICIÓN del menor número en la lista stack
La posición empieza desde 0

Ej:
lista = [-4 2 0 -200]
pos = [0 1 2 3]
En este caso al ser -200 el menor número de la lista, la función devolvería 3
 */

int find_min(t_numbers *stack)
{
    int min_pos;
    int current_pos;
    int min_value;

    int min_pos = 0;
    int current_pos = 0;
    int min_value = stack->numb;

    while(stack != NULL)
    {
        if(stack->numb < min_value)
        {
            min_value = stack->numb;
            min_pos = current_pos;
        }
        stack = stack->next;
        current_pos++;
    }
    return (min_pos);
}

//PENDIENTE ACABAR IMAGEN FABRI
void    check_4_nodes(t_numbers **stack, t_numbers **stack_b)
{
    int count;
    int size;
}





//este era el que tenía antes de que Fabri me ayudará a que funcionara bien
/* void    check_4_nodes(t_numbers **stack, t_numbers **stack_b)
{
    int         result;
    int         count;
    t_numbers   *aux;
    //int         min;
   
    count = -1;
   //min = 0;

    // print_content(*stack);
    // printf("\n");
    if (is_ordered(stack) == 0)
    {
        find_min(stack);
        
        aux = *stack;
        ft_printf("EL CONTENIDO DE AUX es");
        print_content(aux);
        //print_content_min(aux);
        // while(aux->min != aux->numb && aux != NULL) 
        // {
        //     //ft_printf("entra aqui\n");
        //     ft_printf("%d\n", aux->min);
        //     count++;
        //     aux = aux->next;
        // }
        while (aux != NULL)
        {
            ft_printf("MIRA AQUII\n");
            ft_printf("aux->numb: %d\n", aux->numb);
            ft_printf("aux->min: %d\n", (*stack)->min);
            if (aux->numb == (*stack)->min)
            {
                //ft_printf("entra aquí?????");
                ft_printf("Count antes: %d\n", count);
                count++;
                ft_printf("Count despues: %d\n", count);
                return ;
            }
            aux = aux->next;
        }
        printf("Count %d\n", count);
        ft_printf("el minimo ahora es je: %d\n", (*stack)->min);
        ft_printf("el minimo DE AUX ahora es je: %d\n", (*stack)->min);
        ft_printf("ahora el contenido de STACK es");
        print_content(*stack);
        ft_printf("ahora el contenido de AUX es");
        print_content(aux);
        // ft_printf("que sale: %d\n", (*stack)->numb);
        //ft_printf("count: %d\n", count);
        if(count == 0)
        {
            push_pb(stack, stack_b);
        }
        if(count == 1)
        {
            swap(stack, 0);
            push_pb(stack, stack_b);
        }
        else if(count == 2)
        {
            swap(stack, 0);
            push_pb(stack, stack_b);
        }
        else if(count == 3)
        {
            rotate(stack, 0);
            rotate(stack, 0);
            push_pb(stack, stack_b);
        }
        else if(count == 4)
        {
            reverse_rotate(stack); 
            push_pb(stack, stack_b);
        }
        // print_content(*stack);
        // print_content(*stack_b);
        result = ft_lst_size(*stack);
        ft_printf("stack a:\n");
        print_content(*stack);
        ft_printf("stack b:\n");
        print_content(*stack_b);
        
        if (result == 3)
        {
            ft_printf("stack a despues:\n");
            check_3_nodes(stack, stack_b);
            print_content(*stack);
            ft_printf("stack b despues:\n");
            print_content(*stack_b);
            push_pa(stack, stack_b);
        }
        //sleep(1);
    }

    //print_content(*stack);
} */








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