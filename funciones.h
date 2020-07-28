#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#define RENGLONES 3
#define COLUMNAS 5


int aleatorioEntre(int mini, int maxi);
int buscarEnMatriz(int m[][RENGLONES][COLUMNAS],int pos, int buscar);
void cargarMatrizAleatoria(int m[][RENGLONES][COLUMNAS],int pos);
void cargarMatrizManual(int m[][RENGLONES][COLUMNAS],int pos);
void MostrarCarton(int carton[][RENGLONES][COLUMNAS],int cantidad);
void RegistrarJugador(char nombreJugador[8],char apellidoJugador[8], int dniJugador);
int CantidadCartones();
void Vaciar(int Vec[91]);
void cartonesMaquina(int cantidad);
void Escribir(int punt,int dni,char nomb[10],char ape[10]);
void Leer();
#endif // FUNCIONES_H_INCLUDED
