#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int carton1[5][3];
int carton2[5][3];
int carton3[5][3];
int Disp[91];
int bolilla[91];
int numero;

void MenuPrincipal(int estado,int limite);
int CantidadCartones();

void Aleatorio(int Cart[5][3],int disp[91]);
void Vaciar(int Vec[91]); // mas seguro que asignar Vec[91] = {0};
void CargarCarton();
#endif // FUNCIONES_H_INCLUDED
