#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/*
    *   brief
    *
    *
    *
    *
    *
    *
    *
    *
    */

int buscarEntero(int[],int ,int);
int main()
{
int vector[TAM]={1,3,5,7,9};

    int index;
    int numero=3;

    index=buscarEntero(vector,TAM,numero);
    if(index==1)
        {

            printf("El indice no se encuentra :%d\n",numero);

        }
    else
        {

            printf(":%d encontradoen la posicion :%d\n",numero,index);
        }

    return 0;
}
int buscarEntero(int vector[],int tam,int valor)
{

    int indice =-1;
    int i;
      for (i=0;i<tam;i++){
        printf("%d\n",vector[i]);
            if(vector[i]==valor)
                {
                    indice = 1;
                    break;
                }
        }
    return indice;
}
