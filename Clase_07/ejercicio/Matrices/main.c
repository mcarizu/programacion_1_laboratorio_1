#include <stdio.h>
#include <stdlib.h>
#define TAM 5


int buscarLibre(int [],int);
float calcularPromedio(int, int);
void mostrarAlumnos(int[],char [][20],int[],int[],float[],int);
void cargarAlumno(int[],char [][20],int[],int[],float[],int);
int main()
{
   int legajo [TAM]={};
   char nombre[TAM][20];
   int nota1[TAM];
   int nota2[TAM];
   float promedio[TAM];
   int opcion;
   int index;

   do{

    printf("1) Altas\n2) Mostrar\n9)Salir\n\t\tElija una opcion\n");
    scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:printf("altas\n");
                    cargarAlumno(legajo,nombre,nota1,nota2,promedio,TAM);
                    if(index==-1){printf("no hay lugar disponible¡¡¡\n");}
                    else{printf("Alumno Ingresado\n");}
                break;
            case 2:
                    mostrarAlumnos(legajo,nombre,nota1,nota2,promedio,TAM);
                break;

        }
    }while(opcion!=9);
    return 0;
}

int buscarLibre(int legajo[],int tam)
{
    int index=-1;
    int i;
    for(i=0;i<tam;i++)
        {
           if (legajo==0)
           {
             index = i;
             break;

           }
        }
    return index;
}
float calcularPromedio(int nota1, int nota2)
{
    float promedio;
    promedio=(float)nota1+nota2/2;
    return promedio;
}


void mostrarAlumnos(int legajo[],char nombre[][20],int nota1[],int nota2[],float promedio[],int tam)
{
     int i;
            for(i=0;i<tam;i++)
                {
                    if(legajo[i]!=0){
                    printf("Legajo:%d\nNombre :%s\nNota 1:%d \nNota 2:%d\nPromedio :%2.f",legajo[i],nombre[i][20],nota1[i],nota2[i],promedio[i]);
                    }
                }


}
void cargarAlumno(int legajo[],char nombre[][20],int nota1[],int nota2[],float promedio[],int tam)
{
int index=-1;
    index=buscarLibre(legajo,TAM);
                 if(index != -1)
                    {

                     printf("Ingrese Legajo\n");
                     scanf("%d",&legajo[index]);
                     printf("Ingrese Nombre\n");
                     fflush(stdin);
                     scanf("%s",nombre[index]);
                     printf("Ingrese Nota 1\n");
                     scanf("%d",&nota1[index]);
                     printf("Ingrese Nota 2\n");
                     scanf("%d",nota2[index]);
                }
                promedio[index]=calcularPromedio(nota1[index],nota2[index]);

}
