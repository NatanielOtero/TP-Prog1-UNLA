#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
void generarAleatorio(int Cart[5][3],int disp[91]);
void Vaciar(int Vec[91]); // mas seguro que asignar Vec[91] = {0};
int main()
{
	//Projecto 01
	srand(time(NULL)); // movido de lugar
	int bolilla[91],numero=0; // bolilla es un vector de control unicamente los numeros se generan en numero
	int numerosDisp[91];
	int cartonPrueba[5][3]={0};
	Vaciar(bolilla);
	Vaciar(numerosDisp);
//	generarAleatorio(cartonPrueba,numerosDisp);
	for(int I=0;I<20;I++)
	{
	numero=rand()%91;
	if(bolilla[numero] == 0)
	{
		printf("Salio el Numero ---> %d\n",numero);
		bolilla[numero] = -1;
	}
	}

	return 0;
}
void generarAleatorio(int Cart[5][3],int disp[91])
{
	int numero=0;
	for(int C=0;C<3;C++)
	{
		for(int F=0;F<5;F++)
		{
			numero=rand()%91;
			while(disp == 0)
			{
				numero=rand()%91;	
			}
			if(disp[numero] == 0)
			{
				Cart[F][C]=numero;
				printf(" %d ",numero);
			}
		}
		printf(" \n");
	}
}
void Vaciar(int Vec[91])
{
	for(int I=0;I<91;I++)
	{
		if(I == 0)
		{
			Vec[I] = -1; // el numero 0 no se utiliza en el bingo
		}
		else
		{
			Vec[I] = 0; // vaciado para dejar numeros como disponibles
		}
	}
}
