#ifndef __FINALIZAR_H__
#define __FINALIZAR_H__
#include <stdio.h>
#include "movimientos.h"
#include "restricciones.h"

int validarPiezasInsuficientes (int[][]);

int validarJaqueMate (int[][], int, int, char);

int validarMovimientosLimite (int);

int validarTablasAhogado (int[][], int, int, char);

#endif
