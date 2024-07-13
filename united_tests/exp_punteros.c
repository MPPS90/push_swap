//PARA PONERLO EN PYTHON TUTOR

//NO ES PUNTERO 
/* #include <stdio.h>
	
	
	void  change_value(int numerito)
	{
	  numerito = 7;
	}
	
	int main() {
	
	
	  int num = 1;
	  change_value(num);
	  
	  printf("%d\n", num);
	  return 0;
	} */




//PUNTERO NORMAL
/* #include <stdio.h>
	
	void rotate(int **numerito)
	{
	  **numerito = 8;
	}
	
	
	void  change_value(int *numerito)
	{
	  *numerito = 7;
	  printf("%d\n", *numerito);
	  rotate(&numerito);
	}
	
	int main() {
	
	
	  int num = 1;
	  change_value(&num);
	  
	  printf("%d\n", num);
	  return 0;
	} */




//DOBLE PUNTERO
/* #include <stdio.h>


print_num(int *number)
{
    printf("imprimendooo -> %d\n", *number);
}


void rotate(int **numerito)
{
  **numerito = 8;
  print_num(*numerito);
}


void  change_value(int *numerito)
{
  *numerito = 7;
  printf("%d\n", *numerito);
  rotate(&numerito);
}

int main() {


  int num = 1;
  change_value(&num);
  
  printf("%d\n", num);
  return 0;
} */

//EN  ESTE ULTIMO SE PUEDE VER QUE CUANDO ES UN * EL PUNTERO SEÑALA DIRECTAMENTE AL MAIN, PERO CUANDO ES ** EL PRIMER PUNTERO APUNTA A UN PUNTERO (SEGUNDO PUNTERO) Y
//EL SEGUNDO PUNTERO APUNTA A MAIN. EN ESTE CASO EL ** NO ES UNA COPIA PORQUE PUEDE MODIFICAR AL MAIN. 