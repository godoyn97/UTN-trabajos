#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"
#include <conio.h>

float ingresarNumero1(float x)
{

    printf("\nIngrese el primer numero: \n");
    scanf("%f",&x);
    return x;
}

float ingresarNumero2(float y)
{
    printf("\nIngresar segundo numero: \n");
    scanf("%f",&y);
    return y;
}

float sumaNumeros(float x, float y)
{
    float resultado;

    resultado=x+y;

    printf("\nel resultado es: %2.f\n",resultado);
    //return resultado;
}

float restaNumeros(float x,float y)
{
    float resultado;

    resultado=x-y;

    printf("\nel resultado de la resta es: %2.f\n", resultado);

}

float divisionNumeros(float x, float y)
{
    float resultado;
    while(y==0)
    {
        printf("reingrese el segundo numero, no se puede dividir por 0");
        break;
    }
    resultado=x/y;

    printf("\nEl cociente es: %2.f\n",resultado);
}

float multiplicarNumeros(float x, float y)
{
    float resultado;

    resultado=x*y;

    printf("\nEl producto es: %2.f\n",resultado);
}

int factorialNumero(int x)
{
    int resultado = 1;
    int i;
    for(i=1;i<=x;i++)
    {
        resultado=resultado*i;
    }
    printf("\nEl factorial es: %d\n",resultado);


}
