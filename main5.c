#include "push_swap.h"

int  main(int argc, char *argv[])
{
    //1. Hacer join para convertir los argumentos que entran en una sola string, de esta manera al pasarle 
    // a esa cadena sola el split, solo habría un '\0' (final del string) que se convertiría en NULL al final. 
    //Si lo hiciera sin ese join y le pasara el split a los argumentos que entran sin convertirlos a todos en una sola cadena (un solo argumento)
    //el resultado del split de cada argumento devolvería substrings con varios '\0' (uno por cada sub_string, es decir por cada argumento)
    //lo que significaría un valor + NULL, otro valor + NULL, etc y esto lleva a que atol que no controla cuando recibe un NULL no sepa 
    //gestionar a partir del segundo argumento que recibe que es NULL, allí frena porque no sabe cómo gestionarlo.

    //el join debe incluir un espacio entre la cadena s1 y s2 que está pegando para PENDIENTE DE MIRAR BIEN EN EL DEBUGGER PARA QUE ERA ESTO
    
    //2.Comprobar con esa cadaena única que queda que reciba ni dígitos, ni letras, gestionar los signos
    
    int i;
    char    *str;
    char    *aux;

    i = 1;
    if(argc <= 2)
        return 1;
    str = ft_calloc(1, sizeof(char));
    while(argv[i])
    {
        aux = str;
        str = ft_join(str, argv[i]);
        free(aux);
        i++;
    }
    ft_printf("%s\n", str);
    free(str);
    return (0);
}
