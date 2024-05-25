#include "push_swap.h"

//main argumentos 
/* Los argumentos se pasan por la terminal: 
1. El primer argumento es el ejecutable (por defecto ./a.out)Este ocupa la posición 0 ([0])
2. arg representa el número de argumentos que le pasas
3. argv[i] son los argumentos, según la posición que le indicas en []
4. Si en la terminal, despues de compilar, le paso ./a.out hola como estas, debe devoler: Nº argumentos 4, Argumentos: ./a.out, Argumentos: hola, Argumentos: como, Argumentos: estas. 
*/

//MAIN COMPROBAR RECIBE LOS ARGUMENTOS
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


//MAIN COMPROBAR LOS MOVIMIENTOS
/* 
int main(int argc, char *argv[])
{
    int i;
    int number;
    t_numbers   *lista;
    //t_numbers   *lista2;
    t_numbers   *nodo;

    i = 1;
    number = 0;
    lista = NULL;
    //lista2 = NULL;
    while(i < argc)
    {
        number = ft_atoi(argv[i]);
        nodo = create_node(number);
        add_nodo(&lista, nodo);
        i++;
    }
    // print_content(lista);
    // swap(&lista, 0);
    //no le puedo poner next porque sino le estaría diciendo que en cuanto este el último ya no pase al siguiente porque lista->next es el penultimo. 
    /* ft_printf("swap ss\n");
    swap_ss(&lista2, &lista);
    print_content(lista2);
    ft_printf("separador listas\n");
    print_content(lista); */
/*     ft_printf("Antes del push\n");
    print_content(lista);
    printf("push_a:\n\n");
    push_pa(&lista2, &lista);
    printf("Despues del push\n");
    printf("Lista \n");
    print_content(lista);
    printf("Lista 2\n");
    print_content(lista2); */
    /* ft_printf("push_b:\n\n");
    push_pb(&lista2, &lista);
    ft_printf("Despues del push\n");
    ft_printf("Lista \n");
    print_content(lista);
    ft_printf("Lista 2\n");
    print_content(lista2); */
    /* ft_printf("ROTATE\n");
    rotate(&lista, 1);
    ft_printf("Lista \n");
    print_content(lista); */
    /* ft_printf("ROTATE rr\n");
    rotate_rr(&lista, &lista2);
    print_content(lista);
    ft_printf("separador listas\n");
    print_content(lista2); */
    /* ft_printf("REVERSE ROTATE\n");
    reverse_rotate(&lista);
    print_content(lista);
    free(nodo); */
    //free(lista);










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
