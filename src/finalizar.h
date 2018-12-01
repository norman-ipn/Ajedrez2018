#ifndef __FINALIZAR_H__
#define __FINALIZAR_H__
#include <stdio.h>
#include "movimientos.h"
#include "restricciones.h"

int validarPiezasInsuficientes (int[8][8]);

int validarJaqueMate (int[8][8], int, int, char);

int validarMovimientosLimite (int);

int validarTablasAhogado (int[8][8], int, int, char);

#endif
