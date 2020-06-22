#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int carton1[5][3];
int carton2[5][3];
int carton3[5][3];
int maquina1[5][3];
int maquina2[5][3];
int maquina3[5][3];
char nombreJugador[8];
char apellidoJugador[8];
int dniJugador; 
int Disp[91];
int bolilla[91];
int numero;
//int maquinajugo = 0;

void Escribir(int punt,int dni,char nomb[10],char ape[10]);
void MostrarCarton(int cantidad,int opcion);
void colorear(int Matr[5][3],int Dispo[91]);
void Normal(int Cart[5][3],int Comp[91];);
void MenuPrincipal(int estado,int limite);
int CantidadCartones();
void ComenzarJuego(int limite);
void Aleatorio(int Cart[5][3],int disp[91]);
void Vaciar(int Vec[91]); // mas seguro que asignar Vec[91] = {0};
void CargarCarton();
void RegistrarJugador();
void GenerarCartonMaquina(int estado,int limite);
#endif // FUNCIONES_H_INCLUDED
