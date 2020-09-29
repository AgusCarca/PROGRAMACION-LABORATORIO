#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int sumarNumeros (int, int);

int main()
{
    int resultado;
    int primerNumero;
    int segundoNumero;

    resultado=SumarNumeros (7,9);
    printf ("El resultado es: %d\n", resultado);

    printf("Ingrese un numero: ");
    scanf ("%d", &primerNumero);

    printf("Ingrese otro numero: ");
    scanf ("%d", &segundoNumero);

    resultado= SumarNumeros(primerNumero, segundoNumero);
    printf("El resultado es: %d\n", resultado);

}

int SumarNumeros (int primerNumero, int segundoNumero)
{
    int resultado;
    resultado= primerNumero+segundoNumero;;
    return resultado;
}
