/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpena-so <mpena-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:01:43 by mpena-so          #+#    #+#             */
/*   Updated: 2023/12/16 17:20:19 by mpena-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{   
    int number;
    int number2 = -2147483648;
    char *nombre = "TU MISMO";
    char *nombre2 = 0;
    int edad = 32;
    unsigned int numb_uns = 4294967295;
    int numb_hexa= 234859;

    printf("Original printf\n");
    number = printf("%%Hola %c, %s tienes %d años\n", 'c',  nombre, edad);
    printf("Retorno de printf: %d\n", number);

    number = printf("%s\n", nombre2);
    printf("Retorno de printf: %d\n", number);
    
    number = printf("unsigned %u\n", numb_uns);
    printf("Retorno de printf: %d\n", number);
    
    number= printf("HEXADECIMAL: %X, %x\n", numb_hexa, numb_hexa);
    printf("Retorno de printf: %d\n", number);

    number= printf("MEMORY: %p\n", (void *)0);
    printf("Retorno de printf: %d\n", number); 
    

    printf("\n");
    ft_printf("\n");

   ft_printf("My printf\n");
    number = ft_printf("%%Hola %c, %s tienes %d años\n", 'c',  nombre, edad);
    ft_printf("Retorno de printf: %d\n", number);

    number = ft_printf("%s\n", nombre2);
    ft_printf("Retorno de printf: %d\n", number);
    
    number = ft_printf("unsigned %u\n", numb_uns);
    ft_printf("Retorno de printf: %d\n", number);
    
    number= ft_printf("HEXADECIMAL: %X, %x\n", numb_hexa, numb_hexa);
    ft_printf("Retorno de printf: %d\n", number); 

    number= ft_printf("MEMORY: %p\n", (void *)0);
    ft_printf("Retorno de printf: %d\n", number); 

    printf("\n\n");
    //prueba del int MIN
    ft_printf("%d\n", number2);
    printf("%d\n", number2);
}


/* PARA PRACTICAR PUNTEROS 

void sumar(int *hola, int *b)
{
    *hola = *b;
    *b = 200000;
    printf("%p\n", hola);
    printf("b: %d\n", *b);
    printf("hola: %d\n", *hola);
    
}

int main()
{
    int	a;
    int	b;

    a = 1;
    b = 2;
    printf("%p\n", &a);
    sumar(&a, &b);
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    return 0;
}
 */
