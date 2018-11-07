#include "movimientos.h"

int
moverPeon (int *filaInicialPeon, int *columnaInicialPeon, int filaDestinoPeon,
	   int columnaDestinoPeon, int colorPeon, int filaReyEnemigo,
	   int columnaReyEnemigo)
{
  printf ("Prueba mover peon");
}


int moverCaballo(int* filaInicialCaballo, int* columnaInicialCaballo, int filaDestinoCaballo, int columnaDestinoCaballo, int colorCaballo, int filaReyEnemigo, int columnaReyEnemigo){

}


int comerCaballo(int* filaInicialCaballo, int* columnaInicialCaballo, int filaPiezaAComer, int columnaPiezaAComer, int colorCaballo, int filaReyEnemigo, int columnaReyEnemigo){

}

int hacerJaqueCaballo(int filaInicialCaballo, int columnaInicialCaballo, int colorCaballo, int filaReyEnemigo, int columnaReyEnemigo){

}


void
moverRey (char color, int *ubicacionHorizontal, int *ubicacionVertical,
	  int direccion, int *contadorMovimientoRey, char peon1Blanco,
	  char peon2Blanco, char peon3Blanco, char peon4Blanco,
	  char peon5Blanco, char peon6Blanco, char peon7Blanco,
	  char peon8Blanco, char caballo1Blanco, char caballo2Blanco,
	  char alfil1Blanco, char alfil2Blanco, char torre1Blanco,
	  char torre2Blanco, char reinaBlanco, char reyBlanco,
	  char peon1Negro, char peon2Negro, char peon3Negro, char peon4Negro,
	  char peon5Negro, char peon6Negro, char peon7Negro, char peon8Negro,
	  char caballo1Negro, char caballo2Negro, char alfil1Negro,
	  char alfil2Negro, char torre1Negro, char torre2Negro,
	  char reinaNegro, char reyNegro, int *peonBlanco1Horizontal,
	  int *peonBlanco1Vertical, int *peonBlanco2Horizontal,
	  int *peonBlanco2Vertical, int *peonBlanco3Horizontal,
	  int *peonBlanco3Vertical, int *peonBlanco4Horizontal,
	  int *peonBlanco4Vertical, int *peonBlanco5Horizontal,
	  int *peonBlanco5Vertical, int *peonBlanco6Horizontal,
	  int *peonBlanco6Vertical, int *peonBlanco7Horizontal,
	  int *peonBlanco7Vertical, int *peonBlanco8Horizontal,
	  int *peonBlanco8Vertical, int *caballoBlanco1Horizontal,
	  int *caballoBlanco1Vertical, int *caballoBlanco2Horizontal,
	  int *caballoBlanco2Vertical, int *alfilBlanco1Horizontal,
	  int *alfilBlanco1Vertical, int *alfilBlanco2Horizontal,
	  int *alfilBlanco2Vertical, int *torreBlanco1Horizontal,
	  int *torreBlanco1Vertical, int *torreBlanco2Horizontal,
	  int *torreBlanco2Vertical, int *reinaBlancoHorizontal,
	  int *reinaBlancoVertical, int *reyBlancoHorizontal,
	  int *reyBlancoVertical, int *peonNegro1Horizontal,
	  int *peonNegro1Vertical, int *peonNegro2Horizontal,
	  int *peonNegro2Vertical, int *peonNegro3Horizontal,
	  int *peonNegro3Vertical, int *peonNegro4Horizontal,
	  int *peonNegro4Vertical, int *peonNegro5Horizontal,
	  int *peonNegro5Vertical, int *peonNegro6Horizontal,
	  int *peonNegro6Vertical, int *peonNegro7Horizontal,
	  int *peonNegro7Vertical, int *peonNegro8Horizontal,
	  int *peonNegro8Vertical, int *caballoNegro1Horizontal,
	  int *caballoNegro1Vertical, int *caballoNegro2Horizontal,
	  int *caballoNegro2Vertical, int *alfilNegro1Horizontal,
	  int *alfilNegro1Vertical, int *alfilNegro2Horizontal,
	  int *alfilNegro2Vertical, int *torreNegro1Horizontal,
	  int *torreNegro1Vertical, int *torreNegro2Horizontal,
	  int *torreNegro2Vertical, int *reinaNegroHorizontal,
	  int *reinaNegroVertical, int *reyNegroHorizontal,
	  int *reyNegroVertical)
{
  int movimientoUbicacionHorizontal = (*ubicacionHorizontal);
  int movimientoUbicacionVertical = (*ubicacionVertical);
  int verificarMovimiento;
  switch (direccion)
    {
    case 1:
      movimientoUbicacionHorizontal++;
      movimientoUbicacionVertical++;
      break;
    case 2:
      movimientoUbicacionHorizontal--;
      movimientoUbicacionVertical++;
      break;
    case 3:
      movimientoUbicacionHorizontal++;
      movimientoUbicacionVertical--;
      break;
    case 4:
      movimientoUbicacionHorizontal--;
      movimientoUbicacionVertical--;
      break;
    case 5:
      movimientoUbicacionVertical++;
      break;
    case 6:
      movimientoUbicacionVertical--;
      break;
    case 7:
      movimientoUbicacionHorizontal--;
      break;
    case 8:
      movimientoUbicacionHorizontal++;
      break;
    default:
      printf ("Esta dando una dirección incorrecta\n");
      break;
    }
  verificarMovimiento =
    verificarMovimientoRey (*ubicacionHorizontal, *ubicacionVertical,
			    movimientoUbicacionHorizontal,
			    movimientoUbicacionVertical);
  switch (verificarMovimiento)
    {
    case 1:
      printf ("No se puede reaizar el movimiento\n");
      break;
    case 2:
      *ubicacionHorizontal = movimientoUbicacionHorizontal;
      *ubicacionVertical = movimientoUbicacionVertical;
      *contadorMovimientoRey = 1;
      imprimirTablero (1);
      break;
    case 3:
      *ubicacionHorizontal = movimientoUbicacionHorizontal;
      *ubicacionVertical = movimientoUbicacionVertical;
      *contadorMovimientoRey = 1;
      comerRey (color, *ubicacionHorizontal, *ubicacionVertical,
		peonBlanco1Horizontal, peonBlanco1Vertical, peon1Blanco,
		peonBlanco2Horizontal, peonBlanco2Vertical, peon2Blanco,
		peonBlanco3Horizontal, peonBlanco3Vertical, peon3Blanco,
		peonBlanco4Horizontal, peonBlanco4Vertical, peon4Blanco,
		peonBlanco5Horizontal, peonBlanco5Vertical, peon5Blanco,
		peonBlanco6Horizontal, peonBlanco6Vertical, peon6Blanco,
		peonBlanco7Horizontal, peonBlanco7Vertical, peon7Blanco,
		peonBlanco8Horizontal, peonBlanco8Vertical, peon8Blanco,
		caballoBlanco1Horizontal, caballoBlanco1Vertical,
		caballo1Blanco, caballoBlanco2Horizontal,
		caballoBlanco2Vertical, caballo2Blanco,
		alfilBlanco1Horizontal, alfilBlanco1Vertical, alfil1Blanco,
		alfilBlanco2Horizontal, alfilBlanco2Vertical, alfil2Blanco,
		torreBlanco1Horizontal, torreBlanco1Vertical, torre1Blanco,
		torreBlanco2Horizontal, torreBlanco2Vertical, torre2Blanco,
		reinaBlancoHorizontal, reinaBlancoVertical, reinaBlanco,
		reyBlancoHorizontal, reyBlancoVertical, reyBlanco,
		peonNegro1Horizontal, peonNegro1Vertical, peon1Negro,
		peonNegro2Horizontal, peonNegro2Vertical, peon2Negro,
		peonNegro3Horizontal, peonNegro3Vertical, peon3Negro,
		peonNegro4Horizontal, peonNegro4Vertical, peon4Negro,
		peonNegro5Horizontal, peonNegro5Vertical, peon5Negro,
		peonNegro6Horizontal, peonNegro6Vertical, peon6Negro,
		peonNegro7Horizontal, peonNegro7Vertical, peon7Negro,
		peonNegro8Horizontal, peonNegro8Vertical, peon8Negro,
		caballoNegro1Horizontal, caballoNegro1Vertical, caballo1Negro,
		caballoNegro2Horizontal, caballoNegro2Vertical, caballo2Negro,
		alfilNegro1Horizontal, alfilNegro1Vertical, alfil1Negro,
		alfilNegro2Horizontal, alfilNegro2Vertical, alfil2Negro,
		torreNegro1Horizontal, torreNegro1Vertical, torre1Negro,
		torreNegro2Horizontal, torreNegro2Vertical, torre2Negro,
		reinaNegroHorizontal, reinaNegroVertical, reinaNegro,
		reyNegroHorizontal, reyNegroVertical, reyNegro);
      imprimirTablero (1);
      break;
    }
  detectarJaqueRey (peon1Blanco, peon2Blanco, peon3Blanco, peon4Blanco,
		    peon5Blanco, peon6Blanco, peon7Blanco, peon8Blanco,
		    caballo1Blanco, caballo2Blanco, alfil1Blanco,
		    alfil2Blanco, torre1Blanco, torre2Blanco, reinaBlanco,
		    reyBlanco, peon1Negro, peon2Negro, peon3Negro, peon4Negro,
		    peon5Negro, peon6Negro, peon7Negro, peon8Negro,
		    caballo1Negro, caballo2Negro, alfil1Negro, alfil2Negro,
		    torre1Negro, torre2Negro, reinaNegro, reyNegro,
		    peonBlanco1Horizontal, peonBlanco1Vertical,
		    peonBlanco2Horizontal, peonBlanco2Vertical,
		    peonBlanco3Horizontal, peonBlanco3Vertical,
		    peonBlanco4Horizontal, peonBlanco4Vertical,
		    peonBlanco5Horizontal, peonBlanco5Vertical,
		    peonBlanco6Horizontal, peonBlanco6Vertical,
		    peonBlanco7Horizontal, peonBlanco7Vertical,
		    peonBlanco8Horizontal, peonBlanco8Vertical,
		    caballoBlanco1Horizontal, caballoBlanco1Vertical,
		    caballoBlanco2Horizontal, caballoBlanco2Vertical,
		    alfilBlanco1Horizontal, alfilBlanco1Vertical,
		    alfilBlanco2Horizontal, alfilBlanco2Vertical,
		    torreBlanco1Horizontal, torreBlanco1Vertical,
		    torreBlanco2Horizontal, torreBlanco2Vertical,
		    reinaBlancoHorizontal, reinaBlancoVertical,
		    reyBlancoHorizontal, reyBlancoVertical,
		    peonNegro1Horizontal, peonNegro1Vertical,
		    peonNegro2Horizontal, peonNegro2Vertical,
		    peonNegro3Horizontal, peonNegro3Vertical,
		    peonNegro4Horizontal, peonNegro4Vertical,
		    peonNegro5Horizontal, peonNegro5Vertical,
		    peonNegro6Horizontal, peonNegro6Vertical,
		    peonNegro7Horizontal, peonNegro7Vertical,
		    peonNegro8Horizontal, peonNegro8Vertical,
		    caballoNegro1Horizontal, caballoNegro1Vertical,
		    caballoNegro2Horizontal, caballoNegro2Vertical,
		    alfilNegro1Horizontal, alfilNegro1Vertical,
		    alfilNegro2Horizontal, alfilNegro2Vertical,
		    torreNegro1Horizontal, torreNegro1Vertical,
		    torreNegro2Horizontal, torreNegro2Vertical,
		    reinaNegroHorizontal, reinaNegroVertical,
		    reyNegroHorizontal, reyNegroVertical);
  return;
}

void
enrocar (int contadorMovimientosRey, int contadorMovimientosTorre,
	 int *ubicacionHorizontalRey, int *ubicacionHorizontalTorre)
{
  if (contadorMovimientosRey == 0 && contadorMovimientosTorre == 0)
    {
      if (*ubicacionHorizontalTorre == 1)
	{
	  *ubicacionHorizontalTorre = 3;
	  *ubicacionHorizontalRey = 2;
	}
      if (*ubicacionHorizontalTorre = 8)
	{
	  *ubicacionHorizontalTorre = 6;
	  *ubicacionHorizontalRey = 7;
	}
      imprimirTablero (1);
    }
  else
    {
      printf ("No se puede hacer el enroque\n");
    }
  return;
}
