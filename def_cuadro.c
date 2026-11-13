#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "cuadro_magico.h"

void limpiar_buffer(){
	int c;
	while((c=getchar())!='\n'&& c!=EOF);
}

int  suma_fila(int cuadro[3][3],int n,int i)
{

int suma=0;
       
        for (int j=0;j<n;j++){
            suma+=cuadro[i][j];
        }
    return suma;
    }//cierre

int suma_columna(int cuadro[3][3],int n,int j)
{
    
   int suma=0;
    for (int i=0;i<n;i++)
    {
        suma+=cuadro[i][j];
    }
    return suma;
}

void ingresar(int cuadro[3][3],int n)
{
    int i,j;

    printf("Ingresa el tamayo del cuadro:");
    scanf("%d",&n);
    limpiar_buffer();
    if (n==3)
    {
        printf("Ingresa los valores del cuadro:\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){

                printf("Cuadro:[%d][%d]=",i,j);
                scanf("%d",&cuadro[i][j]);


                printf("\n");
            }
            limpiar_buffer();
        }
    }//if
    else{
        printf("NO ES UN CUADRO MAGICO\n");
    }
}

void mostrar(int cuadro[3][3],int n)
{
    int i,j;
   // int suma=0;
    //imprimir
    printf("\t\t\tVALORES DEL CUADRO MAGICO\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {


            printf("Cuadro:[%d][%d]:%d\n",i,j,cuadro[i][j]);

        }//for j
    }//for i

}



