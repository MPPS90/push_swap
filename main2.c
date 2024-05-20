#include "push_swap.h"

//1. Incluir entre cada nodo un elemento diferenciador para poder aceptar si te pasan argumentos con "" o sin eso y luego poder separalos para poder evaluarlos
//2. Split para poder separar la cadena en substrings y con eso valorar si son dígitos con el isdigit
//3. Si son dígitos, los pasaría a número con el atol para evaluar que no sea ni el más grande del max int ni más pequeño del min int
//4. como ya los tengo en tipo int con el atol los puedo agregar a la lista, pero comprobando que no esté ya ese número en la lista.

//función para revisar que los argumentos que pasan sean digitos
int check_digit(char *str)
{
    int i;
    int numb;

    i = 0;
    //se igual a cero porque en el momento que se llama a check_digit la posición 0 ya no es el ejecutable
    //cuando se llama check_digit ya ha pasado por el split y el split devuelve un doble puntero a la posición de todas las sub_cadenas generadas
    if(str[i] == '-')
        i++;
    //se le indica que si se encuentra con un '-' al inicio de cada sub_cadena pase a la siguiente posición en esa cadena y no tramite nada más con ese '-'
    while(str[i])
    {
        numb = ft_isdigit(str[i]);
        //se evalua cada caracter y su resultado se guarda en numb, recordar que isdigit devuelve 1 (sí digito) y 0 (no digito)
        if(numb == 0)
            return 1;
        //en el caso de que no sea un dígito se para la ejecución (return 1)
        i++;
        //en el caso que sí sea un dígito sigue recorriendo la cadena hasta el final (return 0 = éxito)
    }
    return 0;
}


int main(int argc, char*argv[])
{
    int i;
    int j;
    char    **sub_s;
    int numb;

    i = 1;
    if(argc <= 2)
        return 1;
    //antes de entrar en nada se comprueba que el nº de argumentos sea mayor que 2 porque 
    //el primero es el ejectuable y si hay solo uno mas (segundo) no se podría hacer nada
    while (argv[i])
    {
        sub_s = ft_split(argv[i], ' ');
        //sub_s será una variable doble puntero (matriz) que guardará el valor de todas las sub_cadenas que se obtengan del split
        j = 0;
        //declaramos otro contador para recorrer la matriz (sub_s) entera, donde están todos los valores de las sub_cadenas resultantes
        while(sub_s[j])
        {
            //ft_printf("%s\n", sub_s[j]);
            if(check_digit(sub_s[j]) == 1)
            //llamamos a la función que comprueba digitos para que vaya comparando cada valor de cada sub_cadena y ver si es 1, 1 significa que el valor NO es un digito
            {
                free(sub_s[j]);
                free(sub_s);
                ft_printf("error\n");
                return (1);
                //en el caso que la comparación del resultado de aplicar a cada valor isdigit para ver si es igual a 1 (no es dígito)
                //se libera esa sub_cajita y despues la caja entera (split) y se imprime el mensaje de error y se devuelve 1 (error en el main)
                //pendiente ver que es lo que realmente debe imprimir en el ft_print en este caso
            }
            free(sub_s[j]);
            //si recorre todo y no encuentra coincidencia con el resultado de isdigit y 1 (no sea dígito) AQUI FALTA APLICAR TODO LO OTRO
            //Yo creo que ese sub_s[j] y el sub_s deberían ir en el mismo caso. REVISAR  
            j++;
            else
            {
                numb = ft_atol(sub_s);
                if(numb == )

            }
        }
        free(sub_s);
        i++;
    }
    return 0;
}

//Pendientes:
//el free podría meterlo en la misma función como en el split para llamarlo solo una vez y no se me pongan muchas líneas de código
//recordar que cada vez que salte error debo liberar