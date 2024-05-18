#include "push_swap.h"

//1. Incluir entre cada nodo un elemento diferenciador para poder aceptar si te pasan argumentos con "" o sin eso y luego poder separalos para poder evaluarlos
//2. Split para poder separar la cadena en substrings y con eso valorar si son dígitos con el isdigit
//3. Si son dígitos, los pasaría a número con el atol para evaluar que no sea ni el más grande del max int ni más pequeño del min int
//4. como ya los tengo en tipo int con el atol los puedo agregar a la lista, pero comprobando que no esté ya ese número en la lista.


int main(int argc, char*argv[])
{
    int i;
    char    *str;
    char    *aux;
    char    **sub_s;
    //int numb;

//1. Pasar el array que entra por argumentos por un join para que agregue espacio entre cada argumento y acepte todos los valores que entran
// Si pasan argumentos en "" asegurarse que queda del mismo tipo que los que no van en "" y que si envían argumentos
//despues de muchos espacios lo pase con solo un espacio y que si pasan con espacio no los ponga todos juntos como si fueran uno solo.
    i = 1;
    //es 1 para que no empiece en el ejecutable si no en el primer carácter real (el ejecutable en los argv es el argv[0])
    if(argc <= 2)
    //comprobamos que haya por lo menos dos argumentos a comparar, el argv[0] es el ejecutable.
        return 1;
    //return 1 porque 1 en el main significa que no termino existosamente la función
    str = ft_calloc(1, sizeof(char));
    //reservo memoria porque se va a hacer un join para cuidar que lo que nos pasan por argumentos quede con un espacio, entonces,
    //en la primera lectura como no va nada, hay que reservar un espacio para que en el join no de problema al ir la "s1" vacía
    //--ese espacio luego se pude usar con el split como caracter diferenciador
    while (argv[i])
    {
        aux = str;
        //guardo el varlo de str en aux para que no de leak
        str = ft_join(str, argv[i]);
        //str toma otro valor, ahora es igual que el resultado del join (como en el gnl) pasándole como parámetro
        // el mismo str (primera lecutra será el '\0' y el argv[1]), (segunda lectura será el argv[1], argv[2])
        free(aux);
        //liberamos aux para que no de leak
        i++;
        //recorremos la cadena argv[i]
    }
    ft_printf("%s\n", str);
    //ft_printf("%d\n", i);
    //al salir del bucle i está en el número de argumentos (sin contar el ejecutable) + 1 porque ha hecho todas las iteraciones
    
    //2. Split para poder separar cada argumento (según carácter diferenciador) y de allí valorar cada subcadena (nodo) y ver si son digitos
    i = 0;
    while(str[i])
    {
        sub_s = ft_split(str, ' ');
        ft_printf("%s\n", sub_s[i]);
        i++;
        ft_printf("llega aqui: %d\n", i);
    }
    //ft_printf("llega aqui: %d", i);
    //ft_printf("comprobación: %c", str[i]);
   /*  
    i = 1;
    //volvemos a poner el contador a cero (en este caso 1 por el ejecutable) porque si tomamos el número en el que esté arriba ya habrá hecho todas las iteraciones
    while(str[i])
    {
        while(str[i])
        {
            if(str[i] == ' ')
                i++;
            ft_printf("%c\n", str[i]);
            i++;
        }

    } */
    
    //3. comprobar que los argumentos que pasan sean digitos
/*  
    i = 1;    
    while(str[i])
    {
        if(str[i] == ' ')
            i++;
        
        numb = ft_isdigit(str[i]);
        ft_printf("%d\n", numb);
        if(numb == 0)
        {
            free(str);
            return(1);
        }
        //aquí debería ser exit??
        i++;
    } */

    /* //3. comprobar si hay algun signo 
    while (argv[i])
    {
        numb = atol(str);
        ft_printf("probando ando %d\n", numb);
        i++;
    }
    //ft_printf("probando %d\n", numb); */
    return 0;
}

//PENDIENTES:
//comprobar que lo que pasan por argumentos no estén vacíos 
//Esto hay que comprobarlo, no? Es decir, que el primer valor de los argumentos no sea nulo
/*     
    i = 1;
    if(str[i][0] == '\0')
    {
        free(str);
        return(1); 
    } */


//comprobar que lo que pasan por argumentos no sea mayor que el max_int ni menor que el min_int. Aquí hacel el atol
//comprobar que lo que pasan por argumentos no sean digitos repetidos. Aquí podría ir a la función de agregar nodo a la lista e ir verificando antes de agregarlo que no esté ya.
