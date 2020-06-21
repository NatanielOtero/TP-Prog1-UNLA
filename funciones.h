#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
int carton1[5][3];
int carton2[5][3];
int carton3[5][3];
int Disp[91];
int bolilla[91];
int numero;

void colorear(int Matr[5][3],int Dispo[91]);
void Normal(int Cart[5][3],int Comp[91];);
void MenuPrincipal(int estado,int limite);
int CantidadCartones();
void ComenzarJuego();
void Aleatorio(int Cart[5][3],int disp[91]);
void Vaciar(int Vec[91]); // mas seguro que asignar Vec[91] = {0};
void CargarCarton();
#endif // FUNCIONES_H_INCLUDED
