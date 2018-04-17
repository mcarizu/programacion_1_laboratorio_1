#include <stdio.h>
#include <stdlib.h>

#define T 5
typedef struct
    {
        int dato1;
        char dato2[20];
        float dato3;

    }edato;

void cargarDatosHardCode(edato[],int);

int main()
{
int i;
  edato lista[T];
  cargarDatosHardCode(lista,T);

  for(i=0;i<T;i++)
    {
        if(lista[i].dato1=!0)

            {
                printf("\ndato1: %d \ndato: %s \ndato3: 2.f \n",lista[i].dato1,lista[i].dato2,lista[i].dato3);
            }

    }
    return 0;
}


void cargarDatosHardCode(edato lista[],int cantidad)
{
    int i;
    int D1[T]={1,2,3,4,5};
    char D2[T][20]={"AAA","BBB","CCC","DDD","EEE"};
    float D3[T]={1.1,2.2,3.3,4.4,5.5 };


    for(i=0;i<cantidad;i++);
    {
        lista[i].dato1=D1[i];
        strcpy(lista[i].dato2,D2[i]);
        lista[i].dato3=D3[i];
    }

}


