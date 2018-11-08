#include "Tablero.h"
void
imprimirTablero (int peonBlanco1Columna, int peonBlanco2Columna,
		 int peonBlanco3Columna, int peonBlanco4Columna,
		 int peonBlanco5Columna, int peonBlanco6Columna,
		 int peonBlanco7Columna, int peonBlanco8Columna,
		 int peonBlanco1Fila, int peonBlanco2Fila,
		 int peonBlanco3Fila, int peonBlanco4Fila,
		 int peonBlanco5Fila, int peonBlanco6Fila,
		 int peonBlanco7Fila, int peonBlanco8Fila,
		 int torreBlanco1Columna, int torreBlanco2Columna,
		 int torreBlanco1Fila, int torreBlanco2Fila,
		 int caballoBlanco1Columna, int caballoBlanco2Columna,
		 int caballoBlanco1Fila, int caballoBlanco2Fila,
		 int alfilBlanco1Columna, int alfilBlanco2Columna,
		 int alfilBlanco1Fila, int alfilBlanco2Fila,
		 int reyBlancoColumna, int reyBlancoFila,
		 int reinaBlancoColumna, int reinaBlancoFila,
		 int peonNegro1Columna, int peonNegro2Columna,
		 int peonNegro3Columna, int peonNegro4Columna,
		 int peonNegro5Columna, int peonNegro6Columna,
		 int peonNegro7Columna, int peonNegro8Columna,
		 int peonNegro1Fila, int peonNegro2Fila, int peonNegro3Fila,
		 int peonNegro4Fila, int peonNegro5Fila, int peonNegro6Fila,
		 int peonNegro7Fila, int peonNegro8Fila,
		 int torreNegro1Columna, int torreNegro2Columna,
		 int torreNegro1Fila, int torreNegro2Fila,
		 int caballoNegro1Columna, int caballoNegro2Columna,
		 int caballoNegro1Fila, int caballoNegro2Fila,
		 int alfilNegro1Columna, int alfilNegro2Columna,
		 int alfilNegro1Fila, int alfilNegro2Fila,
		 int reyNegroColumna, int reyNegroFila, int reinaNegroColumna,
		 int reinaNegroFila, int torreBlancoExtra1Columna,
		 int torreBlancoExtra1Fila, int torreBlancoExtra2Columna,
		 int torreBlancoExtra2Fila, int torreBlancoExtra3Columna,
		 int torreBlancoExtra3Fila, int torreBlancoExtra4Columna,
		 int torreBlancoExtra4Fila, int torreBlancoExtra5Columna,
		 int torreBlancoExtra5Fila, int torreBlancoExtra6Columna,
		 int torreBlancoExtra6Fila, int torreBlancoExtra7Columna,
		 int torreBlancoExtra7Fila, int torreBlancoExtra8Columna,
		 int torreBlancoExtra8Fila, int caballoBlancoExtra1Columna,
		 int caballoBlancoExtra1Fila, int caballoBlancoExtra2Columna,
		 int caballoBlancoExtra2Fila, int caballoBlancoExtra3Columna,
		 int caballoBlancoExtra3Fila, int caballoBlancoExtra4Columna,
		 int caballoBlancoExtra4Fila, int caballoBlancoExtra5Columna,
		 int caballoBlancoExtra5Fila, int caballoBlancoExtra6Columna,
		 int caballoBlancoExtra6Fila, int caballoBlancoExtra7Columna,
		 int caballoBlancoExtra7Fila, int caballoBlancoExtra8Columna,
		 int caballoBlancoExtra8Fila, int alfilBlancoExtra1Columna,
		 int alfilBlancoExtra1Fila, int alfilBlancoExtra2Columna,
		 int alfilBlancoExtra2Fila, int alfilBlancoExtra3Columna,
		 int alfilBlancoExtra3Fila, int alfilBlancoExtra4Columna,
		 int alfilBlancoExtra4Fila, int alfilBlancoExtra5Columna,
		 int alfilBlancoExtra5Fila, int alfilBlancoExtra6Columna,
		 int alfilBlancoExtra6Fila, int alfilBlancoExtra7Columna,
		 int alfilBlancoExtra7Fila, int alfilBlancoExtra8Columna,
		 int alfilBlancoExtra8Fila, int reinaBlancoExtra1Columna,
		 int reinaBlancoExtra1Fila, int reinaBlancoExtra2Columna,
		 int reinaBlancoExtra2Fila, int reinaBlancoExtra3Columna,
		 int reinaBlancoExtra3Fila, int reinaBlancoExtra4Columna,
		 int reinaBlancoExtra4Fila, int reinaBlancoExtra5Columna,
		 int reinaBlancoExtra5Fila, int reinaBlancoExtra6Columna,
		 int reinaBlancoExtra6Fila, int reinaBlancoExtra7Columna,
		 int reinaBlancoExtra7Fila, int reinaBlancoExtra8Columna,
		 int reinaBlancoExtra8Fila, int torreNegroExtra1Columna,
		 int torreNegroExtra1Fila, int torreNegroExtra2Columna,
		 int torreNegroExtra2Fila, int torreNegroExtra3Columna,
		 int torreNegroExtra3Fila, int torreNegroExtra4Columna,
		 int torreNegroExtra4Fila, int torreNegroExtra5Columna,
		 int torreNegroExtra5Fila, int torreNegroExtra6Columna,
		 int torreNegroExtra6Fila, int torreNegroExtra7Columna,
		 int torreNegroExtra7Fila, int torreNegroExtra8Columna,
		 int torreNegroExtra8Fila, int caballoNegroExtra1Columna,
		 int caballoNegroExtra1Fila, int caballoNegroExtra2Columna,
		 int caballoNegroExtra2Fila, int caballoNegroExtra3Columna,
		 int caballoNegroExtra3Fila, int caballoNegroExtra4Columna,
		 int caballoNegroExtra4Fila, int caballoNegroExtra5Columna,
		 int caballoNegroExtra5Fila, int caballoNegroExtra6Columna,
		 int caballoNegroExtra6Fila, int caballoNegroExtra7Columna,
		 int caballoNegroExtra7Fila, int caballoNegroExtra8Columna,
		 int caballoNegroExtra8Fila, int alfilNegroExtra1Columna,
		 int alfilNegroExtra1Fila, int alfilNegroExtra2Columna,
		 int alfilNegroExtra2Fila, int alfilNegroExtra3Columna,
		 int alfilNegroExtra3Fila, int alfilNegroExtra4Columna,
		 int alfilNegroExtra4Fila, int alfilNegroExtra5Columna,
		 int alfilNegroExtra5Fila, int alfilNegroExtra6Columna,
		 int alfilNegroExtra6Fila, int alfilNegroExtra7Columna,
		 int alfilNegroExtra7Fila, int alfilNegroExtra8Columna,
		 int alfilNegroExtra8Fila, int reinaNegroExtra1Columna,
		 int reinaNegroExtra1Fila, int reinaNegroExtra2Columna,
		 int reinaNegroExtra2Fila, int reinaNegroExtra3Columna,
		 int reinaNegroExtra3Fila, int reinaNegroExtra4Columna,
		 int reinaNegroExtra4Fila, int reinaNegroExtra5Columna,
		 int reinaNegroExtra5Fila, int reinaNegroExtra6Columna,
		 int reinaNegroExtra6Fila, int reinaNegroExtra7Columna,
		 int reinaNegroExtra7Fila, int reinaNegroExtra8Columna,
		 int reinaNegroExtra8Fila)
{
  int x = 0;
  int y = 0;
  int i = 0;
  int xpeonB0 = peonBlanco1Columna;
  int ypeonB0 = peonBlanco1Fila;
  int xpeonB1 = peonBlanco2Columna;
  int ypeonB1 = peonBlanco2Fila;
  int xpeonB2 = peonBlanco3Columna;
  int ypeonB2 = peonBlanco3Fila;
  int xpeonB3 = peonBlanco4Columna;
  int ypeonB3 = peonBlanco4Fila;
  int xpeonB4 = peonBlanco5Columna;
  int ypeonB4 = peonBlanco5Fila;
  int xpeonB5 = peonBlanco6Columna;
  int ypeonB5 = peonBlanco6Fila;
  int xpeonB6 = peonBlanco7Columna;
  int ypeonB6 = peonBlanco7Fila;
  int xpeonB7 = peonBlanco8Columna;
  int ypeonB7 = peonBlanco8Fila;
  int xpeonN0 = peonNegro1Columna;
  int ypeonN0 = peonNegro1Fila;
  int xpeonN1 = peonNegro2Columna;
  int ypeonN1 = peonNegro2Fila;
  int xpeonN2 = peonNegro3Columna;
  int ypeonN2 = peonNegro3Fila;
  int xpeonN3 = peonNegro4Columna;
  int ypeonN3 = peonNegro4Fila;
  int xpeonN4 = peonNegro5Columna;
  int ypeonN4 = peonNegro5Fila;
  int xpeonN5 = peonNegro6Columna;
  int ypeonN5 = peonNegro6Fila;
  int xpeonN6 = peonNegro7Columna;
  int ypeonN6 = peonNegro7Fila;
  int xpeonN7 = peonNegro8Columna;
  int ypeonN7 = peonNegro8Fila;
  int xtorre1B = torreBlanco1Columna;
  int ytorre1B = torreBlanco1Fila;
  int xtorre2B = torreBlanco2Columna;
  int ytorre2B = torreBlanco2Fila;
  int xtorre1N = torreNegro1Columna;
  int ytorre1N = torreBlanco1Fila;
  int xtorre2N = torreNegro2Columna;
  int ytorre2N = torreNegro2Fila;
  int xafil1B = alfilBlanco1Columna;
  int yafil1B = alfilBlanco1Fila;
  int xafil2B = alfilBlanco2Columna;
  int yafil2B = alfilBlanco2Fila;
  int xafil1N = alfilNegro1Columna;
  int yafil1N = alfilNegro1Fila;
  int xafil2N = alfilNegro2Columna;
  int yafil2N = alfilNegro2Fila;
  int xcaballo1B = caballoBlanco1Columna;
  int ycaballo1B = caballoBlanco1Fila;
  int xcaballo2B = caballoBlanco2Columna;
  int ycaballo2B = caballoBlanco2Fila;
  int xcaballo1N = caballoBlanco1Columna;
  int ycaballo1N = caballoBlanco1Fila;
  int xcaballo2N = caballoBlanco2Columna;
  int ycaballo2N = caballoBlanco2Fila;
  int xreinaB = reinaBlancoColumna;
  int yreinaB = reinaBlancoFila;
  int xreyB = reyBlancoColumna;
  int yreyB = reyBlancoFila;
  int xreinaN = reinaNegroColumna;
  int yreinaN = reinaNegroFila;
  int xreyN = reyNegroColumna;
  int yreyN = reyNegroFila;
  int xtorreBE1 = torreBlancoExtra1Columna;
  int ytorreBE1 = torreBlancoExtra1Fila;
  int xtorreBE2 = torreBlancoExtra2Columna;
  int ytorreBE2 = torreBlancoExtra2Fila;
  int xtorreBE3 = torreBlancoExtra3Columna;
  int ytorreBE3 = torreBlancoExtra3Fila;
  int xtorreBE4 = torreBlancoExtra4Columna;
  int ytorreBE4 = torreBlancoExtra4Fila;
  int xtorreBE5 = torreBlancoExtra5Columna;
  int ytorreBE5 = torreBlancoExtra5Fila;
  int xtorreBE6 = torreBlancoExtra6Columna;
  int ytorreBE6 = torreBlancoExtra6Fila;
  int xtorreBE7 = torreBlancoExtra7Columna;
  int ytorreBE7 = torreBlancoExtra7Fila;
  int xtorreBE8 = torreBlancoExtra8Columna;
  int ytorreBE8 = torreBlancoExtra8Fila;
  int xcaballoBE1 = caballoBlancoExtra1Columna;
  int ycaballoBE1 = caballoBlancoExtra1Fila;
  int xcaballoBE2 = caballoBlancoExtra2Columna;
  int ycaballoBE2 = caballoBlancoExtra2Fila;
  int xcaballoBE3 = caballoBlancoExtra3Columna;
  int ycaballoBE3 = caballoBlancoExtra3Fila;
  int xcaballoBE4 = caballoBlancoExtra4Columna;
  int ycaballoBE4 = caballoBlancoExtra4Fila;
  int xcaballoBE5 = caballoBlancoExtra5Columna;
  int ycaballoBE5 = caballoBlancoExtra5Fila;
  int xcaballoBE6 = caballoBlancoExtra6Columna;
  int ycaballoBE6 = caballoBlancoExtra6Fila;
  int xcaballoBE7 = caballoBlancoExtra7Columna;
  int ycaballoBE7 = caballoBlancoExtra7Fila;
  int xcaballoBE8 = caballoBlancoExtra8Columna;
  int ycaballoBE8 = caballoBlancoExtra8Fila;
  int xalfilBE1 = alfilBlancoExtra1Columna;
  int yalfilBE1 = alfilBlancoExtra1Fila;
  int xalfilBE2 = alfilBlancoExtra2Columna;
  int yalfilBE2 = alfilBlancoExtra2Fila;
  int xalfilBE3 = alfilBlancoExtra3Columna;
  int yalfilBE3 = alfilBlancoExtra3Fila;
  int xalfilBE4 = alfilBlancoExtra4Columna;
  int yalfilBE4 = alfilBlancoExtra4Fila;
  int xalfilBE5 = alfilBlancoExtra5Columna;
  int yalfilBE5 = alfilBlancoExtra5Fila;
  int xalfilBE6 = alfilBlancoExtra6Columna;
  int yalfilBE6 = alfilBlancoExtra6Fila;
  int xalfilBE7 = alfilBlancoExtra7Columna;
  int yalfilBE7 = alfilBlancoExtra7Fila;
  int xalfilBE8 = alfilBlancoExtra8Columna;
  int yalfilBE8 = alfilBlancoExtra8Fila;
  int xreinaBE1 = reinaBlancoExtra1Columna;
  int yreinaBE1 = reinaBlancoExtra1Fila;
  int xreinaBE2 = reinaBlancoExtra2Columna;
  int yreinaBE2 = reinaBlancoExtra2Fila;
  int xreinaBE3 = reinaBlancoExtra3Columna;
  int yreinaBE3 = reinaBlancoExtra3Fila;
  int xreinaBE4 = reinaBlancoExtra4Columna;
  int yreinaBE4 = reinaBlancoExtra4Fila;
  int xreinaBE5 = reinaBlancoExtra5Columna;
  int yreinaBE5 = reinaBlancoExtra5Fila;
  int xreinaBE6 = reinaBlancoExtra6Columna;
  int yreinaBE6 = reinaBlancoExtra6Fila;
  int xreinaBE7 = reinaBlancoExtra7Columna;
  int yreinaBE7 = reinaBlancoExtra7Fila;
  int xreinaBE8 = reinaBlancoExtra8Columna;
  int yreinaBE8 = reinaBlancoExtra8Fila;
  int xtorreNE1 = torreNegroExtra1Columna;
  int ytorreNE1 = torreNegroExtra1Fila;
  int xtorreNE2 = torreNegroExtra2Columna;
  int ytorreNE2 = torreNegroExtra2Fila;
  int xtorreNE3 = torreNegroExtra3Columna;
  int ytorreNE3 = torreNegroExtra3Fila;
  int xtorreNE4 = torreNegroExtra4Columna;
  int ytorreNE4 = torreNegroExtra4Fila;
  int xtorreNE5 = torreNegroExtra5Columna;
  int ytorreNE5 = torreNegroExtra5Fila;
  int xtorreNE6 = torreNegroExtra6Columna;
  int ytorreNE6 = torreNegroExtra6Fila;
  int xtorreNE7 = torreNegroExtra7Columna;
  int ytorreNE7 = torreNegroExtra7Fila;
  int xtorreNE8 = torreNegroExtra8Columna;
  int ytorreNE8 = torreNegroExtra8Fila;
  int xcaballoNE1 = caballoNegroExtra1Columna;
  int ycaballoNE1 = caballoNegroExtra1Fila;
  int xcaballoNE2 = caballoNegroExtra2Columna;
  int ycaballoNE2 = caballoNegroExtra2Fila;
  int xcaballoNE3 = caballoNegroExtra3Columna;
  int ycaballoNE3 = caballoNegroExtra3Fila;
  int xcaballoNE4 = caballoNegroExtra4Columna;
  int ycaballoNE4 = caballoNegroExtra4Fila;
  int xcaballoNE5 = caballoNegroExtra5Columna;
  int ycaballoNE5 = caballoNegroExtra5Fila;
  int xcaballoNE6 = caballoNegroExtra6Columna;
  int ycaballoNE6 = caballoNegroExtra6Fila;
  int xcaballoNE7 = caballoNegroExtra7Columna;
  int ycaballoNE7 = caballoNegroExtra7Fila;
  int xcaballoNE8 = caballoNegroExtra8Columna;
  int ycaballoNE8 = caballoNegroExtra8Fila;
  int xalfilNE1 = alfilNegroExtra1Columna;
  int yalfilNE1 = alfilNegroExtra1Fila;
  int xalfilNE2 = alfilNegroExtra2Columna;
  int yalfilNE2 = alfilNegroExtra2Fila;
  int xalfilNE3 = alfilNegroExtra3Columna;
  int yalfilNE3 = alfilNegroExtra3Fila;
  int xalfilNE4 = alfilNegroExtra4Columna;
  int yalfilNE4 = alfilNegroExtra4Fila;
  int xalfilNE5 = alfilNegroExtra5Columna;
  int yalfilNE5 = alfilNegroExtra5Fila;
  int xalfilNE6 = alfilNegroExtra6Columna;
  int yalfilNE6 = alfilNegroExtra6Fila;
  int xalfilNE7 = alfilNegroExtra7Columna;
  int yalfilNE7 = alfilNegroExtra7Fila;
  int xalfilNE8 = alfilNegroExtra8Columna;
  int yalfilNE8 = alfilNegroExtra8Fila;
  int xreinaNE1 = reinaNegroExtra1Columna;
  int yreinaNE1 = reinaNegroExtra1Fila;
  int xreinaNE2 = reinaNegroExtra2Columna;
  int yreinaNE2 = reinaNegroExtra2Fila;
  int xreinaNE3 = reinaNegroExtra3Columna;
  int yreinaNE3 = reinaNegroExtra3Fila;
  int xreinaNE4 = reinaNegroExtra4Columna;
  int yreinaNE4 = reinaNegroExtra4Fila;
  int xreinaNE5 = reinaNegroExtra5Columna;
  int yreinaNE5 = reinaNegroExtra5Fila;
  int xreinaNE6 = reinaNegroExtra6Columna;
  int yreinaNE6 = reinaNegroExtra6Fila;
  int xreinaNE7 = reinaNegroExtra7Columna;
  int yreinaNE7 = reinaNegroExtra7Fila;
  int xreinaNE8 = reinaNegroExtra8Columna;
  int yreinaNE8 = reinaNegroExtra8Fila;
  for (x = 1; x <= 8; x++)
    {
      if (x % 2)
	{
	  for (y = 1; y <= 8; y++)
	    {
	      if (xpeonB0 == x && ypeonB0 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB1 == x && ypeonB1 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB2 == x && ypeonB2 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB3 == x && ypeonB3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB3 == x && ypeonB3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB4 == x && ypeonB4 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB5 == x && ypeonB5 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB6 == x && ypeonB6 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB7 == x && ypeonB7 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN0 == x && ypeonN0 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN1 == x && ypeonN1 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN2 == x && ypeonN2 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN3 == x && ypeonN3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN3 == x && ypeonN3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN4 == x && ypeonN4 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN5 == x && ypeonN5 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN6 == x && ypeonN6 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN7 == x && ypeonN7 == y)
		{
		  printf (" P  ");
		}

	      else if (xtorre1B == x && ytorre1B == y)
		{
		  printf (" T  ");
		}

	      else if (xtorre2B == x && ytorre2B == y)
		{
		  printf (" T  ");
		}
	      else if (xtorre1N == x && ytorre1N == y)
		{
		  printf (" T  ");
		}
	      else if (xtorre2N == x && ytorre2N == y)
		{
		  printf (" T  ");
		}

	      else if (xafil1B == x && yafil1B == y)
		{
		  printf (" A  ");
		}

	      else if (xafil2B == x && yafil2B == y)
		{
		  printf (" A  ");
		}
	      else if (xafil1N == x && yafil1N == y)
		{
		  printf (" A  ");
		}
	      else if (xafil2N == x && yafil2N == y)
		{
		  printf (" A  ");
		}

	      else if (xcaballo1B == x && ycaballo1B == y)
		{
		  printf (" C  ");
		}

	      else if (xcaballo2B == x && ycaballo2B == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballo1N == x && ycaballo1N == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballo2N == x && ycaballo2N == y)
		{
		  printf (" C  ");
		}

	      else if (xreyB == x && yreyB == y)
		{
		  printf (" K  ");
		}
	      else if (xreinaB == x && yreinaB == y)
		{
		  printf (" R  ");
		}
	      else if (xreyN == x && yreyN == y)
		{
		  printf (" K  ");
		}
	      else if (xreinaN == x && yreinaN == y)
		{
		  printf (" R  ");
		}

	      else if (xtorreBE1 == x && ytorreBE1 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE2 == x && ytorreBE2 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE3 == x && ytorreBE3 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE4 == x && ytorreBE4 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE5 == x && ytorreBE5 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE6 == x && ytorreBE6 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE7 == x && ytorreBE7 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE8 == x && ytorreBE8 == y)
		{
		  printf (" T  ");
		}

	      else if (xcaballoBE1 == x && ycaballoBE1 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE2 == x && ycaballoBE2 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE3 == x && ycaballoBE3 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE4 == x && ycaballoBE4 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE5 == x && ycaballoBE5 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE6 == x && ycaballoBE6 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE7 == x && ycaballoBE7 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE8 == x && ycaballoBE8 == y)
		{
		  printf (" C  ");
		}

	      else if (xalfilBE1 == x && yalfilBE1 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE2 == x && yalfilBE2 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE3 == x && yalfilBE3 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE4 == x && yalfilBE4 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE5 == x && yalfilBE5 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE6 == x && yalfilBE6 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE7 == x && yalfilBE7 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE8 == x && yalfilBE8 == y)
		{
		  printf (" A  ");
		}

	      else if (xreinaBE1 == x && yreinaBE1 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE2 == x && yreinaBE2 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE3 == x && yreinaBE3 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE4 == x && yreinaBE4 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE5 == x && yreinaBE5 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE6 == x && yreinaBE6 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE7 == x && yreinaBE7 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE8 == x && yreinaBE8 == y)
		{
		  printf (" R  ");
		}

	      else if (xtorreNE1 == x && ytorreNE1 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE2 == x && ytorreNE2 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE3 == x && ytorreNE3 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE4 == x && ytorreNE4 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE5 == x && ytorreNE5 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE6 == x && ytorreNE6 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE7 == x && ytorreNE7 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE8 == x && ytorreNE8 == y)
		{
		  printf (" T  ");
		}

	      else if (xcaballoNE1 == x && ycaballoNE1 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE2 == x && ycaballoNE2 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE3 == x && ycaballoNE3 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE4 == x && ycaballoNE4 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE5 == x && ycaballoNE5 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE6 == x && ycaballoNE6 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE7 == x && ycaballoNE7 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE8 == x && ycaballoNE8 == y)
		{
		  printf (" C  ");
		}

	      else if (xalfilNE1 == x && yalfilNE1 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE2 == x && yalfilNE2 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE3 == x && yalfilNE3 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE4 == x && yalfilNE4 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE5 == x && yalfilNE5 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE6 == x && yalfilNE6 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE7 == x && yalfilNE7 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE8 == x && yalfilNE8 == y)
		{
		  printf (" A  ");
		}

	      else if (xreinaNE1 == x && yreinaNE1 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE2 == x && yreinaNE2 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE3 == x && yreinaNE3 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE4 == x && yreinaNE4 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE5 == x && yreinaNE5 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE6 == x && yreinaNE6 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE7 == x && yreinaNE7 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE8 == x && yreinaNE8 == y)
		{
		  printf (" R  ");
		}

	      else if (y % 2)
		{
		  printf (" // ");
		}

	      else
		{
		  printf (" ** ");
		}
	    }
	}

      else
	{
	  for (y = 1; y <= 8; y++)
	    {
	      if (xpeonB0 == x && ypeonB0 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB1 == x && ypeonB1 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB2 == x && ypeonB2 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB3 == x && ypeonB3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB3 == x && ypeonB3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB4 == x && ypeonB4 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB5 == x && ypeonB5 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB6 == x && ypeonB6 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonB7 == x && ypeonB7 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN0 == x && ypeonN0 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN1 == x && ypeonN1 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN2 == x && ypeonN2 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN3 == x && ypeonN3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN3 == x && ypeonN3 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN4 == x && ypeonN4 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN5 == x && ypeonN5 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN6 == x && ypeonN6 == y)
		{
		  printf (" P  ");
		}

	      else if (xpeonN7 == x && ypeonN7 == y)
		{
		  printf (" P  ");
		}

	      else if (xtorre1B == x && ytorre1B == y)
		{
		  printf (" T  ");
		}

	      else if (xtorre2B == x && ytorre2B == y)
		{
		  printf (" T  ");
		}
	      else if (xtorre1N == x && ytorre1N == y)
		{
		  printf (" T  ");
		}
	      else if (xtorre2N == x && ytorre2N == y)
		{
		  printf (" T  ");
		}

	      else if (xafil1B == x && yafil1B == y)
		{
		  printf (" A  ");
		}

	      else if (xafil2B == x && yafil2B == y)
		{
		  printf (" A  ");
		}
	      else if (xafil1N == x && yafil1N == y)
		{
		  printf (" A  ");
		}
	      else if (xafil2N == x && yafil2N == y)
		{
		  printf (" A  ");
		}

	      else if (xcaballo1B == x && ycaballo1B == y)
		{
		  printf (" C  ");
		}

	      else if (xcaballo2B == x && ycaballo2B == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballo1N == x && ycaballo1N == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballo2N == x && ycaballo2N == y)
		{
		  printf (" C  ");
		}

	      else if (xreyB == x && yreyB == y)
		{
		  printf (" K  ");
		}
	      else if (xreinaB == x && yreinaB == y)
		{
		  printf (" R  ");
		}
	      else if (xreyN == x && yreyN == y)
		{
		  printf (" K  ");
		}
	      else if (xreinaN == x && yreinaN == y)
		{
		  printf (" R  ");
		}

	      else if (xtorreBE1 == x && ytorreBE1 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE2 == x && ytorreBE2 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE3 == x && ytorreBE3 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE4 == x && ytorreBE4 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE5 == x && ytorreBE5 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE6 == x && ytorreBE6 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE7 == x && ytorreBE7 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreBE8 == x && ytorreBE8 == y)
		{
		  printf (" T  ");
		}

	      else if (xcaballoBE1 == x && ycaballoBE1 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE2 == x && ycaballoBE2 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE3 == x && ycaballoBE3 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE4 == x && ycaballoBE4 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE5 == x && ycaballoBE5 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE6 == x && ycaballoBE6 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE7 == x && ycaballoBE7 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoBE8 == x && ycaballoBE8 == y)
		{
		  printf (" C  ");
		}

	      else if (xalfilBE1 == x && yalfilBE1 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE2 == x && yalfilBE2 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE3 == x && yalfilBE3 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE4 == x && yalfilBE4 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE5 == x && yalfilBE5 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE6 == x && yalfilBE6 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE7 == x && yalfilBE7 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilBE8 == x && yalfilBE8 == y)
		{
		  printf (" A  ");
		}

	      else if (xreinaBE1 == x && yreinaBE1 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE2 == x && yreinaBE2 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE3 == x && yreinaBE3 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE4 == x && yreinaBE4 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE5 == x && yreinaBE5 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE6 == x && yreinaBE6 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE7 == x && yreinaBE7 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaBE8 == x && yreinaBE8 == y)
		{
		  printf (" R  ");
		}

	      else if (xtorreNE1 == x && ytorreNE1 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE2 == x && ytorreNE2 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE3 == x && ytorreNE3 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE4 == x && ytorreNE4 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE5 == x && ytorreNE5 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE6 == x && ytorreNE6 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE7 == x && ytorreNE7 == y)
		{
		  printf (" T  ");
		}
	      else if (xtorreNE8 == x && ytorreNE8 == y)
		{
		  printf (" T  ");
		}

	      else if (xcaballoNE1 == x && ycaballoNE1 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE2 == x && ycaballoNE2 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE3 == x && ycaballoNE3 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE4 == x && ycaballoNE4 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE5 == x && ycaballoNE5 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE6 == x && ycaballoNE6 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE7 == x && ycaballoNE7 == y)
		{
		  printf (" C  ");
		}
	      else if (xcaballoNE8 == x && ycaballoNE8 == y)
		{
		  printf (" C  ");
		}

	      else if (xalfilNE1 == x && yalfilNE1 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE2 == x && yalfilNE2 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE3 == x && yalfilNE3 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE4 == x && yalfilNE4 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE5 == x && yalfilNE5 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE6 == x && yalfilNE6 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE7 == x && yalfilNE7 == y)
		{
		  printf (" A  ");
		}
	      else if (xalfilNE8 == x && yalfilNE8 == y)
		{
		  printf (" A  ");
		}

	      else if (xreinaNE1 == x && yreinaNE1 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE2 == x && yreinaNE2 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE3 == x && yreinaNE3 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE4 == x && yreinaNE4 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE5 == x && yreinaNE5 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE6 == x && yreinaNE6 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE7 == x && yreinaNE7 == y)
		{
		  printf (" R  ");
		}
	      else if (xreinaNE8 == x && yreinaNE8 == y)
		{
		  printf (" R  ");
		}

	      else if (y % 2)
		{
		  printf (" ** ");
		}

	      else
		{
		  printf (" // ");
		}
	    }
	}
      printf ("\n");
    }
}

int
recibirCoordenadas (int pieza, int casillaOrigen, int casillaDestino)
{
  return 0;
}
