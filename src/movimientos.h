#ifndef __MOVIMIENTOS_H__
#define __MOVIMIENTOS_H__
#include <stdio.h>
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
void moverRey (char, int *, int *, int);
void comerRey (char, int, int);
void detectarJaqueRey ();
void moverReina (char, int *, int *, int, int);
void comerReina (char, int, int);
void hacerJaqueReina (int, int, int, int);

#endif
