#ifndef __MOVIMIENTOS_H__
#define __MOVIMIENTOS_H__

#include <stdio.h>
#include "tablero.h"
#include "restricciones.h"

int moverPeon (int *, int *, int, int, char, int, int);
int comerPeon (int *, int *, int, int, char, int, int);
int moverInicialmentePeon (int *, int *, int, int, char);
int coronar (int, int *, int, int);
int hacerJaquePeon (int, int, char, int, int);
int moverTorre (int *, int *, int, int);
int comerTorre (int *, int *, int, int, int, int);
int hacerJaqueTorre (int, int, int, int);
int moverCaballo (int *, int *, int, int, int, int, int);
int comerCaballo (int *, int *, int, int, int, int, int);
int hacerJaqueCaballo (int, int, int, int, int);
int moverAlfil (int *, int *, int, int, int *);
void comerAlfil (char, int, int, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char);
int hacerJaqueAlfil (char, int, int, int, int);
int moverRey (int *, int *, int, int, int *, int *);
void comerRey (char, int, int, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char, int *,
	       int *, char, int *, int *, char, int *, int *, char);
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
int moverReina (int *, int *, int, int, int *);
void comerReina (char, int, int, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char,
		 int *, int *, char, int *, int *, char, int *, int *, char);
int hacerJaqueReina (char, int, int, int, int);
int enrocar (int, int, int *, int *, int *);

#endif
