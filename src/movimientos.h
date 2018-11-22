#ifndef __MOVIMIENTOS_H__
#define __MOVIMIENTOS_H__

#include <stdio.h>
#include "tablero.h"
#include "restricciones.h"

void moverPeon (int *, int *);
void comerPeon (int *, int *);
void moverInicialmentePeon (int *, int *);
void coronar (int *, int);
int hacerJaquePeon (int, int, int, int);
void moverTorre (int *, int *);
void comerTorre (int *, int *);
int hacerJaqueTorre (int[8][8], int, int, int, int);
void moverCaballo (int *, int *);
void comerCaballo (int *, int *);
int hacerJaqueCaballo (int, int, int, int);
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
