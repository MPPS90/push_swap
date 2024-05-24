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

    if(argc <= 2)
        return(1);
    str = ft_calloc(1, sizeof(char));
    //reservo memoria para el primer join porque las s1 y s2 no pueden estar vacías y en la primera iteración s1 no tendría nada
    i = 1;
    while(argv[i])
    {
        int k = 0;
        k++;
        //printf("el intento %d\n", k);
        aux = str;
        //guardo puntero al inicio para que al hacer los nuevos join (nuevos punteros) no pierda el anterior, pueda liberarlo y no genere leaks
        str = ft_join(str, argv[i]);
 /*        if(str == NULL)
            return NULL; */
        free(aux);
        i++;
        ft_printf("%s\n",str);
    }
    //free(str);
    return (0);
}

/*     str = ft_calloc(1, sizeof(char));
    if(str == NULL)
        return NULL; */