#ifndef __TURNOS_H__
#define __TURNOS_H__
#include <stdio.h>
void cambiarTurno (char *);
void ingresarComando (char *, char);
void indicarTurno (char);
int moverPiezaIndicada (int, int, int, int, char);
int convertirColumnaaNumero(char);
void mostrarTiempo (int);
void rendirseJugador (char *);
void reiniciarPartida();

#endif
