#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "funciones.h"

int main()
{
    srand(time(NULL));
    int cantidadCartones = 0;
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsole,10);


    int estado=0;// variable de estado cargados 0 ninguno cargado 1 2 y 3 seria la cantida de cartones cargados
    // cargar en orden ejemplo si el estado es 0 no hay ninguno cargado
    // si el estado es 1 se cargo el carton 1 y el 2 y 3 estan vacios y asi sucesivamente;

    printf("\n*****************************************************");
    printf("\n************** Bienvenido al Bingo ******************");
    printf("\n-----------------------------------------------------");
    cantidadCartones = CantidadCartones();
    if(cantidadCartones != 0)
    {
        MenuPrincipal(estado,cantidadCartones);
    }
    return 0;
}
