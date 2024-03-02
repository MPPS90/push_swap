#include <stdio.h>

//main argumentos 

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    printf("Nº argumentos: %d\n\n", argc);
    
    while (argv[i] != NULL)
    {
        printf("Argumentos: %s\n", argv[i]);
        i++;
    }
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
