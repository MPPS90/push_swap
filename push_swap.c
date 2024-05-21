/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:59:20 by mpena-so          #+#    #+#             */
/*   Updated: 2024/04/17 19:06:43 by mpena-so         ###   ########.fr       */
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
	new_nodo->next = NULL;
	return (new_nodo);
}

void	add_nodo(t_numbers **numbs, t_numbers *new)
{
	t_numbers	*aux;

	aux = *numbs;
	//aux es igual a puntero de numbs, los dos tienen la misma dirección de memoria?? Debuggear para verlo. 
	//esto se hace para no perder la referencia del primer nodo.
	//en el primer nodo entrará este if, pero a partir del segundo no porque numbs ya no estará vacío y aux tampoco valdría NULL al igual aux = *numbs
	if (*numbs == NULL)
	{
		*numbs = new;
		//aquí se usa numbs y no aux porque con aux da segfault (no sé por qué)
	}
	else 
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
				// esto lo hacemos porque hay que recorrer toda la lista hasta llegar  a la última posición para agregar el nuevo nodo de la lista allí.
				// así le decimos a aux, que es el primer nodo de la lista, que sea = al puntero que apunta al siguiente hasta llegar al final de la lista
		}
		aux->next = new;
	}
}

void	add_check_nodo(t_numbers **numbs, t_numbers *new)
{
	t_numbers	*aux;

	aux = *numbs;

	if (*numbs == NULL)
	{
		*numbs = new;
	}
	else
	{
		while (aux->next != NULL)
		{
			if(new->numb == aux->numb)
			{
				free(new);
				ft_printf("Error\n");
				return(1);
			}
			aux = aux->next;
		}
		aux->next = new;
	}
}
