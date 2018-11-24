#ifndef __MOVIMIENTOS_H__
#define __MOVIMIENTOS_H__

void moverPeon (int *, int *);
void comerPeon (int *, int *);
void moverInicialmentePeon (int *, int *);
void coronar (int *, int);
int hacerJaquePeon (int[8][8], int, int, int, int);
void moverTorre (int *, int *);
void comerTorre (int *, int *);
int hacerJaqueTorre (int[8][8], int, int, int, int);
void moverCaballo (int *, int *);
void comerCaballo (int *, int *);
int hacerJaqueCaballo (int[8][8], int, int, int, int);
void moverAlfil (int *, int *);
void comerAlfil (int *, int *);
int hacerJaqueAlfil (int, int, int, int, int);
void moverRey (int *, int *);
void comerRey (int *, int *);
int detectarJaqueRey (int);
void moverReina (int *, int *);
void comerReina (int *, int *);
int hacerJaqueReina (int, int, int, int, int);
int enrocar (int *, int);

#endif
