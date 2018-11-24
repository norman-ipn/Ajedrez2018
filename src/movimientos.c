#include "movimientos.h"


void
moverInicialmentePeon (int *posicionInicialPeon, int *posicionFinalPeon)
{
  int piezaValor = *posicionInicialPeon;

  *posicionInicialPeon = 0;

  *posicionFinalPeon = piezaValor;
}


void
comerPeon(int *posicionInicialPeon, int *posicionFinalPeon)
{
	int valorPiezaPeon = *posicionInicialPeon;
	*posicionInicialPeon = 0;
	*posicionFinalPeon = 0;
	*posicionFinalPeon = valorPiezaPeon;
}






























void
moverPeon (int *posicionInicialPeon, int *posicionFinalPeon)
{
  int piezaValor = *posicionInicialPeon;

  *posicionInicialPeon = 0;

  *posicionFinalPeon = piezaValor;
}


int
hacerJaquePeon (int filaInicialPeon, int columnaInicialPeon,
		int filaReyEnemigo, int columnaReyEnemigo)
{


  int filaPD = 0;
  int filaPI = 0;
  int columnaP = 0;
  int colorPeon = 6;

  if (colorPeon == 6)
    {

      filaPD = filaInicialPeon + 1;
      filaPI = filaInicialPeon - 1;
      columnaP = columnaInicialPeon + 1;

      if (columnaP == columnaReyEnemigo)
	{

	  if (filaPD == filaReyEnemigo || filaPI == filaReyEnemigo)
	    {

	      printf ("Jaque Blanco");

	    }

	}

      return 1;

    }
  else if (colorPeon == 6)
    {

      filaPD = filaInicialPeon - 1;
      filaPI = filaInicialPeon + 1;
      columnaP = columnaInicialPeon - 1;

      if (columnaP == columnaReyEnemigo)
	{
	  if (filaPD == filaReyEnemigo || filaPI == filaReyEnemigo)
	    {

	      printf ("Jaque Negro");

	    }
	}
      return 2;
    }
  return 0;

}

void
coronar (int *posicionPeon, int pieza)
{
  *posicionPeon = pieza;
}




void
comerTorre (int *posicionInicialTorre, int *posicionFinalTorre)
{
  int valorPiezaTorre = *posicionInicialTorre;
  *posicionInicialTorre = 0;
  *posicionFinalTorre = 0;
  *posicionFinalTorre = valorPiezaTorre;
}

void
moverTorre (int *posicionInicialTorre, int *posicionFinalTorre)
{
  *posicionFinalTorre = *posicionInicialTorre;
  *posicionInicialTorre = 0;
}

int
hacerJaqueTorre (int filaInicialTorre, int columnaInicialTorre,
		 char colorTorre, int filaReyEnemigo, int columnaReyEnemigo)
{
  int i = 0;
  if (columnaInicialTorre == columnaReyEnemigo)
    {
      int columnasOcupadas = 0;
      if (columnaInicialTorre < columnaReyEnemigo)
	{
	  for (i = columnaInicialTorre; i > columnaReyEnemigo; i--)
	    {
	      if (verificarDestinoDesocupado (i, filaInicialTorre) == 0)
		{
		  columnasOcupadas++;
		}
	    }
	}
      else
	{
	  for (i = columnaInicialTorre; i < columnaReyEnemigo; i++)
	    {
	      if (verificarDestinoDesocupado (i, filaInicialTorre) == 0)
		{
		  columnasOcupadas++;
		}
	    }
	}
      if (columnasOcupadas == 0)
	{
	  if (colorTorre == 'b')
	    {
	      printf ("Jaque a Rey Negro\n");
	      return 1;
	    }
	  else if (colorTorre == 'n')
	    {
	      printf ("Jaque a Rey Blanco\n");
	      return 1;
	    }
	}
      else
	{
	  return 0;
	}
    }
  else
    {
      if (filaInicialTorre == filaReyEnemigo)
	{
	  int filasOcupadas = 0;
	  if (filaInicialTorre < filaReyEnemigo)
	    {
	      for (i = filaInicialTorre; i > filaReyEnemigo; i--)
		{
		  if (verificarDestinoDesocupado (columnaInicialTorre, i) ==
		      0)
		    {
		      filasOcupadas++;
		    }
		}
	    }
	  else
	    {
	      for (i = filaInicialTorre; i < filaReyEnemigo; i++)
		{
		  if (verificarDestinoDesocupado (columnaInicialTorre, i) ==
		      0)
		    {
		      filasOcupadas++;
		    }
		}
	    }
	  if (filasOcupadas == 0)
	    {
	      if (colorTorre == 'b')
		{
		  printf ("Jaque a Rey Negro\n");
		  return 1;
		}
	      else if (colorTorre == 'n')
		{
		  printf ("Jaque a Rey Blanco\n");
		  return 1;
		}
	    }
	  else
	    {
	      return 0;
	    }
	}
      else
	{
	  return 0;
	}
    }
}


void
comerCaballo (int *posicionInicialCaballo, int *posicionFinalCaballo)
{
  int valorPieza = *posicionInicialCaballo;
  *posicionInicialCaballo = 0;
  *posicionFinalCaballo = 0;
  *posicionFinalCaballo = valorPieza;
}

int
hacerJaqueCaballo (int filaInicialCaballo, int columnaInicialCaballo,
		   int filaReyEnemigo, int columnaReyEnemigo)
{
  int posibleFilaCaballo = 0;
  int posibleColumnaCaballo = 0;
  int jaque = 0;
  int movimientoValido = 0;
  int i = 0;

  for (; i <= 7; i++)
    {

      switch (i)
	{

	case 0:
	  posibleFilaCaballo = filaInicialCaballo + 2;
	  posibleColumnaCaballo = columnaInicialCaballo + 1;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;

	case 1:
	  posibleFilaCaballo = filaInicialCaballo + 1;
	  posibleColumnaCaballo = columnaInicialCaballo + 2;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;

	case 2:
	  posibleFilaCaballo = filaInicialCaballo - 1;
	  posibleColumnaCaballo = columnaInicialCaballo + 2;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;

	case 3:
	  posibleFilaCaballo = filaInicialCaballo - 2;
	  posibleColumnaCaballo = columnaInicialCaballo + 1;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;

	case 4:
	  posibleFilaCaballo = filaInicialCaballo - 2;
	  posibleColumnaCaballo = columnaInicialCaballo - 1;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;

	case 5:
	  posibleFilaCaballo = filaInicialCaballo - 1;
	  posibleColumnaCaballo = columnaInicialCaballo - 2;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;

	case 6:
	  posibleFilaCaballo = filaInicialCaballo + 1;
	  posibleColumnaCaballo = columnaInicialCaballo - 2;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;

	case 7:
	  posibleFilaCaballo = filaInicialCaballo + 2;
	  posibleColumnaCaballo = columnaInicialCaballo - 1;
	  movimientoValido =
	    verificarMovimientoCaballo (columnaInicialCaballo,
					filaInicialCaballo,
					posibleColumnaCaballo,
					posibleFilaCaballo);

	  if (movimientoValido == 1)
	    {

	      if ((posibleFilaCaballo == filaReyEnemigo)
		  && (posibleColumnaCaballo == columnaReyEnemigo))
		{
		  jaque = 1;
		}

	    }

	  break;


	}

    }
  return jaque;
}

void
moverCaballo (int *posicionInicialCaballo, int *posicionFinalCaballo)
{
  *posicionFinalCaballo = *posicionInicialCaballo;
  *posicionInicialCaballo = 0;
}

void
moverAlfil (int *posicionInicial, int *posicionFinal)
{
  int pieza = (*posicionInicial);
  (*posicionFinal) = pieza;
  (*posicionInicial) = 0;
  return;
}

void
comerAlfil (int *posicionPiezaCome, int *posicionPiezaComida)
{
  int pieza = (*posicionPiezaCome);
  (*posicionPiezaComida) = pieza;
  (*posicionPiezaCome) = 0;
  return;
}

int
hacerJaqueAlfil (int tablero[8][8], int filaAlfil, int columnaAlfil,
		 int filaRey, int columnaRey)
{
  int verificarMovimiento = 1;
  int jaque = 0;
  int filaCambio = filaAlfil;
  int columnaCambio = columnaAlfil;
  while (filaCambio < 8 && columnaCambio < 8 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = 8;
	  columnaCambio = 8;
	}
      filaCambio++;
      columnaCambio++;
    }
  verificarMovimiento = 1;
  filaCambio = filaAlfil;
  columnaCambio = columnaAlfil;
  while (filaCambio >= 0 && columnaCambio < 8 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = -1;
	  columnaCambio = 8;
	}
      filaCambio--;
      columnaCambio++;
    }
  verificarMovimiento = 1;
  filaCambio = filaAlfil;
  columnaCambio = columnaAlfil;
  while (filaCambio < 8 && columnaCambio >= 0 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = 8;
	  columnaCambio = -1;
	}
      filaCambio++;
      columnaCambio--;
    }
  verificarMovimiento = 1;
  filaCambio = filaAlfil;
  columnaCambio = columnaAlfil;
  while (filaCambio >= 0 && columnaCambio >= 0 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = -1;
	  columnaCambio = -1;
	}
      filaCambio--;
      columnaCambio--;
    }
  return jaque;
}

void
moverRey (int *posicionInicial, int *posicionFinal)
{
  int pieza = (*posicionInicial);
  (*posicionFinal) = pieza;
  (*posicionInicial) = 0;
  return;
}

void
comerRey (int *posicionPiezaCome, int *posicionPiezaComida)
{
  int pieza = (*posicionPiezaCome);
  (*posicionPiezaComida) = pieza;
  (*posicionPiezaCome) = 0;
  return;
}

int
detectarJaqueRey (int tablero[8][8])
{
  int jaque = 0;
  int casos[30];
  int fila = 0;
  int columna = 0;
  int pieza = 0;
  int contadorCasos = 0;
  int filaReyBlanco = 0;
  int columnaReyBlanco = 0;
  int filaReyNegro = 0;
  int columnaReyNegro = 0;
  while (fila < 8)
    {
      while (columna < 8)
	{
	  pieza = tablero[fila][columna];
	  switch (pieza)
	    {
	    case 1:
	      filaReyBlanco = fila;
	      columnaReyBlanco = columna;
	      break;
	    case -1:
	      filaReyNegro = fila;
	      columnaReyNegro = columna;
	      break;
	    default:
	      break;
	    }
	  columna++;
	}
      fila++;
    }
  fila = 0;
  columna = 0;
  while (fila < 8)
    {
      while (columna < 8)
	{
	  pieza = tablero[fila][columna];
	  switch (pieza)
	    {
	    case 2:
	      casos[contadorCasos] =
		hacerJaqueReina (tablero, fila, columna, filaReyNegro,
				 columnaReyNegro);
	      contadorCasos++;
	      break;
	    case -2:
	      casos[contadorCasos] =
		hacerJaqueReina (tablero, fila, columna, filaReyBlanco,
				 columnaReyBlanco);
	      contadorCasos++;
	      break;
	    case 3:
	      casos[contadorCasos] =
		hacerJaqueAlfil (tablero, fila, columna, filaReyNegro,
				 columnaReyNegro);
	      contadorCasos++;
	      break;
	    case -3:
	      casos[contadorCasos] =
		hacerJaqueAlfil (tablero, fila, columna, filaReyBlanco,
				 columnaReyBlanco);
	      contadorCasos++;
	      break;
	    case 4:
	      casos[contadorCasos] =
		hacerJaqueCaballo (fila, columna, filaReyNegro,
				   columnaReyNegro);
	      contadorCasos++;
	      break;
	    case -4:
	      casos[contadorCasos] =
		hacerJaqueCaballo (fila, columna, filaReyBlanco,
				   columnaReyBlanco);
	      contadorCasos++;
	      break;
	    case 5:
	      casos[contadorCasos] =
		hacerJaqueTorre (tablero, fila, columna, filaReyNegro,
				 columnaReyNegro);
	      contadorCasos++;
	      break;
	    case -5:
	      casos[contadorCasos] =
		hacerJaqueTorre (tablero, fila, columna, filaReyBlanco,
				 columnaReyBlanco);
	      contadorCasos++;
	      break;
	    case 6:
	      casos[contadorCasos] =
		hacerJaquePeon (fila, columna, filaReyNegro, columnaReyNegro);
	      contadorCasos++;
	      break;
	    case -6:
	      casos[contadorCasos] =
		hacerJaquePeon (fila, columna, filaReyBlanco,
				columnaReyBlanco);
	      contadorCasos++;
	      break;
	    default:
	      break;
	    }
	  columna++;
	}
      fila++;
    }
  contadorCasos = 0;
  while (contadorCasos < 30)
    {
      if ((casos[contadorCasos]) == 1)
	{
	  jaque = 1;
	}
      contadorCasos++;
    }
  contadorCasos = 0;
  while (contadorCasos < 30)
    {
      if ((casos[contadorCasos]) == 2)
	{
	  jaque = 2;
	}
      contadorCasos++;
    }
  return jaque;
}

void
moverReina (int *posicionInicial, int *posicionFinal)
{
  int pieza = (*posicionInicial);
  (*posicionFinal) = pieza;
  (*posicionInicial) = 0;
  return;
}

void
comerReina (int *posicionPiezaCome, int *posicionPiezaComida)
{
  int pieza = (*posicionPiezaCome);
  (*posicionPiezaComida) = pieza;
  (*posicionPiezaCome) = 0;
  return;
}

int
hacerJaqueReina (int tablero[8][8], int filaReina, int columnaReina,
		 int filaRey, int columnaRey)
{
  int verificarMovimiento = 1;
  int jaque = 0;
  int filaCambio = filaReina;
  int columnaCambio = columnaReina;
  while (filaCambio < 8 && columnaCambio < 8 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = 8;
	  columnaCambio = 8;
	}
      filaCambio++;
      columnaCambio++;
    }
  verificarMovimiento = 1;
  filaCambio = filaReina;
  columnaCambio = columnaReina;
  while (filaCambio >= 0 && columnaCambio < 8 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = -1;
	  columnaCambio = 8;
	}
      filaCambio--;
      columnaCambio++;
    }
  verificarMovimiento = 1;
  filaCambio = filaReina;
  columnaCambio = columnaReina;
  while (filaCambio < 8 && columnaCambio >= 0 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = 8;
	  columnaCambio = -1;
	}
      filaCambio++;
      columnaCambio--;
    }
  verificarMovimiento = 1;
  filaCambio = filaReina;
  columnaCambio = columnaReina;
  while (filaCambio >= 0 && columnaCambio >= 0 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = -1;
	  columnaCambio = -1;
	}
      filaCambio--;
      columnaCambio--;
    }
  verificarMovimiento = 1;
  filaCambio = filaReina;
  columnaCambio = columnaReina;
  while (filaCambio < 8 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = 8;
	}
      filaCambio++;
    }
  verificarMovimiento = 1;
  filaCambio = filaReina;
  columnaCambio = columnaReina;
  while (filaCambio >= 0 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  filaCambio = -1;
	}
      filaCambio--;
    }
  verificarMovimiento = 1;
  filaCambio = filaReina;
  columnaCambio = columnaReina;
  while (columnaCambio < 8 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  columnaCambio = 8;
	}
      columnaCambio++;
    }
  verificarMovimiento = 1;
  filaCambio = filaReina;
  columnaCambio = columnaReina;
  while (columnaCambio >= 0 && verificarMovimiento == 1)
    {
      if (tablero[filaCambio][columnaCambio] != 0
	  || tablero[filaCambio][columnaCambio] != -1
	  || tablero[filaCambio][columnaCambio] != 1)
	{
	  verificarMovimiento = 0;
	}
      else
	{
	  verificarMovimiento = 1;
	}
      if (verificarMovimiento = 1 && filaRey == filaCambio
	  && columnaRey == columnaCambio)
	{
	  if (tablero[filaRey][columnaRey] > 0)
	    {
	      jaque = 1;
	    }
	  else
	    {
	      jaque = 2;
	    }
	  columnaCambio = -1;
	}
      columnaCambio--;
    }
  return jaque;
}

void
enrocar (int *tablero[8][8], int valorRey)
{
  if (valorRey == -1)
    {
      if ((*tablero[0][4]) == -1)
	{
	  if ((*tablero[0][0]) == -5)
	    {
	      if ((*tablero[0][1]) == 0 && (*tablero[0][2]) == 0)
		{
		  (*tablero[0][4]) = 0;
		  (*tablero[0][0]) = 0;
		  (*tablero[0][1]) = -1;
		  (*tablero[0][2]) = -5;
		}
	    }
	  else if ((*tablero[0][7]) == -5)
	    {
	      if ((*tablero[0][5]) == 0 && (*tablero[0][6]) == 0)
		{
		  (*tablero[0][4]) = 0;
		  (*tablero[0][7]) = 0;
		  (*tablero[0][6]) = -1;
		  (*tablero[0][5]) = -5;
		}
	    }
	}
    }
  else if (valorRey == 1)
    {
      if ((*tablero[7][4]) == 1)
	{
	  if ((*tablero[7][0]) == 5)
	    {
	      if ((*tablero[7][1]) == 0 && (*tablero[7][2]) == 0)
		{
		  (*tablero[7][4]) = 0;
		  (*tablero[7][0]) = 0;
		  (*tablero[7][1]) = 1;
		  (*tablero[7][2]) = 5;
		}
	    }
	  else if ((*tablero[7][7]) == 5)
	    {
	      if ((*tablero[7][5]) == 0 && (*tablero[7][6]) == 0)
		{
		  (*tablero[7][4]) = 0;
		  (*tablero[7][7]) = 0;
		  (*tablero[7][6]) = 1;
		  (*tablero[7][5]) = 5;
		}
	    }
	}
    }
  return;
}
