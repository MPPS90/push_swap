/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:22:21 by mpena-so          #+#    #+#             */
/*   Updated: 2024/03/05 17:28:20 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
    void    *content;
    struct s_list *next;
} t_list; 


t_list *ft_lstnew(char *content)
{
    t_list *new_ls;
    
    new_ls = malloc(sizeof(t_list));
    if (!new_ls)
        return (NULL);
    
    new_ls->content = content;
    new_ls->next = NULL;
    return(new_ls);
}


int main (int argc,char *argv[])
{
    t_list *alumno; //una variable del tipo de la estructura
    char   *nombre;
    
    (void)argc;
    nombre = argv[1];
    alumno = ft_lstnew(nombre); 
    printf("%s\n", alumno->content); 
       
    return 0;
} 

//Para poder ver lo que devuelve facilmente
/* typedef struct s_list
{
    int content; // se pone aquí int porque con el void* que indica en el subject no se podría ver el valor devuelto
    struct s_list *next;
} t_list;  */

/* int main ()
{
    t_list *alumno;
    
    int edad = 10;
    alumno = ft_lstnew(edad);
    printf("%d", alumno->content);
    return 0;
} */

 
/* 
Estructura: 
Tiene los datos
Nodo: 
Es una estructura que tiene dirección de memoria
Lista:
Conectar los nodos
*/