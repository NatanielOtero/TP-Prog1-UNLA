#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int cantidadCartones = 0;
    int carton1[5][3],carton2[5][3],carton3[5][3];
    int estado=0;// variable de estado cargados 0 ninguno cargado 1 2 y 3 seria la cantida de cartones cargados
    // cargar en orden ejemplo si el estado es 0 no hay ninguno cargado
    // si el estado es 1 se cargo el carton 1 y el 2 y 3 estan vacios y asi sucesivamente;
	//Angel se la come.
    printf("\n*****************************************************");
    printf("\n************** Bienvenido al Bingo ******************");
    printf("\n-----------------------------------------------------");
    cantidadCartones = CantidadCartones();
    if(cantidadCartones != 0)
    {
        MenuPrincipal(estado,limite);
    }
    return 0;
}
