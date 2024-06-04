#include "push_swap.h"

//falta una función para comprobar si está ordenado antes de entrar en esta función.

void    check_nodes(t_numbers **stack, t_numbers **stack_b)
{
/*     t_numbers   *first_node;
    t_numbers   *second_node; */
    int result;

    //ft_printf("HOLAAAA\n");
    result = ft_lst_size(*stack);
    //ft_printf("%d\n", result);
    
    if(result == 2)
    {
        if((*stack)->numb < (*stack)->next->numb)
            swap(stack, 0);
            //ojo que aqui he puesto solo para el stack a
    }
    if(result == 3)
    {
        if(((*stack)->numb < (*stack)->next->numb) && ((*stack)->next->numb > (*stack)->next->next->numb) 
        && ((*stack)->next->next->numb < (*stack)->numb))
        {
            reverse_rotate(stack);
            print_content(*stack);
        }
        else if(((*stack)->numb > (*stack)->next->numb) && ((*stack)->next->numb < (*stack)->next->next->numb) 
        && ((*stack)->next->next->numb < (*stack)->numb))
        {
            rotate(stack, 0);
            //ojo que aquí he puesto solo para el stack a
            print_content(*stack);
        }    
        else if(((*stack)->numb > (*stack)->next->numb) && ((*stack)->next->numb > (*stack)->next->next->numb) 
        && ((*stack)->next->next->numb < (*stack)->numb))
        {
            swap(stack, 0);
            reverse_rotate(stack);
            //ojo que aquí he puesto solo para el stack a
            print_content(*stack);
        }
        else if(((*stack)->numb > (*stack)->next->numb) && ((*stack)->next->numb < (*stack)->next->next->numb) 
        && ((*stack)->next->next->numb > (*stack)->numb))
        {
            swap(stack, 0);
            //ojo que aquí he puesto solo para el stack a
            print_content(*stack);
        }   
        else if(((*stack)->numb < (*stack)->next->numb) && ((*stack)->next->numb > (*stack)->next->next->numb) 
        && ((*stack)->next->next->numb > (*stack)->numb))
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