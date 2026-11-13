#include<stdio.h>
#include "cuadro_magico.h"


int main(){
	printf("\t\t\t=====CUADRO MAGICO DE 3X3===== \t\t\t\n\n");
	int cuadro[3][3]={0};
	int n=3;
	int suma=0;
	int i=0,j=0;

	int op;
	do
	{
		printf("\t\t\tMenu\t\n");
		printf("1.Ingresar valores al cuadro:\n");
		printf("2.Mostrar cuadro\n");
		printf("Elige una opcion del menu:");
		scanf("%d",&op);
		limpiar_buffer();

		switch (op)
		{
		case 1:
			ingresar(cuadro,n);

			break;
		case 2:

			mostrar(cuadro,n);


		break;


		default:
			printf("\tError..Ingresa una opcion del menu\n\n");



			}//switch




		}while (op!=3);//do while
	}
