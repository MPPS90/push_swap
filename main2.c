#include "push_swap.h"

//1. Incluir entre cada nodo un elemento diferenciador para poder aceptar si te pasan argumentos con "" o sin eso y luego poder separalos para poder evaluarlos
//2. Split para poder separar la cadena en substrings y con eso valorar si son dígitos con el isdigit
//3. Si son dígitos, los pasaría a número con el atol para evaluar que no sea ni el más grande del max int ni más pequeño del min int
//4. como ya los tengo en tipo int con el atol los puedo agregar a la lista, pero comprobando que no esté ya ese número en la lista.

int check_digit(char *str)
{
    int i;
    int numb;

    i = 0;
    if(str[i] == '-')
        i++;
    while(str[i])
    {
        numb = ft_isdigit(str[i]);
        if(numb == 0)
            return 1;
        i++;
    }
    return 0;
}


int main(int argc, char*argv[])
{
    int i;
    int j;
    char    **sub_s;

    i = 1;
    if(argc <= 2)
        return 1;
    while (argv[i])
    {
        sub_s = ft_split(argv[i], ' ');
        j = 0;
        while(sub_s[j])
        {
            ft_printf("%s\n", sub_s[j]);
            if(check_digit(sub_s[j]) == 1)
                ft_printf("error\n");
            free(sub_s[j]);
            j++;
        }
        free(sub_s);
        i++;
    }
    return 0;
}

//Pendientes:
//el free podría meterlo en la misma función como en el split para llamarlo solo una vez y no se me pongan muchas líneas de código
//recordar que cada vez que salte error debo liberar