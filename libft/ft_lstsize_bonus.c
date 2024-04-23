/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:49:42 by mpena-so          #+#    #+#             */
/*   Updated: 2024/03/24 17:08:13 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//lst: el principio de la lista

//Cuenta el número de nodos de una lista

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst != NULL)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}
//list->nodo !NULL  list->nodo2 next !NULL list->nodo3

/* int main(void)
{
    t_list *new;
    t_list *var;
    var = ft_lstnew(ft_strdup("hola"));

    printf("El numero es %d\n", ft_lstsize(new));
    printf("El VAR es %d\n", ft_lstsize(var));

    return 0;
} */