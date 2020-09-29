/**************************************************************************
1- suma acumulada
2- mayor edad
3- menor edad
4- cantidad de mayores de edad repetida
5- cantidad de menores de edad repetida
6- promedio


***************************************************************************/

#include <stdio.h>
#define TAMANIO 10
#include "funciones.h"


int main()
{

    int edad;
    int edadesArray[TAMANIO]={0,-1,2,4,10,-1,10,0,5,6};
    int i;
    int sumaDeEdades;

    sumaDeEdades=SacarLaSuma(edadesArray, TAMANIO);
    printf("\nLa suma de las edades es: %d", sumaDeEdades);

    /*for (i=0; i<TAMANIO; i++)
    {
        edadesArray[i]=i+3;
    }

    for (i=0; i<TAMANIO; i++)
    {
        //edadesArray [i]=i+3;
        printf ("\nIngrese su edad");
        scanf ("%d", &edadesArray[i]);
    */

    edad = 33;
    printf ("\nLa edad es: %d", edad);

    for (i=0; i<TAMANIO; i++)
    {
        printf ("\nLa edadesArray[%d] es: %d",i, edadesArray[i]);
    }


    return 0;

}








