/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:22:21 by mpena-so          #+#    #+#             */
/*   Updated: 2024/03/04 20:53:18 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
    void    *content;
    struct s_list *next;
} t_list; 

t_list *ft_lstnew(int content)
{
    t_list *new_ls;
    
    new_ls = malloc(sizeof(t_list));
    if (!new_ls)
        return (NULL);
    
    new_ls->content = content;
    new_ls->next = NULL;
    return(new_ls);
}

int main ()
{
    t_list *alumno;
    
    int edad = 10;
    alumno = ft_lstnew(edad);
    printf("%d", alumno->content);
    return 0;
}

//Para poder ver lo que devuelve facilmente
/* typedef struct s_list
{
    int content; // se pone aquí int porque con el void* que indica en el subject no se podría ver el valor devuelto
    struct s_list *next;
} t_list;  */ 

/* 
Estructura: 
Tiene los datos
Nodo: 
Es una estructura que tiene dirección de memoria
Lista:
Conectar los nodos
*/