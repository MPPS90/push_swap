/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:59:20 by mpena-so          #+#    #+#             */
/*   Updated: 2024/07/17 21:13:50 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_numbers	*create_node(int numb)
{
	t_numbers	*new_nodo;

	new_nodo = malloc(sizeof(t_numbers));
	if(new_nodo == NULL)
		return (NULL);
	new_nodo->numb = numb;
	//new_nodo->min = 0;
	//new_nodo->index = -1;
	new_nodo->next = NULL;
	return (new_nodo);
}


/*void	add_nodo(t_numbers **stack, t_numbers *new)
{
	t_numbers	*aux;
	

	aux = *stack;
	if (*stack == NULL)
	{
		*stack = new;
	}
	else 
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
				// esto lo hacemos porque hay que recorrer toda la lista hasta llegar  a la última posición para agregar el nuevo nodo de la lista allí.
		}
		aux->next = new;
	}
}*/

int	add_check_nodo(t_numbers **stack, t_numbers *new)
{
	t_numbers	*aux;
	t_numbers	*prev;

	prev = NULL;
	//ft_printf("prueba0\n");
	if (*stack == NULL)
	{
		*stack = new;
		//ft_printf("prueba1\n");
	}
	else
	{
		//ft_printf("prueba\n");
		aux = *stack;
		while (aux != NULL)
		{
			//printf("Esta checkeando la posicion: %d y new_num es %d\n", aux->numb, new->numb);
			//ft_printf("prueba\n");
			if (aux->numb == new->numb)
			{
				free(new);
				//free_stack(*stack);
				ft_printf("Error\n");
				return(1);
			}
			prev = aux;
			aux = aux->next;
		}
		prev->next = new;
	}
	//free(new);
	return (0);
}


//SEBASTIAN 
/* void  index_num(t_list **top)
{
	t_list *tmp1;
	t_list *tmp2;

	tmp1 = (*top);
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while(tmp2)
		{
			if (tmp1->content > tmp2->content)
				tmp1->index++;
			else
				tmp2->index++;
			tmp2 = tmp2->next;	
		}
		tmp1 = tmp1->next;
	}
	
} */




