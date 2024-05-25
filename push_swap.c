/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:59:20 by mpena-so          #+#    #+#             */
/*   Updated: 2024/05/24 21:17:44 by mpena-so         ###   ########.fr       */
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
	if (*numbs == NULL)
	{
		*numbs = new;
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
}

int	add_check_nodo(t_numbers **numbs, t_numbers *new)
{
	t_numbers	*aux;


	ft_printf("prueba0");
	if (*numbs == NULL)
	{
		*numbs = new;
		ft_printf("prueba1");
	}
	else
	{
		ft_printf("prueba");
		aux = *numbs;
		while(aux->next != NULL)
		{
			ft_printf("prueba");
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
	return (0);
}
