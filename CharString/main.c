#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char String(char );
int main()
{
    char texto;
    String(texto);
    return 0;
}




char String(char a)
{
 char palabra[100];
 char palabra2[100]="hola Mama";
 int cantidad;
 int comparar;
 char copiar;
                                                            // palabra='Juan'; No se puede asignar , el string no es un tipo de dato
    printf("ingrese una palabra\n");
    fflush(stdin);                                          /*  Limpia el buffer */
    //scanf("%s",&palabra);                                 /* Muestra el string hasta el \0*/
    gets(palabra);                                           /*Lee el string, Entero Por ejemplo Nombre y Apellido*/
    printf("\nLa palabra es: %s\n",palabra);
    printf("\nLa palabra 2 es: %s\n",palabra2);
    cantidad = strlen(palabra);
    printf("\nLa cantidad es es: %d\n",cantidad);
    comparar=strcmp(palabra,palabra2);
    printf("\nLa cantidad es: %d\n",comparar);
    printf("\nPalabra Origen:%s\nPalabra Destino:%s\n",palabra,palabra2);
    strcpy(palabra,palabra2);
    printf("\nPalabra Origen:%s\nPalabra Destino:%s\n",palabra,palabra2);
    strcat(palabra2,palabra);
    puts(palabra2);/*mostrar cadena*/
    printf("\nPalabra :%s\nPalabra 2:%s\n",palabra,palabra2);
    return 0;


}
/*Actividad
    Nombre ="Juan" No se toca
    Apellido="Gomez" No se toca

    apellido y Nombre ="Gomez, Juan" Las Primeras Letras deben de estar en mayuscula"
    strlwr
    strupr

*/
