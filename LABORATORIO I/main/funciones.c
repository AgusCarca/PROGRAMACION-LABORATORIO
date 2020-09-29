#include "funciones.h"

int SacarLaSuma(int unArray[], int cantidad)
{
    int retornoSuma=0;
    int i;
    for(i=0; i<cantidad;i++)
    {
        retornoSuma=retornoSuma+unArray[i];
    }
    return retornoSuma;
}
