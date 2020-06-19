#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	//Projecto 01
	int bolilla[91]={0},numero=0;
	srand(time(NULL));
	for(int I=0;I<20;I++)
	{
	numero=rand()%91;
	if(bolilla[numero] == 0)
	{
		printf("numero nuevo no repetido = %d\n",numero);
		bolilla[numero] = -1;
	}
	else if(bolilla[numero] == -1)
	{
		printf("numero repetido error ----> %d\n",numero);
	}
	}

	
}
