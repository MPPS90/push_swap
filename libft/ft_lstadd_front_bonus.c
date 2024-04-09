/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:34:55 by mpena-so          #+#    #+#             */
/*   Updated: 2024/03/05 20:05:45 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lst: dirección de un puntero al primer nodo de una lista
//new: un puntero al nodo que añadir al principio de la lista

//lo que hace esta función: Añade el nodo ’new’ al principio de la lista ’lst’
#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return;    
    new->next = *lst; // le esta diciendo que de la estructura de new, el next (que es el que le marca a donde va el siguiente) tome el valor de la "dirección de memoria" de lst (por eso es igual a *lst)
    *lst = new; //aquí le digo que el valor que de lst pasa a ser el de la list new
}