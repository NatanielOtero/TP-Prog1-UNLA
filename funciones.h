#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
void MostrarCarton(int cantidad,int opcion); // OK
void Normal(int Cart[5][3],int Comp[91]); // OK
void MenuPrincipal(int estado,int limite); // OK
int CantidadCartones(); //OK
void ComenzarJuego(int limite); // OK
void Aleatorio(int Cart[5][3],int disp[91]); // OK
void Vaciar(int Vec[91]); // mas seguro que asignar Vec[91] = {0}; OK
void GenerarCartonMaquina(int estado,int limite); // OK
void RegistrarJugador(); //OK
void Escribir(int punt,int dni,char nomb[8],char ape[8]); //OK
void Leer(); //OK
int Sacar(int Bolita[91]); //OK
#endif
