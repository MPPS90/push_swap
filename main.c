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