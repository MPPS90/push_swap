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



//OTRA COSA (NO ES PUNTEROS)

/*
 void	print_listas(t_list *header_a, t_list *header_b)
{
	printf("---------------------------------\n");
	printf("Stack a		|		Stack b\n");
	while (header_a || header_b)
	{
		if (header_a && header_b)
		{
			printf("%i		|		%i\n", *(int *)header_a->content,
								*(int *)header_b->content);
			header_a = header_a->next;
			header_b = header_b->next;
		}
		else if (header_a)
		{
			printf("%i		|			\n", *(int *)header_a->content);
			header_a = header_a->next;
		}
		else if (header_b)
		{
			printf("		|		%i\n", *(int *)header_b->content);
			header_b = header_b->next;
		}
	}
	printf("---------------------------------\n");
} 
*/