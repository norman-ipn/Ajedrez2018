#ifndef __TURNOS_H__
#define __TURNOS_H__
#include <stdio.h>
char cambiarTurno (*char);
void ingresarComando (char, char);
void indicarTurno (char);
void moverPiezaIndicada (int, int, int, int);
void mostrarTiempo (int);
void rendirseJugador (char);
void reiniciarPartida();
int convertirColumnaaNumero(char);
#endif
