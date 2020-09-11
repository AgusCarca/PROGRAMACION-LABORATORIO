#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char palabra [15];
    int len;
    printf ("Ingrese un mensaje: ");
    //scanf ("%s", palabra);
    fgets(palabra, 15, stdin);
    len = strlen(palabra);
    /*char otraPalabra [10]="Gato";
    int comp;
    comp = strcmp(palabra, otraPalabra); //DEVUELVE 0 SI LAS CADENAS SON IGUALES

    printf ("%d\n", comp)

    //strcpy (otraPalabra, palabra);
    //strcpy (palabra, "Gato");

    /*int len;
    len = strlen ("El sol");
    */

    puts(palabra);
    printf ("%d", len);
    //printf ("len: %d", len);

    return 0;
}
