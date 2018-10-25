#ifndef __MOVIMIENTOS_H__
#define __MOVIMIENTOS_H__
#include <stdio.h>
int moverPeon (int* , int* , int , int , int , int , int );
int comerPeon (int* , int* , int , int , int , int , int );
int moverInicialmentePeon(int* , int*, int , int , int , int , int );
int validarMovimientoPeon ( int* , int* , int , int , int );
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
