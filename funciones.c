#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "funciones.h"
int carton1[5][3];
int carton2[5][3];
int carton3[5][3];
int maquina1[5][3];
int maquina2[5][3];
int maquina3[5][3];
int Disp[91];
int bolilla[91];
int numero;
int maquinajugo = 0;
char nombreJugador[8];
char apellidoJugador[8];
int dniJugador; 

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
    	GenerarCartonMaquina(0,limite);
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
	           		system("cls");
	           		MostrarCarton(limite,2);  	
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
	
	if (estado < limite){
	
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
	/*else
	{
		MostrarCarton(limite,2);
	}*/
    
}
void RegistrarJugador()
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


    int estado=0;// variable de estado cargados 0 ninguno cargado 1 2 y 3 seria la cantida de cartones cargados
    // cargar en orden ejemplo si el estado es 0 no hay ninguno cargado
    // si el estado es 1 se cargo el carton 1 y el 2 y 3 estan vacios y asi sucesivamente;

   
    
    cantidadCartones = CantidadCartones();
    if(cantidadCartones != 0)
    {
        MenuPrincipal(estado,cantidadCartones);
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

void leer()
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
