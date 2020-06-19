#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int cantidadCartones = 0;

    printf("\n*****************************************************");
    printf("\n************** Bienvenido al Bingo ******************");
    printf("\n-----------------------------------------------------");
    cantidadCartones = CantidadCartones();
    if(cantidadCartones != 0)
    {
        MenuPrincipal();


    }
    return 0;
}
