#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
void Escribir(int punt,int dni,char nomb[10],char ape[10]);
void MostrarCarton(int cantidad,int opcion);
void colorear(int Matr[5][3],int Dispo[91]);
void Normal(int Cart[5][3],int Comp[91]);
void MenuPrincipal(int estado,int limite);
int CantidadCartones();
void ComenzarJuego(int limite);
void Aleatorio(int Cart[5][3],int disp[91]);
void Vaciar(int Vec[91]); // mas seguro que asignar Vec[91] = {0};
void CargarCarton();
void RegistrarJugador();
void GenerarCartonMaquina(int estado,int limite);
void Escribir(int punt,int dni,char nomb[10],char ape[10]);
void Leer();

#endif // FUNCIONES_H_INCLUDED
