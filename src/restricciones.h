#ifndef __RESTRICCIONES_H__
#define __RESTRICCIONES_H__

#include <stdio.h>

int verificarDestinoDesocupado (int, int);
int verificarMovimientoTorre (int[8][8], int, int, int, int);
int verificarMovimientoRey (int[8][8], int, int, int, int);
int verificarMovimientoReina (int[8][8], int, int, int, int);
int verificarMovimientoAlfil (int, int, int, int);
int verificarMovimientoCaballo (int, int, int, int);
int verificarMovimientoPeon (int[8][8], int, int, int, int);

#endif
