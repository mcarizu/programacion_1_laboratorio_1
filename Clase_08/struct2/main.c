#include <stdio.h>
#include <stdlib.h>
#define LONG 30
#define TAM 10

typedef struct
{
    /*campos*/
int legajo;
char nombre [LONG];
int nota1;
int nota2;
float promedio;
char email [50];

}eAlumno; /*Nombre de la struct*/

void mostrarAlumno(eAlumno);
void func(char *,char );
float calcularPromedio(char [],int,int);

int main()
{
    int i;
    //printf("%d",sizeof(eAlumno));                                     /* sizeof muestra el tamaño de los datos*/
     eAlumno miAlumno;
     eAlumno miAlumno2 = {30,"Juan",10,6,8,"jmecon@mecon.gob.ar"};         /*definicion por extencion*/
     eAlumno otroAlumno;                                                /*eAlumno es el tipo de dato miAlumno*/
     eAlumno listadoDeAlumno[TAM];




    miAlumno.legajo=20;
    miAlumno.nota1=10;
    miAlumno.nota2=5;
    strcpy(miAlumno.nombre,"Matias");  /*harcoding datos*/
    miAlumno.promedio=(float)(miAlumno.nota1+miAlumno.nota2)/2;
    strcpy(miAlumno.email,"mcarizu@mecon.gob.ar");
    otroAlumno=miAlumno;

    char letra1='A';
    char letra2='C';

    func(&letra1, letra2);
    mostrarAlumno(miAlumno);
            mostrarAlumno(otroAlumno);

    for(i=0;i<TAM;i++)
        {



            printf("Ingrese Legajo");
            scanf("%d",&listadoDeAlumno[i].legajo);


            printf("Ingrese NNombre");
            gets(listadoDeAlumno[i].nombre);


            printf("Ingrese Nota 1");
            scanf("%d",&listadoDeAlumno[i].nota1);


            printf("Ingrese Nota2");
            scanf("%d",&listadoDeAlumno[i].nota2);


            printf("Ingrese mail");
            fflush(stdin);
            gets(&listadoDeAlumno[i].email);
            listadoDeAlumno.promedio=calcularPromedio(listadoDeAlumno[i],listadoDeAlumno.nota1,listadoDeAlumno.nota2);

        }
        mostrarAlumno(listadoDeAlumno, TAM);

   return 0;
}
void mostrarAlumno(eAlumno, Alumnito, Alumno2)
{

   // printf("  %d\t  %s\t  %d\t  %d\t  %f\t  %s\t\n",Alumnito.legajo,Alumnito.nombre, Alumnito.nota1, Alumnito.nota2, Alumnito.promedio,Alumnito.email);
   // printf("  %d\t  %s\t  %d\t  %d\t  %f\t  %s\t\n",Alumno2.legajo , Alumno2.nombre, Alumno2.nota1, miAlumno2.nota2, Alumno2.promedio, Alumno2.email);

}
float calcularPromedio(eAlumno, int nota1, int nota2){

    promedio=(float)nota1+nota2/2;
    return promedio;

}

void func(char * p, char q){

 *p='D';
  q='C';
    printf=("%s\n %s\n ",&p,q);

}
void mostrarListadoDeAlumnos(eAlumno lista[],int cantidad)
{

    int i;
    for(i=0;i<cantidad;i++)
    {
        mostrarAlumno(lista[i]);
    }

}
