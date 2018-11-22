#ifndef __MOVIMIENTOS_H__
#define __MOVIMIENTOS_H__

#include <stdio.h>
#include "tablero.h"
#include "restricciones.h"

int moverPeon (int *, int *);
int comerPeon (int *, int *);
int moverInicialmentePeon (int *, int *);
int coronar (int *, int);
int hacerJaquePeon (int[8][8]);
int moverTorre (int *, int *);
int comerTorre (int *, int *);
int hacerJaqueTorre (int[8][8]);
int moverCaballo (int *, int *);
int comerCaballo (int *, int *);
int hacerJaqueCaballo (int[8][8]);
void moverAlfil (int *, int *, int, int);
void comerAlfil (int *, int *, int *, int *);
int hacerJaqueAlfil (int, int, int, int, char);
void moverRey (int *, int *, int, int);
void comerRey (int *, int *, int *, int *);
int detectarJaqueRey (int, int, char, int, int, char, int, int, char, int,
		      int, char, int, int, char, int, int, char, int, int,
		      char, int, int, char, int, int, char, int, int, char,
		      int, int, char, int, int, char, int, int, char, int,
		      int, char, int, int, char, int, int, char, int, int,
		      char, int, int, char, int, int, char, int, int, char,
		      int, int, char, int, int, char, int, int, char, int,
		      int, char, int, int, char, int, int, char, int, int,
		      char, int, int, char, int, int, char, int, int, char,
		      int, int, char, int, int, char);
void moverReina (int *, int *, int, int);
void comerReina (int *, int *, int *, int *);
int hacerJaqueReina (int, int, int, int, char);
int enrocar (int, int, int *, int *, int *);

#endif
