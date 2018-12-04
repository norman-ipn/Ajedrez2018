#include "finalizar.h"

int
validarReyAunPuedeMoverse (int tablero[8][8], char turno)
{
  int i = 0;
  int j = 0;
  int m = 0;
  int n = 0;
  int fila = 0;
  int columna = 0;
  int destinoDesocupado = 0;
  int verificarComerRey = 0;
  int jaqueRey = 0;

  if (turno == 'B')
    {
      jaqueRey == 1;
    }
  else
    {
      jaqueRey == -1;
    }

  for (i = 0; i < 8; i++)
    {
      for (j = 0; j < 8; j++)
	{
	  if (tablero[i][j] == jaqueRey)
	    {
	      for (m = 1; m >= 1; m--)
		{
		  for (n = 1; n >= 1; n--)
		    {
		      if (m != 0 || n != 0)
			{
			  columna = i + n;
			  fila = j + m;
			  destinoDesocupado =
			    verificarDestinoDesocupado (tablero, columna,
							fila);
			  if (destinoDesocupado == 0)
			    {
			      if ((verificarMovimientoRey
				   (tablero, i, j columna, fila)) == 1)
				{
				  if (detectarJaqueRey (tablero) == 0)
				    {
				      return 0;
				    }
				}
			    }
			  else
			    {
			      if (verificarComerRey
				  (&tablero, &columna, &fila) == 1)
				{
				  return 0;
				}
			    }
			}
		    }
		}
	    }
	}
    }
  return 1;
}

int
validarPiezaPuedeCapturarse (int tablero[8][8], int ultimoMovimientoFila,
			     int ultimoMovimientoColumna, char turno)
{
  int x = 0;
  int y = 0;


  for (x = 0; x < 8; x++)
    {
      for (y = 0; y < 8; y++)
	{
	  if (turno == 'B')
	    {
	      switch (tablero[x][y])
		{
		case -6:
		case -5:
		case -4:
		case -3:
		case -2:
		case -1:
		case 0:
		case 1:
		  break;
		case 2:
		  if (comerReina
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case 3:
		  if (comerAlfil
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case 4:
		  if (comerCaballo
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case 5:
		  if (comerTorre
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case 6:
		  if (comerPeon
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		}
	    }
	  else
	    {
	      switch (tablero[x][y])
		{
		case 6:
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:
		case -1:
		  break;
		case -2:
		  if (comerReina
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case -3:
		  if (comerAlfil
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case -4:
		  if (comerCaballo
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case -5:
		  if (comerTorre
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		case -6:
		  if (comerPeon
		      (&tablero, &ultimoMovimientoFila,
		       &ultimoMovimientoColumna) == 1)
		    {
		      return 0;
		    }
		  break;
		}
	    }
	}
    }
  return 1;
}

int
interponerEntreAlfil (int tablero[8][8], int ultimoMovimientoFila,
		      int ultimoMovimientoColumna, char turno)
{

  int columnaRey = 0;
  int filaRey = 0;
  int x = 0;
  int y = 0;
  int jaqueRey = 0;
  int x2 = 0;
  int y2 = 0;

  if (turno == 'B')
    {
      jaqueRey == 1;
    }
  else
    {
      jaqueRey == -1;
    }

  for (x = 0; x < 8; x++)
    {
      for (y = 0; y < 8; y++)
	{
	  if (tablero[x][y] == jaqueRey)
	    {
	      filaRey = x;
	      jaqueRey = y;
	    }
	}
    }

  if (ultimoMovimientoFila > filaRey && ultimoMovimientoColumna < columnaRey)
    {
      y = columnaRey - 1;
      for (x = filaRey + 1; x < ultimoMovimientoFila; x++)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	  y = y - 1;
	}
      return 1;
    }
  else if (ultimoMovimientoFila > filaRey
	   && ultimoMovimientoColumna > columnaRey)
    {
      y = columnaRey + 1;
      for (x = filaRey + 1; x < ultimoMovimientoFila; x++)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	  y = y + 1;
	}
      return 1;
    }
  else if (ultimoMovimientoFila < filaRey
	   && ultimoMovimientoColumna < columnaRey)
    {
      y = columnaRey - 1;
      for (x = filaRey - 1; x > ultimoMovimientoFila; x--)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	  y = y - 1;
	}
      return 1;
    }
  else if (ultimoMovimientoFila < filaRey
	   && ultimoMovimientoColumna > columnaRey)
    {
      y = columnaRey + 1;
      for (x = filaRey - 1; x > ultimoMovimientoFila; x--)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina (tablero, x2, y2, x, y)
			      == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	  y = y + 1;
	}
      return 1;
    }

}

int
interponerEntreTorre (int tablero[8][8], int ultimoMovimientoFila,
		      int ultimoMovimientoColumna, char turno)
{

  int columnaRey = 0;
  int filaRey = 0;
  int x = 0;
  int y = 0;
  int jaqueRey = 0;
  int x2 = 0;
  int y2 = 0;

  if (turno == 'B')
    {
      jaqueRey == 1;
    }
  else
    {
      jaqueRey == -1;
    }

  for (x = 0; x < 8; x++)
    {
      for (y = 0; y < 8; y++)
	{
	  if (tablero[x][y] == jaqueRey)
	    {
	      filaRey = x;
	      jaqueRey = y;
	    }
	}
    }

  if (ultimoMovimientoFila > filaRey && ultimoMovimientoColumna == columnaRey)
    {
      for (x = filaRey + 1; x < ultimoMovimientoFila; x++)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	}
      return 1;
    }
  else if (ultimoMovimientoFila == filaRey
	   && ultimoMovimientoColumna > columnaRey)
    {
      for (y = columnaRey + 1; y < ultimoMovimientoColumna; y++)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	}
      return 1;
    }
  else if (ultimoMovimientoFila < filaRey
	   && ultimoMovimientoColumna == columnaRey)
    {
      for (x = filaRey - 1; x > ultimoMovimientoFila; x--)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, x,
			       ultimoMovimientoColumna) == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	}
      return 1;
    }
  else if (ultimoMovimientoFila == filaRey
	   && ultimoMovimientoColumna < columnaRey)
    {
      for (y = columnaRey - 1; y > ultimoMovimientoColumna; y--)
	{
	  for (x2 = 0; x2 < 8; x2++)
	    {
	      for (y2 = 0; y2 < 8; y2++)
		{
		  if (jaqueRey == 1)
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			case -5:
			case -4:
			case -3:
			case -2:
			case -1:
			case 0:
			case 1:
			  break;
			case 2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case 6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			}
		    }
		  else
		    {
		      switch (tablero[x2][y2])
			{
			case -6:
			  if (verificarMovimientoPeon
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -5:
			  if (verificarMovimientoTorre
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -4:
			  if (verificarMovimientoCaballo
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -3:
			  if (verificarMovimientoAlfil
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -2:
			  if (verificarMovimientoReina
			      (tablero, x2, y2, ultimoMovimientoFila, y) == 1)
			    {
			      return 0;
			      break;
			    }
			case -1:
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			  break;
			}
		    }
		}
	    }
	}
      return 1;
    }
}

int
validarJaqueMate (int tablero[8][8], int ultimoMovimientoFila,
		  int ultimoMovimientoColumna, char turno)
{

  int pieza = tablero[ultimoMovimientoFila][ultimoMovimientoColumna];

  if (validarReyAunPuedeMoverse (tablero, turno) == 0)
    {
      return 0;
    }
  else
    if (validarPiezaPuedeCapturarse
	(tablero, ultimoMovimientoFila, ultimoMovimientoColumna, turno) == 0)
    {
      return 0;
    }
  else if (pieza == 3 || pieza == -3)
    {
      if (interponerEntreAlfil
	  (tablero, ultimoMovimientoFila, ultimoMovimientoColumna,
	   turno) == 1)
	{
	  return 1;
	}
    }
  else if (pieza == 5 || pieza == -5)
    {
      if (interponerEntreTorre
	  (tablero, ultimoMovimientoFila, ultimoMovimientoColumna,
	   turno) == 1)
	{
	  return 1;
	}
    }
  else if (pieza == 2 || pieza == -2)
    {
      if (interponerEntreTorre
	  (tablero, ultimoMovimientoFila, ultimoMovimientoColumna, turno) == 1
	  && interponerEntreAlfil (tablero, ultimoMovimientoFila,
				   ultimoMovimientoColumna, turno) == 1)
	{
	  return 1;
	}
    }
  else
    {
      return 0;
    }

}

int
validarLimiteDeMovimientos (int movimientoslimite)
{

  if (movimientoslimite == 50)
    {
      return 1;
    }
  else
    {
      return 0;
    }

}

int
validarTablasPorAhogado (int tablero[8][8], char turno)
{
  if (turno == 'B')
    {
      int i = 0;
      int j = 0;
      int siSePuedeMover = 0;
      for (i; i < 8; i++)
	{
	  for (j; j < 8; j++)
	    {
	      if (verificarMovimientoRey (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoTorre (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoPeon (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoCaballo (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoAlfil (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	    }
	  if (siSePuedeMover == 1)
	    {
	      i = 8;
	      j = 8;
	    }
	}
      if (siSePuedeMover == 1)
	{
	  return 0;
	}
      else
	{
	  return 1;
	}
    }
  if (turno == 'N')
    {
      int i = 0;
      int j = 0;
      int siSePuedeMover = 0;
      for (i; i < 8; i++)
	{
	  for (j; j < 8; j++)
	    {
	      if (verificarMovimientoRey (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoTorre (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoPeon (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoCaballo (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	      if (verificarMovimientoAlfil (tablero, i, j) == 1)
		{
		  siSePuedeMover = 1;
		}
	    }
	  if (siSePuedeMover == 1)
	    {
	      i = 8;
	      j = 8;
	    }
	}
      if (siSePuedeMover == 1)
	{
	  return 0;
	}
      else
	{
	  return 1;
	}
    }
}

int
validarPiezasInsuficientes (int tablero[8][8])
{

  int rey = 0;
  int alfil = 0;
  int caballoNegro = 0;
  int caballoBlanco = 0;
  int reina = 0;
  int peon = 0;
  int torre = 0;
  int x = 0;
  int y = 0;

  for (x = 0; x <= 7; x++)
    {
      for (y = 0; y <= 7; y++)
	{
	  switch (tablero[x][y])
	    {
	    case -6:
	    case 6:
	      peon++;
	      break;
	    case -5:
	    case 5:
	      torre++;
	      break;
	    case -4:
	      caballoNegro++;
	      break;
	    case -3:
	    case 3:
	      alfil++;
	      break;
	    case -2:
	    case 2:
	      reina++;
	      break;
	    case -1:
	    case 1:
	      rey++;
	      break;
	    case 4:
	      caballoBlanco++;
	      break;
	    case 0:
	      break;
	    }
	}
    }

  if (peon != 0 || torre != 0 || reina != 0 || alfil > 2 || caballoNegro > 1
      || caballoBlanco > 1)
    {
      return 0;
    }

  else if (alfil <= 2 && rey == 2 && caballoNegro == 0 && caballoBlanco == 0)
    {
      return 1;
    }

  else if (caballoNegro == 1 && rey == 2 && alfil == 0 && caballoBlanco == 0)
    {
      return 1;
    }

  else if (caballoBlanco == 1 && rey == 2 && alfil == 0 && caballoNegro == 0)
    {
      return 1;
    }

  else
    {
      return 0;
    }

}
