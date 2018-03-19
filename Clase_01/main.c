#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()/* Punto de entrada, Funcion Principal*/
{
    /*
        Int = Enteros 4 bytes (%d)
        Float = Números decimales 4 bytes (%f)
        Char = Caracter    1 byte (%c)
    */
    int numero1 = 8;
    float numero2 =6.76;
    int numero3;
    int numero4 = 19;
    char letra;
    char letra2 = 'a';
    char letra3;

    printf("ingrese una letra:");
    fflush(stdin);                  /*Limpia el buffer*/
    scanf("%c", &letra);
    printf("La letra es %c\n",letra);
    printf("La letra 2 es %c\n",letra2);
    printf("letra 3:");
    letra3 = toupper(getche()); /* No pide limpieza de buffer*/
    //latra3= toupper(letra3);




    printf("\ningrese un valor\n");
    scanf("%d",&numero3);
    printf("La variable Numero 1: %d\nLa variable Numero 2: %.2f\nLa variable Numero 3: %d\n", numero1,numero2,numero3);
    numero3 = numero1 + numero4;
    printf("La suma es %d:",numero3);
    printf("\nSUMA %.2f\n", numero4+numero2);
    return 0;
}
