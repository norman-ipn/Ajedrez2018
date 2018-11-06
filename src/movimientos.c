#include "movimientos.h"

int
moverPeon (int *filaInicialPeon, int *columnaInicialPeon, int filaDestinoPeon,
	   int columnaDestinoPeon, int colorPeon, int filaReyEnemigo,
	   int columnaReyEnemigo)
{
  printf ("Prueba mover peon");
}
void
moverRey (char color = 'a', int *ubicacionHorizontal =
	  0, int *ubicacionVertical = 0, int direccion =
	  0, int *contadorMovimientoRey = 0, char peon1Blanco =
	  'a', char peon2Blanco = 'a', char peon3Blanco =
	  'a', char peon4Blanco = 'a', char peon5Blanco =
	  'a', char peon6Blanco = 'a', char peon7Blanco =
	  'a', char peon8Blanco = 'a', char caballo1Blanco =
	  'a', char caballo2Blanco = 'a', char alfil1Blanco =
	  'a', char alfil2Blanco = 'a', char torre1Blanco =
	  'a', char torre2Blanco = 'a', char reinaBlanco =
	  'a', char reyBlanco = 'a', char peon1Negro = 'a', char peon2Negro =
	  'a', char peon3Negro = 'a', char peon4Negro = 'a', char peon5Negro =
	  'a', char peon6Negro = 'a', char peon7Negro = 'a', char peon8Negro =
	  'a', char caballo1Negro = 'a', char caballo2Negro =
	  'a', char alfil1Negro = 'a', char alfil2Negro =
	  'a', char torre1Negro = 'a', char torre2Negro =
	  'a', char reinaNegro = 'a', char reyNegro =
	  'a', int *peonBlanco1Horizontal = 0, int *peonBlanco1Vertical =
	  0, int *peonBlanco2Horizontal = 0, int *peonBlanco2Vertical =
	  0, int *peonBlanco2Horizontal = 0, int *peonBlanco2Vertical =
	  0, int *peonBlanco3Horizontal = 0, int *peonBlanco3Vertical =
	  0, int *peonBlanco4Horizontal = 0, int *peonBlanco4Vertical =
	  0, int *peonBlanco5Horizontal = 0, int *peonBlanco5Vertical =
	  0, int *peonBlanco6Horizontal = 0, int *peonBlanco6Vertical =
	  0, int *peonBlanco7Horizontal = 0, int *peonBlanco7Vertical =
	  0, int *peonBlanco8Horizontal = 0, int *peonBlanco8Vertical =
	  0, int *caballoBlanco1Horizontal = 0, int *caballoBlanco1Vertical =
	  0, int *caballoBlanco2Vertical = 0, int *alfilBlanco1Horizontal =
	  0, int *alfilBlanco1Vertical = 0, int *alfilBlanco2Horizontal =
	  0, int *alfilBlanco2Vertical = 0, int *torreBlanco1Horizontal =
	  0, int *torreBlanco1Vertical = 0, int *torreBlanco2Horizontal =
	  0, int *torreBlanco2Vertical = 0, int *reinaBlancoHorizontal =
	  0, int *reinaBlancoVertical = 0, int *reyBlancoHorizontal =
	  0, int *reyBlancoVertical = 0, int *peonNegro1Horizontal =
	  0, int *peonNegro1Vertical = 0, int *peonNegro2Horizontal =
	  0, int *peonNegro2Vertical = 0, int *peonNegro2Horizontal =
	  0, int *peonNegro2Vertical = 0, int *peonNegro3Horizontal =
	  0, int *peonNegro3Vertical = 0, int *peonNegro4Horizontal =
	  0, int *peonNegro4Vertical = 0, int *peonNegro5Horizontal =
	  0, int *peonNegro5Vertical = 0, int *peonNegro6Horizontal =
	  0, int *peonNegro6Vertical = 0, int *peonNegro7Horizontal =
	  0, int *peonNegro7Vertical = 0, int *peonNegro8Horizontal =
	  0, int *peonNegro8Vertical = 0, int *caballoNegro1Horizontal =
	  0, int *caballoNegro1Vertical = 0, int *caballoNegro2Vertical =
	  0, int *alfilNegro1Horizontal = 0, int *alfilNegro1Vertical =
	  0, int *alfilNegro2Horizontal = 0, int *alfilNegro2Vertical =
	  0, int *torreNegro1Horizontal = 0, int *torreNegro1Vertical =
	  0, int *torreNegro2Horizontal = 0, int *torreNegro2Vertical =
	  0, int *reinaNegroHorizontal = 0, int *reinaNegroVertical =
	  0, int *reyNegroHorizontal = 0, int *reyNegroVertical = 0)
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
      printf ("Esta dando una dirección incorrecta");
      break;
    }
  verificarMovimiento =
    verificarMovimientoRey (*ubicacionHorizontal, *ubicacionVertical,
			    movimientoUbicacionHorizontal,
			    movimientoUbicacionVertical);
  switch (verificarMovimiento)
    {
    case 1:
      printf ("No se puede reaizar el movimiento");
      break;
    case 2:
      *ubicacionHorizontal = movimientoUbicacionHorizontal;
      *ubicacionVertical = movimientoUbicacionVertical;
      *contadorMovimientoRey = 1;
      ImprimirTablero (1);
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
		reyBlancoHorixontal, reyBlancoVertical, reyBlanco,
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
      ImprimirTablero (1);
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
		    peonBlanco2Horizontal, peonBlanco2Vertical,
		    peonBlanco3Horizontal, peonBlanco3Vertical,
		    peonBlanco4Horizontal, peonBlanco4Vertical,
		    peonBlanco5Horizontal, peonBlanco5Vertical,
		    peonBlanco6Horizontal, peonBlanco6Vertical,
		    peonBlanco7Horizontal, peonBlanco7Vertical,
		    peonBlanco8Horizontal, peonBlanco8Vertical,
		    caballoBlanco1Horizontal, caballoBlanco1Vertical,
		    caballoBlanco2Vertical, alfilBlanco1Horizontal,
		    alfilBlanco1Vertical, alfilBlanco2Horizontal,
		    alfilBlanco2Vertical, torreBlanco1Horizontal,
		    torreBlanco1Vertical, torreBlanco2Horizontal,
		    torreBlanco2Vertical, reinaBlancoHorizontal,
		    reinaBlancoVertical, reyBlancoHorizontal,
		    reyBlancoVertical, peonNegro1Horizontal,
		    peonNegro1Vertical, peonNegro2Horizontal,
		    peonNegro2Vertical, peonNegro2Horizontal,
		    peonNegro2Vertical, peonNegro3Horizontal,
		    peonNegro3Vertical, peonNegro4Horizontal,
		    peonNegro4Vertical, peonNegro5Horizontal,
		    peonNegro5Vertical, peonNegro6Horizontal,
		    peonNegro6Vertical, peonNegro7Horizontal,
		    peonNegro7Vertical, peonNegro8Horizontal,
		    peonNegro8Vertical, caballoNegro1Horizontal,
		    caballoNegro1Vertical, caballoNegro2Vertical,
		    alfilNegro1Horizontal, alfilNegro1Vertical,
		    alfilNegro2Horizontal, alfilNegro2Vertical,
		    torreNegro1Horizontal, torreNegro1Vertical,
		    torreNegro2Horizontal, torreNegro2Vertical,
		    reinaNegroHorizontal, reinaNegroVertical,
		    reyNegroHorizontal, reyNegroVertical);
  return;
}
