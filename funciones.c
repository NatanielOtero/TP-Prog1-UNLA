#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include "funciones.h"


void MenuPrincipal(int estado,int limite)
{
    system("cls");
    if (estado <limite)
    {
    int op;
      do{
      	   printf("\n*********************************************");
           printf("\n******** Elija el modo de juego *************");
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
        ComenzarJuego();
    }
}

void ComenzarJuego()
{
	int OPC=0;
    	system("cls");
    	   printf("\n*********************************************");
           printf("\n******** Bienvenido elija acciones **********");
           printf("\n*********************************************");
           printf("\n****** -1- Mostrar cartones *****************");
           printf("\n****** -2- Sacar Bolila *********************");
           printf("\n*********************************************");
           scanf("%d",&OPC);
           switch(OPC)
           {
           	case 1:
           		//FUNCION MOSTRAR CARTONES
           	break;
           	case 2:
           		//FUNCION CARGAR BOLILLAS
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
				printf(" %d ",numero);
			}
		}
		printf(" \n");
	}
	getch();
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
