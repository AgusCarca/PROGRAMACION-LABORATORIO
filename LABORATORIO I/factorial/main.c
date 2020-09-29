#include <stdio.h>
#include <stdlib.h>

int CalcularFactorial();

int main()
{
    int resultado;
    resultado = CalcularFactorial(5);
    printf ("El factorial es: %d", resultado);

    return 0;
}

int CalcularFactorial (int numero)
{
    int resultado;

    if (numero==0){
            resultado = 1;

    } else {
        resultado = numero*CalcularFactorial(numero-1);
    }




    return resultado;
}
