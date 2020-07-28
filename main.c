#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "funciones.h"

int main()
{
	char nombreJugador[8];
	char apellidoJugador[8];
	int dniJugador; 
	int cantidadCartones;	
    srand(time(NULL));   
	HANDLE hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsole,10);
	printf("\n*****************************************************");
    printf("\n************** Bienvenido al Bingo ******************");
    printf("\n-----------------------------------------------------");
    RegistrarJugador(nombreJugador,apellidoJugador,dniJugador);     
    cantidadCartones = CantidadCartones();    
    if(cantidadCartones != 0)
    {
    	
        int cartonJugador[cantidadCartones][RENGLONES][COLUMNAS];
        int cartonesMaquina[cantidadCartones][RENGLONES][COLUMNAS];
        for(int i = 0; i < cantidadCartones ; i++)
        {
        	
		    int op;
		      do{
		      	   printf("\n*********************************************");
		           printf("\n** Elija como quiere cargar el carton n%c %d ***",167,i+1);
		           printf("\n*********************************************");
		           printf("\n****** -1- Carton personalizado *************");
		           printf("\n****** -2- Carton Aleatorio *****************");
		           printf("\n*********************************************");
		           printf("\nOpcion: ");
		           scanf("%d",&op);
		           switch(op)
		           {
		
		            case 1:
		                //LLAMAR FUNCION GENERAR POR TECLADO
		                cargarMatrizManual(cartonJugador,i);
		               	break;
		            case 2:
		                //LLAMAR FUNCION GENERAR ALEATORIO
		                cargarMatrizAleatoria(cartonJugador,i);  		
		                break;
		            default:
		                system("cls");
		                printf("\n*****************************************************");
		                printf("\n******** Opcion invalida intente de nuevo ***********");
		                printf("\n*****************************************************");
		                printf("\n");
		            break;
		           }
		        }
		       while(op > 2 || op < 1);
		       
		      
		       
		   }	 
		for(int i = 0; i < cantidadCartones ; i++)
        {
        	
		   
		   cargarMatrizAleatoria(cartonesMaquina,i);
		       
		      
		       
		}
		int OPC;
			system("cls");
    	       	do{
				
	    	   printf("\n*********************************************");
	           printf("\n************** Bienvenido *******************");
	           printf("\n*********************************************");
	           printf("\n****** -1- Mostrar cartones *****************");
	           printf("\n****** -2- Mostrar cartones maquina *********");
	           printf("\n****** -3- Sacar bolilla ********************");
	           printf("\n*********************************************");
	           scanf("%d",&OPC);
	           switch(OPC)
	           {
	           	case 1:
	           			system("cls");
						printf("\n*********************************************");
						printf("\n*************** Cartones Jugador ************");
						printf("\n*********************************************");
						printf("\n");
						MostrarCarton(cartonJugador,cantidadCartones);
	           	break;
	           	case 2:
		           		system("cls");
		           		printf("\n*********************************************");
						printf("\n*************** Cartones Maquina ************");
						printf("\n*********************************************");	
						printf("\n"); 	
						MostrarCarton(cartonesMaquina,cantidadCartones);
	        	break;
	        	case 3:	        		
	        		break;
	        	default:
	        	    system("cls");
	                printf("\n*****************************************************");
	                printf("\n******** Opcion invalida intente de nuevo ***********");
	                printf("\n*****************************************************");
	                printf("\n");
	        	break;
			   }
		   }while(OPC != 3);
	
	
		   
		   
	}		    
   

   
    return 0;
}
