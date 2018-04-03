#include <stdio.h>
#include <stdlib.h>
#define TAM 5
#include <conio.h>

float calcularPromedio(int,int);

void mostrarVector(int[],int);   /*funcion que muestre un vector, recibe vector y su tipo y la cant de elementos del vector*/

int main()
{
    int vector[TAM] = {1,2,3,4,80};   /* hardcodeado*/ /* en cero: int vector [TAM]={0}; sino pongo nada tambien queda en cero*/
    int i;
    /* hay carga secuencial - si se la cantidad uso un for, siempre en cero empiezo la var de control */
    /* y aleatoria */
    int maximo;
    int flag =0;  /*para el maximo*/
    char opcion;
    int suma=0;  /* por ser acumulador en o se inicia*/
    float promedio;
    int posicion;
    int numero;
    char seguir;
    int contIngreso=0;

   /*inicializo el vector*/
  /*  for(i=0; i<TAM; i++)
    {
        vector[i]=0;
    }*/

do{

    printf("1. Ingrese datos:\n");
    printf("2. Mostrar datos en orden inverso:\n");
    printf("3. MOstrar numeros pares:\n");
    printf("4. Mostrar el maximo:\n");
    printf("5. Mostrar las posiciones del maximo:\n");
    printf("6. Mostrar Cantidad de numeros mayores a 20:\n");
    printf("7. Mostrar el promedio de todos los numeros:\n");
    printf("8. Mostrar datos en orden dado:\n");
    printf("9. Salir:\n");
    printf("Elija una opcion:\n");

    printf("\n");
    opcion = getche();

    switch(opcion)
{
case '1':

    printf("INGRESO\n");
  do{                      /* se puede usar funcion que ya creamos ingresar entero o algo asi*/

    printf("Ingrese posicion: ");
    scanf("%d",&posicion);

    printf("Ingrese el numero: ");
    scanf("%d",&numero);

    vector[posicion-1] = numero;

    printf("Desea continuar ingresando?:\n");
    seguir = getche();

    }while(seguir=='s');

break;

case '2':
    printf("Listado en orden inverso:\n");
    for(i=TAM-1; i>=0; i--)
    {
       printf("%d\n", vector[i]); /* aca imprime las dir de memoria*/
    }
break;

case'3':
    printf("Listado de numeros pares:\n");
    for(i=0; i<TAM; i++)

    if (vector[i]%2==0)
    {
       printf("%d\n", vector[i]);
    }
break;

    /* calculo del maximo*/
case'4':
    maximo = vector[0];

    for(i=0;i<TAM;i++)
    {
      if(flag==0 || vector[i]>maximo)
      {
        maximo=vector[i];
        flag=1;
      }
    }
      printf("\nEl maximo es: %d\n y se encontro en las posiciones",maximo,i);
break;

case'5':


     printf("\nIngrese el numero a buscar: ");
     scanf("%d",&numero);

     for(i=0;i<TAM;i++)
     {
      if(vector[i] ==numero)
      {
         printf("\nLa posicion del numero es:%d", i+1);
      }
     }
break;

case '6':
    for(i=0;i<TAM;i++)
     {

      if(vector[i] > 20)
      {
         printf("\n%d", vector[i]);
      }
    }
break;

case '7':
    for(i=0;i<TAM;i++)
     {

if (vector[i]!=0)
      {
        suma = suma + vector[i];
        contIngreso++;
      }
      promedio = calcularPromedio(suma,TAM);
      printf("\nEl promedio es %f", promedio);
    }
break;

case '8':

    printf("Listado en orden dado:\n");
    mostrarVector(vector,TAM);

   /* for(i=0; i<=TAM-1; i++)
    {
       printf("%d\n", vector[i]);
    }*/
break;


case '9':
    opcion = 'n';
break;

}


  system("pause");
  system("cls");

}while(opcion!='n');

return 0;
}

float calcularPromedio(int suma,int cantidad)
{
 float promedio;

 promedio = (float)suma/cantidad;

 return promedio;
}

void mostrarVector(int vector[],int tamanio)

{
int i;
for (i=0; i<tamanio;i++)

{
    if(vector[i]!=0)
       {
           printf("%d", vector[i]);
       }

}


}




