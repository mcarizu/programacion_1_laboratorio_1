#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int sumar(int num1, int num2);
int restar(int num1, int num2);
int multiplicar(int num1, int num2);
int dividir(int num1, int num2);
int leerNum();
void pedirNum (void);           /*Prototipo de la funciuon - ingreso de variables , con disitintos nombres - retorno de la funcion*/
int pedirYLeerNumero(void);


int main()
{
    int numUno;
    int numDos;
    float resultado;
    char operacion;

    numUno = pedirYLeerNumero();
    printf("ingrese una operacion:\n");
    operacion=getche();
    numDos = pedirYLeerNumero();
    calculo();

    return 0;
}


 int leerNum(void)
{
    int numero1;
    pedirNum();
    scanf("%d",&numero1);
    return numero1;
}
 void pedirNum (void)
{
    printf("ingrese un numero:\n");
}


int pedirYLeerNumero(void)
{
    leerNum();

}
float calculo(int num1,char op,int num2)
{
    float result;
    switch (op){
        case '+': resul= sumar(num1,num2);
                  printf("la suma es:%d",&resul);
            break;
        case '-': resul=restar(num1,num2);
                 printf("la resta es:%d",&resul);
            break;
        case '*': resul=multiplicar(num1,num2);
                 printf("la multiplicacion es:%d",&resul);
        break;
        case '/': resul=dividir(num1,num2);
                 printf("la divicion es:%d",&resul);
            break;
    }
    return result;
}

int sumar(int num1, int num2)
{
    int resultado;

    resultado = num1+num2;

    return resultado;
}
int restar(int num1, int num2)
{
    int resultado;

    resultado = num1-num2;

return resultado;
}
int multiplicar(int num1, int num2)
{
    int resultado;

    resultado = num1*num2;

return resultado;
}
int dividir(int num1, int num2)
{
    int resultado;

    resultado = num1/num2;

return resultado;
}
