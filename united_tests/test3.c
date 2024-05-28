#include "push_swap.h"


//TEST PARA PROBAR LA FUNCIÓN ADD_CHECK_NODE DEL ARCHIVO PUSH_SWAP.C

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
        add_check_nodo(&lista, nodo);
        ft_printf("%d\n", nodo->numb);
        i++;
    }
}
