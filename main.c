#include "push_swap.h"

//main argumentos 
/* Los argumentos se pasan por la terminal: 
1. El primer argumento es el ejecutable (por defecto ./a.out)Este ocupa la posición 0 ([0])
2. arg representa el número de argumentos que le pasas
3. argv[i] son los argumentos, según la posición que le indicas en []
4. Si en la terminal, despues de compilar, le paso ./a.out hola como estas, debe devoler: Nº argumentos 4, Argumentos: ./a.out, Argumentos: hola, Argumentos: como, Argumentos: estas. 
*/

 /* int main(int argc, char *argv[])
{
    int i;

    i = 0;
    printf("Nº argumentos: %d\n\n", argc);
    
    while (argv[i] != NULL)
    {
        printf("Argumentos: %s\n", argv[i]);
        i++;
    }
}  */
int main(int argc, char *argv[])
{
    int i;
    int j;
    int number;
    t_numbers   *lista;
    t_numbers   *nodo;


    i = 1;
    j = 0;
    number = 0;

    while(i < argc)
    {
        number = ft_atoi(argv[i]);
        nodo = create_node(number);
        ft_printf("%d\n", nodo->numb);
        add_nodo(&lista, nodo);
        i++;
    }
    //no le puedo poner next porque sino le estaría diciendo que en cuanto este el último ya no pase al siguiente porque lista->next es el penultimo. 
    while(lista != NULL)
    {
        lista = lista->next;
        ft_printf("%d", lista);
    }
    return (0);
}









/* Seleccionas con shift

Coomand + -> = ir al final de la linea
Coomand + <- = ir al principio de la linea
Coomand + ^(flechita de arriba) = ir al principio del archivo
Coomand +  (flechita de abajo) = ir al final del archivo
 */

// Mover lineas:
//     donde sea que esté el cursor, presionar alt y flechitas abajo y arriba

// Para duplicar:
//     1.- Seleccionas
//     2.- alt + shift + flecha arriba o flecha abajo

// Comentario por bloques -->> selecciona lo que quieres comentar y luego
//     alt + shift + a

/* Comentario por lineas -->> selecciona lo que quieres comentar y luego
    Command + shift + 7
 */

/* 
Header:
comand + alt + h 
*/
