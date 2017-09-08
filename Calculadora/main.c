#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"
int main()
{
    float operador1;
    float operador2;
    int opcion;
    char respuesta = 'n';
    char seguir = 's';


    while(seguir == 's')
    {
        printf("1- Ingresar 1er operando\n");
        printf("2- Ingresar 2do operando \n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
            system("cls");

        switch(opcion)
        {
        case 1:
            operador1=ingresarNumero1(operador1);
            break;
        case 2:
            operador2=ingresarNumero2(operador2);
            break;
        case 3:
            sumaNumeros(operador1,operador2);
            break;
        case 4:
            restaNumeros(operador1,operador2);
            break;
        case 5:
            divisionNumeros(operador1,operador2);
            break;
        case 6:
            multiplicarNumeros(operador1,operador2);
            break;
        case 7:
            factorialNumero(operador1);
            //printf("\nEl factorial es: %d\n", respuesta);
            break;
        case 8:
            sumaNumeros(operador1,operador2);
            restaNumeros(operador1,operador2);
            divisionNumeros(operador1,operador2);
            multiplicarNumeros(operador1,operador2);
            factorialNumero(operador1);
            //printf("\nEl factorial es: %d\n", respuesta);
            break;
        case 9:
            seguir=respuesta;
            break;
        }

    }

    return 0;


}
