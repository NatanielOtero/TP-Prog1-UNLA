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
	printf("\n*****************************************************");
    printf("\n************** Bienvenido al Bingo ******************");
    printf("\n-----------------------------------------------------");
    RegistrarJugador();
    return 0;
}
