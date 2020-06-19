#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void MenuPrincipal();
int CantidadCartones();

void generarAleatorio(int Cart[5][3],int disp[91]);
void Vaciar(int Vec[91]); // mas seguro que asignar Vec[91] = {0};
void CargarCarton();
#endif // FUNCIONES_H_INCLUDED
