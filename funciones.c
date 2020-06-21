#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include "funciones.h"


void MenuPrincipal(int estado,int limite)
{
    system("cls");
    if (estado <limite)
    {
    int op;
      do{
      	   printf("\n*********************************************");
           printf("\n** Elija como quiere cargar el carton n%c %d ***",167,estado+1);
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
                switch(estado)
                    {

                    case 0:
                        Vaciar(Disp);
                        Normal(carton1,Disp);
                        Vaciar(Disp);
                        estado++;
                        MenuPrincipal(estado,limite);
                    break;

                    case 1:
                        Vaciar(Disp);
                        Normal(carton2,Disp);
                        Vaciar(Disp);
                        estado++;
                        MenuPrincipal(estado,limite);
                    break;

                    case 2:
                        Vaciar(Disp);
                        Normal(carton3,Disp);
                        Vaciar(Disp);
                        estado++;
                        MenuPrincipal(estado,limite);
                    break;

                    default:
                        printf("---->ERROR<----");
                    break;
                    }
                break;
            case 2:
                //LLAMAR FUNCION GENERAR ALEATORIO
                    switch(estado)
                    {

                    case 0:
                        Aleatorio(carton1,Disp);
                        Vaciar(Disp);
                        estado++;
                        MenuPrincipal(estado,limite);
                    break;

                    case 1:
                        Aleatorio(carton2,Disp);
                        Vaciar(Disp);
                        estado++;
                        MenuPrincipal(estado,limite);
                    break;

                    case 2:
                        Aleatorio(carton3,Disp);
                        Vaciar(Disp);
                        estado++;
                        MenuPrincipal(estado,limite);
                    break;

                    default:
                        printf("---->ERROR<----");
                    break;
                    }



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
    else
    {
        ComenzarJuego(limite);
    }
}

///Recibe la cantidad de cartones en juego para saber cuantos tiene que mostrar la opcion representa 1 para jugador 2 para maquina
void MostrarCarton(int cantidad,int opcion)
{
	
	int C = 0;
	int F = 0;
		if(opcion == 1)
		{
				printf("\n*********************************************");
				printf("\n*************** Cartones ********************");
				printf("\n*********************************************");
					printf(" \n");
					printf(" \n");	          
			
			   switch(cantidad)
			   {
			   	case 1:
			   		//Muestro carton 1
			   		printf("ejemplo 1");
			   		break;
			   	case 2:
			   		// Muestro carton 1 y 2
			   		printf("ejemplo 2");
			   		break;
			   	case 3:
			   		// Muestro carton 1,2,3
			   		for(C=0;C<3;C++)
					{
						for(F=0;F<5;F++)
						{
			
								printf(" %d ",carton1[F][C]);
			
						}
						printf(" \n");
			
					}
					printf(" \n");
					printf(" \n");
					for(C=0;C<3;C++)
					{
						for(F=0;F<5;F++)
						{
			
								printf(" %d ",carton2[F][C]);
			
						}
						printf(" \n");
			
					}
					printf(" \n");
					printf(" \n");
					for(C=0;C<3;C++)
					{
						for(F=0;F<5;F++)
						{
			
								printf(" %d ",carton3[F][C]);
			
						}
						printf(" \n");
			
					}
			   		break;
			   } 
		}
		else
		{
			if(opcion == 2)
			{
				printf("\n*********************************************");
				printf("\n*************** Maquina ********************");
				printf("\n*********************************************");
					printf(" \n");
					printf(" \n");	          
			
			   switch(cantidad)
			   {
			   	case 1:
			   		//Muestro carton 1
			   		printf("ejemplo 1");
			   		break;
			   	case 2:
			   		// Muestro carton 1 y 2
			   		printf("ejemplo 2");
			   		break;
			   	case 3:
			   		// Muestro carton 1,2,3
			   		for(C=0;C<3;C++)
					{
						for(F=0;F<5;F++)
						{
			
								printf(" %d ",maquina1[F][C]);
			
						}
						printf(" \n");
			
					}
					printf(" \n");
					printf(" \n");
					for(C=0;C<3;C++)
					{
						for(F=0;F<5;F++)
						{
			
								printf(" %d ",maquina2[F][C]);
			
						}
						printf(" \n");
			
					}
					printf(" \n");
					printf(" \n");
					for(C=0;C<3;C++)
					{
						for(F=0;F<5;F++)
						{
			
								printf(" %d ",maquina3[F][C]);
			
						}
						printf(" \n");
			
					}
			   		break;
			   } 	
			}
		}

}

void ComenzarJuego(int limite)
{
	int OPC=0;
    	system("cls");
    	       	do{

	    	   printf("\n*********************************************");
	           printf("\n******** Bienvenido elija acciones **********");
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
	           		MostrarCarton(limite,1);
	           	break;
	           	case 2:
	           		GenerarCartonMaquina(0,limite);	           	
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
         switch(cantidad)
         {
               case 1:
                return cantidad;
               case 2:
                return cantidad;
               case 3:
                return cantidad;
              default:
                system("cls");
                printf("\n*****************************************************");
                printf("\n******** OPCION INVALIDA INGRESE OTRO NUMERO ********");
                printf("\n*****************************************************");
                getch();
                system("cls");
                break;
         }
      }
     while(cantidad > 3 || cantidad < 1);
     return 0;
}

void Normal(int Cart[5][3],int Comp[91])
{
    Vaciar(Comp);
    int numero=0;
    int faltante=16;
    int C=0,F=0;
    for(C=0;C<3;C++)
	{
		for(F=0;F<5;F++)
		{
         faltante--;
         system("cls");
         printf("\n*****************************************************");
         printf("\n***** Bienvenido a la carga manual de cartones ******");
         printf("\n******* Cargando Fila %2d... *************************",(C+1));
         printf("\n******* Falta Cargar %2d espacios todavia ************",faltante);
         printf("\n*****************************************************");
         printf("\n*** Ingrese un numero para el siguiente espacio *****");
         printf("\n*****************************************************\n");

         scanf("%d",&numero);
         while(numero > 90 || numero <= 0)
         {
          		system("cls");
                printf("\n*****************************************************");
                printf("\n******* ERROR NUMERO INVALIDO ***********************");
                printf("\n******* Ingrese un numero desde 1 a 90 **************");
				printf("\n******* Cargando Fila %2d... *************************",(C+1));
		        printf("\n******* Falta Cargar %2d espacios todavia ************",faltante);
		        printf("\n*****************************************************");
		        printf("\n*** Ingrese un numero para el siguiente espacio *****");
		        printf("\n*****************************************************\n");
				scanf("%d",&numero);	
		 }
         printf("%d",numero);
         if(Comp[numero] == 0)
         {
            Cart[F][C]=numero;
            Comp[numero] = -1;
         }
         else
         {
                F--;
                faltante++;
                system("cls");
                printf("\n*****************************************************");
                printf("\n*************** ERROR NUMERO REPETIDO ***************");
                printf("\n*****************************************************");
                getch();
                system("cls");
         }


        }

	}
}

void Aleatorio(int Cart[5][3],int disp[91])
{
	int numero=0;
	int C=0,F=0;
	for(C=0;C<3;C++)
	{
		for(F=0;F<5;F++)
		{
            numero=rand()%91;
			while(disp[numero] != 0)
			{
				numero=rand()%91;
			}
			if(disp[numero] == 0)
			{
				Cart[F][C]=numero;
				disp[numero] = -1;
				//printf(" %d ",numero);
			}
		}
		//printf(" \n");
	}
	//getch();
}
void Vaciar(int Vec[91])
{
	int I=0;
	for(I=0;I<91;I++)
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
void GenerarCartonMaquina(int estado,int limite)
{	
	
	system("cls");
	if(maquinajugo == 0)
	{
			if (estado < limite)    {
	
	        switch(estado)
	         {
	            case 0:
	            Aleatorio(maquina1,Disp);
	            Vaciar(Disp);
	            estado++;
	            GenerarCartonMaquina(estado,limite);
	            break;
				case 1:
	            Aleatorio(maquina2,Disp);
	            Vaciar(Disp);
	            estado++;
	            GenerarCartonMaquina(estado,limite);
	            break;
				case 2:
	            Aleatorio(maquina3,Disp);
	            Vaciar(Disp);
	            estado++;
	            GenerarCartonMaquina(estado,limite);
	            break;                                   
	            default:
	                system("cls");
	                printf("\n*****************************************************");
	                printf("\n******** Error inesperado ***************************");
	                printf("\n*****************************************************");
	                printf("\n");
	            break; 
			}
	       
	    }
	    else
	    {	
	    	maquinajugo = 1;
	        MostrarCarton(limite,2);
	    }	
	}
	else
	{
		MostrarCarton(limite,2);
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
