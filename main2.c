#include "push_swap.h"

/* int check_input()
{

} */


int main(int argc, char*argv[])
{
    int i;
    char    *str;
    char    *aux;

    i = 1;
    if(argc < 2)
        return 1;
    str = ft_calloc(1, sizeof(char));
    while (argv[i])
    {
        aux = str;
        str = ft_join(str, argv[i]);
        free(aux);
        i++;
    }
    ft_printf("%s\n", str);
    return 0;
}


//comprobar que lo que pasan por argumentos no estén vacíos 
//comprobar que lo que pasan por argumentos no sea letras
//comprobar que lo que pasa por argumentos 