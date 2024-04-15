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
    int number;
    t_numbers   *lista;
    t_numbers   *nodo;


    i = 1;
    number = 0;

    while(i < argc)
    {
        number = ft_atoi(argv[i]);
        nodo = create_node(number);
        if(i < argc)
        {
            printf("%d\n", nodo->numb);
            add_nodo(&lista, nodo);
            printf("nodo aquí %d\n", nodo->numb);
            printf("valor que tiene i %d\n", i);
        }
        i++;
        printf(" y valor que tiene i %d\n", i);
        printf("segundo nodo %d\n", nodo->numb);
    }
    
    printf("%d", lista->numb);
    //no le puedo poner next porque sino le estaría diciendo que en cuanto este el último ya no pase al siguiente porque lista->next es el penultimo.
    //en el printf es lista->numb porque debe imprimir el contenido del nodo (no el nodo en sí) y es %d porque el nodo contiende un tipo int
    //no puedo imprimir el nodo solo porque entonces tendría que indicarle el %p e imprimiría es la dirección de memoria donde está 
    while(lista != NULL)
    {
        printf("%d", lista->numb);
        lista = lista->next;
    }
    return (0);
}
