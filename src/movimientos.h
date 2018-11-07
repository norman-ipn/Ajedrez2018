#ifndef __MOVIMIENTOS_H__
#define __MOVIMIENTOS_H__

#include <stdio.h>
#include "tablero.h"
#include "restricciones.h"

int moverPeon (int *, int *, int, int, int, int, int);
int comerPeon (int *, int *, int, int, int, int, int); 
int moverInicialmentePeon (int *, int *, int, int, int, int, int);
int coronar (int, int *, int, int);
int hacerJaquePeon (int, int, int, int, int);
int moverTorre (int *, int *, int, int, int, int, int);
int comerTorre (int *, int *, int, int, int, int, int);
int hacerJaqueTorre (int, int, int, int, int);
int moverCaballo (int *, int *, int, int, int, int, int);
int comerCaballo (int *, int *, int, int, int, int, int);
int hacerJaqueCaballo (int, int, int, int, int);
void moverAlfil (char, int *, int *, int , int );
void comerAlfil (char, int, int);
void hacerJaqueAlfil (int, int, int, int);
void moverRey (char, int *, int *, int, int *, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, char, int *,  int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *, int *);
void comerRey (char, int, int, int *, int *, char,  int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char, int *, int *, char);
void detectarJaqueRey ();
void moverReina (char, int *, int *, int, int);
void comerReina (char, int, int);
void hacerJaqueReina (int, int, int, int);

#endif
