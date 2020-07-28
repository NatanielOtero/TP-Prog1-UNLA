#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "funciones.h"
 

void RegistrarJugador(char nombreJugador[8],char apellidoJugador[8], int dniJugador)
{
	int cantidadCartones = 0;
	printf("\n*****************************************************");
	printf("\n************ Ingrese su nombre **********************");
	printf("\n*****************************************************");
	printf("\n");
	scanf("%s",nombreJugador);
	system("cls");
	fflush(stdin);
	printf("\n*****************************************************");
	printf("\n************ Ingrese su apellido **********************");
	printf("\n*****************************************************");
	printf("\n");
	scanf("%s",apellidoJugador);
	system("cls");
	fflush(stdin);
	printf("\n*****************************************************");
	printf("\n************ Ingrese su DNI *************************");
	printf("\n*****************************************************");
	printf("\n");
	scanf("%d",&dniJugador);
	
	while(dniJugador < 10000000 || dniJugador > 99999999)
	{
		 			system("cls");
	                printf("\n*****************************************************");
	                printf("\n********* DNI invalido intente nuevamente ***********");
	                printf("\n*****************************************************");
	                printf("\n");
	                scanf("%d",&dniJugador);
	}
	system("cls");
	printf("Jugador: %s , %s , DNI: %d",nombreJugador,apellidoJugador,dniJugador);


   
    
}

int aleatorioEntre(int mini, int maxi){

        //mini = 8, maxi = 20

        int resultado = 0;


        resultado  =  mini + rand()%(maxi - mini +1);


        return resultado;

}
int buscarEnMatriz(int m[][RENGLONES][COLUMNAS],int pos,int buscar)
{
	
	int retorno = -1;

        for ( int i = 0; i<RENGLONES; i++){
			for ( int j = 0; j < COLUMNAS;j++)
			{
				 if ( m[pos][i][j]==buscar){ //Lo encontre
	
	                retorno = 0;
	
	            }	
			}
           
        }

       //Bien menos
       // if ( pos == -1){ printf("No lo encontre");}


    return retorno;
	
}
void cargarMatrizAleatoria(int m[][RENGLONES][COLUMNAS],int pos){

	
     int numeroNuevo = 0;
     int resultadoBusqueda = 0 ;
	
	 for ( int i = 0; i<RENGLONES; i++){
			for ( int j = 0; j < COLUMNAS;j++)
				{
				
					do{
			        numeroNuevo = aleatorioEntre(0, 91);
			        resultadoBusqueda = buscarEnMatriz(m,pos,numeroNuevo); //nos da la posicion ---> -1
			        }while(resultadoBusqueda==0);
			
			        m[pos][i][j]= numeroNuevo;
	
	            }	
			}
           
    }
void cargarMatrizManual(int m[][RENGLONES][COLUMNAS],int pos){

     int numeroNuevo = 0;
     int resultadoBusqueda = 0 ;
	
	 for ( int i = 0; i<RENGLONES; i++){
			for ( int j = 0; j < COLUMNAS;j++)
				{
				
					do{
						printf("Ingrese un numero...");
			     		scanf("%d",&numeroNuevo); 
				        resultadoBusqueda = buscarEnMatriz(m,pos,numeroNuevo); //nos da la posicion ---> -1
				        if(resultadoBusqueda == 0)
				        {
				        	printf("Error numero repetido");
						}
			        }while(resultadoBusqueda==0);
			
			        m[pos][i][j] = numeroNuevo;
	
	            }	
			}
           
    }

int CantidadCartones()
{
    int cantidad = 0;
    do{
     printf("\n*****************************************************");
     printf("\n******** Por favor elija el numero de cartones: *****");
     printf("\n**************** 1- Carton **************************");
     printf("\n**************** 2- Cartones ************************");
     printf("\n**************** 3- Cartones ************************");
     printf("\n*****************************************************");
     printf("\n");
     scanf("%d",&cantidad);        
     }      
     while(cantidad > 3 || cantidad < 1);
     return cantidad;
}
void MostrarCarton(int carton[][RENGLONES][COLUMNAS],int cantidad)
{
	       
			
	for (int M=0;M<cantidad;M++)
	{
			for( int F=0;F<RENGLONES;F++)
			{
				for(int C=0;C<COLUMNAS;C++)
				{
					
					printf(" %d ",carton[M][F][C]);
					
				}
				printf(" \n");
			}
			printf(" \n");
				
			
    }		  

	
				
				
		

}
void Escribir(int punt,int dni,char nomb[10],char ape[10])
{
	FILE *archivo = fopen("Puntajes.ear","a");
	if(archivo == NULL)
	{
		perror("error abriendo el archivo");
		
	}
	else
	{
		fprintf(archivo,"%d ",dni);
		fprintf(archivo,"%s ",nomb);
		fprintf(archivo,"%s ",ape);
		fprintf(archivo,"%d ",punt);
			fputc('\n',archivo);
		}
	fclose(archivo);
}

void Leer()
{
	FILE *archivo = fopen("Puntajes.ear","r");
	if(archivo == NULL)
	{
		perror("error abriendo el archivo");
	}
	int c;
	int puntaje;
	int Y;
	int Restar=0;
	int DNI;
	char Nombre[8];
	char Apellido[8];
	printf("*****************************************************\n");
	printf("**************** <Mejores Puntajes> *****************\n");
	printf("*****************************************************\n");
	printf("*    DNI   ** Puntaje **** Nombre y Apellido ********\n");
	printf("*****************************************************\n");
	//while (feof(archivo) == 0)
	while((c=fgetc(archivo)) != EOF)
	{
		
		fscanf(archivo,"%d %s %s %d",&DNI,&Nombre,&Apellido,&puntaje);
		printf("* %1d **%4d     **** %s %s ",DNI,puntaje,Nombre,Apellido);
		
		Restar = (strlen(Nombre)+strlen(Apellido));
		for(Y=0;Y<(16-Restar);Y++)
		{
			printf(" ");
		}
			printf("********");
		printf("\n");
	}
	printf("*****************************************************\n");
	fclose(archivo);
}


