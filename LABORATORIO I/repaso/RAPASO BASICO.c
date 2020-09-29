/******************************************************************************

Pedir y mostrar, edad, sexo, legajo
edad promedio
cantidad mujeres
cantidad hombre
edad maxima y minima


*******************************************************************************/
#include <stdio.h>

int main()
{
    char sexo;
    int edad;
    int legajo;
    int i;
    int sumaEdades; //acumulador
    float promedioEdades;
    int contadorHombres;
    int contadorMujeres;
    int maximaEdad;
    int minimaEdad;

    sumaEdades=0;
    contadorHombres=0;
    contadorMujeres=0;



    for (i=0;i<2;i++){

        printf ("Ingrese su edad: ");
        scanf ("%d", &edad);
        printf ("Ingrese su sexo con f o m: ");
        fflush(stdin);
        scanf ("%c", &sexo);
        while (sexo!='f'&&sexo!='m'){
            printf ("Error!...Reingrese su sexo con f o m: ");
            fflush(stdin);
            scanf ("%c", &sexo);
        }


        printf("Ingrese su legajo: ");
        scanf ("%d", &legajo);

        sumaEdades += edad;

        if (sexo=='f'){
            contadorMujeres++;
        } else {
            if (sexo=='m'){
                    contadorHombres++;
            }
        }

        /*if (i==0){

            maximaEdad=edad;
            minimaEdad=edad;

        } else{*/
        if (i==0||edad>maximaEdad){

            maximaEdad=edad;
        }
        if (i==0||edad<minimaEdad){

            minimaEdad=edad;
        }
        //}



    }

    promedioEdades = (float)sumaEdades/i; //

    printf ("La edad promedio es: %f\n", promedioEdades);
    printf ("La cantidad de mujeres es: %d\n", contadorMujeres);
    printf ("La cantidad de hombres es: %d\n", contadorHombres);
    printf ("La edad maxima es: %d\n", maximaEdad);
    printf ("La edad minima es: %d\n", minimaEdad);



}
