#include "movimientos.h"


void
moverInicialmentePeon (int *posicionInicialPeon, int *posicionFinalPeon)
{
  int piezaValor = *posicionInicialPeon;

  *posicionInicialPeon = 0;

  *posicionFinalPeon = piezaValor;
}



int
comerPeon (int *filaInicialPeon, int *columnaInicialPeon, int filaPiezaAComer,
	   int columnaPiezaAComer, char colorPeon, int filaReyEnemigo,
	   int columnaReyEnemigo)
{

  if ((filaPiezaAComer == filaReyEnemigo)
      && (columnaPiezaAComer == columnaReyEnemigo))

    {

      printf ("No puedes comer al rey enemigo");

      return 0;

    }

  else

    {

      *filaInicialPeon = filaPiezaAComer;

      *columnaInicialPeon = columnaPiezaAComer;

      return 1;

    }
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
		char colorPeon, int filaReyEnemigo, int columnaReyEnemigo)
{


  int filaPD = 0;
  int filaPI = 0;
  int columnaP = 0;

  if (colorPeon == 'b')
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
  else
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

int
comerTorre (int *filaInicialTorre, int *columnaInicialTorre,
	    int filaPiezaAComer, int columnaPiezaAComer, int filaReyEnemigo,
	    int columnaReyEnemigo)
{
  if (verificarMovimientoTorre
      (*columnaInicialTorre, *filaInicialTorre, columnaPiezaAComer,
       filaPiezaAComer) != 0)
    {
      if (filaPiezaAComer == filaReyEnemigo
	  && columnaPiezaAComer == columnaReyEnemigo)
	{
	  printf ("No puedes comerte al rey \n");
	  return 0;
	}
      else
	{
	  *filaInicialTorre = filaPiezaAComer;
	  *columnaInicialTorre = columnaPiezaAComer;
	  columnaPiezaAComer = 0;
	  filaPiezaAComer = 0;
	  return 1;
	}
    }
  return 0;
}




int
moverTorre (int *filaInicialTorre, int *columnaInicialTorre,
	    int filaDestinoTorre, int columnaDestinoTorre)
{
  if (verificarMovimientoTorre
      (*columnaInicialTorre, *filaInicialTorre, columnaDestinoTorre,
       filaDestinoTorre) != 0)
    {
      if (verificarDestinoDesocupado (columnaDestinoTorre, filaDestinoTorre)
	  != 0)
	{
	  *filaInicialTorre = filaDestinoTorre;
	  *columnaInicialTorre = columnaDestinoTorre;
	  return 1;
	}
      else
	{
	  printf ("Destino Ocupado");
	  return 0;
	}
    }
  else
    {
      printf ("Movimiento Invalido de Torre");
      return 0;
    }
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


int
comerCaballo (int *filaInicialCaballo, int *columnaInicialCaballo,
	      int filaPiezaAComer, int columnaPiezaAComer,
	      int colorCaballo, int filaReyEnemigo, int columnaReyEnemigo)
{

  if ((filaPiezaAComer == filaReyEnemigo)
      && (columnaPiezaAComer == columnaReyEnemigo))
    {
      printf ("No puedes comer al rey enemigo");
      return 0;
    }
  else
    {
      *filaInicialCaballo = filaPiezaAComer;
      *columnaInicialCaballo = columnaPiezaAComer;
      return 1;
    }
}

int
hacerJaqueCaballo (int filaInicialCaballo, int columnaInicialCaballo,
		   int colorCaballo, int filaReyEnemigo,
		   int columnaReyEnemigo)
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

int
moverCaballo (int *filaInicialCaballo, int *columnaInicialCaballo,
	      int filaDestinoCaballo, int columnaDestinoCaballo,
	      int colorCaballo, int filaReyEnemigo, int columnaReyEnemigo)
{
  int ubicacionInicialHorizontal = (*filaInicialCaballo);
  int ubicacionInicialVertical = (*columnaInicialCaballo);

  int movimientoValido = verificarMovimientoCaballo (ubicacionInicialVertical,
						     ubicacionInicialHorizontal,
						     columnaDestinoCaballo,
						     filaDestinoCaballo);
  int jaque = 0;
  int casillaDesocupada =
    verificarDestinoDesocupado (columnaDestinoCaballo, filaDestinoCaballo);

  if (movimientoValido == 1)
    {

      if (casillaDesocupada == 1)
	{
	  *filaInicialCaballo = filaDestinoCaballo;
	  *columnaInicialCaballo = columnaDestinoCaballo;

	  jaque =
	    hacerJaqueCaballo (filaDestinoCaballo, columnaDestinoCaballo,
			       colorCaballo, filaReyEnemigo,
			       columnaReyEnemigo);

	  if (jaque == 1)
	    {
	      printf ("Jaque!");
	    }
	  return 1;

	}
      else
	{
	  int comer = comerCaballo (filaInicialCaballo, columnaInicialCaballo,
				    filaDestinoCaballo, columnaDestinoCaballo,
				    colorCaballo, filaReyEnemigo,
				    columnaReyEnemigo);
	  jaque =
	    hacerJaqueCaballo (filaDestinoCaballo, columnaDestinoCaballo,
			       colorCaballo, filaReyEnemigo,
			       columnaReyEnemigo);

	  if (jaque == 1)
	    {
	      printf ("Jaque!");
	    }

	  if (comer == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

	}
    }
  else
    {
      printf ("No es un movimiento valido");
      return 0;
    }

}

void
moverAlfil (int *ubicacionHorizontal, int *ubicacionVertical,
	    int nuevaUbicacionHorizontal, int nuevaUbicacionVertical)
{
  int error = 0;
  int lugaresMoverHorizontal = 0;
  int lugaresMoverVertical = 0;
  if (nuevaUbicacionHorizontal > (*ubicacionHorizontal)
      && nuevaUbicacionVertical > (*ubicacionHorizontal))
    {
      lugaresMoverHorizontal =
	nuevaUbicacionHorizontal - (*ubicacionHorizontal);
      lugaresMoverVertical = nuevaUbicacionVertical - (*ubicacionVertical);
      if (lugaresMoverHorizontal != lugaresMoverVertical)
	{
	  error = 0;
	}
    }
  else if (nuevaUbicacionHorizontal < (*ubicacionHorizontal)
	   && nuevaUbicacionVertical > (*ubicacionHorizontal))
    {
      lugaresMoverHorizontal =
	(*ubicacionHorizontal) - nuevaUbicacionHorizontal;
      lugaresMoverVertical = nuevaUbicacionVertical - (*ubicacionVertical);
      if (lugaresMoverHorizontal != lugaresMoverVertical)
	{
	  error = 0;
	}
    }
  else if (nuevaUbicacionHorizontal > (*ubicacionHorizontal)
	   && nuevaUbicacionVertical < (*ubicacionHorizontal))
    {
      lugaresMoverHorizontal =
	nuevaUbicacionHorizontal - (*ubicacionHorizontal);
      lugaresMoverVertical = (*ubicacionVertical) - nuevaUbicacionVertical;
      if (lugaresMoverHorizontal != lugaresMoverVertical)
	{
	  error = 0;
	}
    }
  else if (nuevaUbicacionHorizontal < (*ubicacionHorizontal)
	   && nuevaUbicacionVertical < (*ubicacionHorizontal))
    {
      lugaresMoverHorizontal =
	(*ubicacionHorizontal) - nuevaUbicacionHorizontal;
      lugaresMoverVertical = (*ubicacionVertical) - nuevaUbicacionVertical;
      if (lugaresMoverHorizontal != lugaresMoverVertical)
	{
	  error = 0;
	}
    }
  else
    {
      error = 0;
    }
  if (error != 0)
    {
      *ubicacionHorizontal = nuevaUbicacionHorizontal;
      *ubicacionVertical = nuevaUbicacionVertical;
    }
  return;
}

void
comerAlfil (int *ubicacionHorizontal, int *ubicacionVertical,
	    int *ubicacionHorizontalPiezaEliminar,
	    int *ubicacionVerticalPiezaEliminar)
{
  moverAlfil (ubicacionHorizontal, ubicacionVertical,
	      (*ubicacionHorizontalPiezaEliminar),
	      (*ubicacionVerticalPiezaEliminar));
  (*ubicacionHorizontalPiezaEliminar) = 0;
  (*ubicacionVerticalPiezaEliminar) = 0;
  return;
}

int
hacerJaqueAlfil (int ubicacionHorizontal,
		 int ubicacionVertical, int ubicacionHorizontalRey,
		 int ubicacionVerticalRey, char colorRey)
{
  int verificarMovimiento = 1;
  int jaque = 0;
  int ubicacionHorizontalCambio = ubicacionHorizontal;
  int ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio <= 8 || ubicacionVerticalCambio <= 8)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  else if (colorRey == 'n')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio >= 1 || ubicacionVerticalCambio <= 8)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  else if (colorRey == 'n')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio <= 8 || ubicacionVerticalCambio >= 1)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  else if (colorRey == 'n')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio >= 1 || ubicacionVerticalCambio >= 1)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  else if (colorRey == 'n')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio--;
    }
  return jaque;
}

void
moverRey (int *ubicacionHorizontal, int *ubicacionVertical,
	  int nuevaUbicacionHorizontal, int nuevaUbicacionVertical)
{
  int error = 0;
  int lugaresMoverHorizontal = 0;
  int lugaresMoverVertical = 0;
  if (nuevaUbicacionHorizontal > (*ubicacionHorizontal))
    {
      lugaresMoverHorizontal =
	nuevaUbicacionHorizontal - (*ubicacionHorizontal);
    }
  else
    {
      lugaresMoverHorizontal =
	(*ubicacionVertical) - nuevaUbicacionHorizontal;
    }
  if (nuevaUbicacionVertical > (*ubicacionVertical))
    {
      lugaresMoverVertical = nuevaUbicacionVertical - (*ubicacionVertical);
    }
  else
    {
      lugaresMoverVertical = (*ubicacionVertical) - nuevaUbicacionHorizontal;
    }
  if (lugaresMoverHorizontal > 1 || lugaresMoverVertical > 1)
    {
      error = 0;
    }
  else
    {
      *ubicacionHorizontal = nuevaUbicacionHorizontal;
      *ubicacionVertical = nuevaUbicacionVertical;

    }
  return;
}

void
comerRey (int *ubicacionHorizontal, int *ubicacionVertical,
	  int *ubicacionHorizontalPiezaEliminar,
	  int *ubicacionVerticalPiezaEliminar)
{
  moverRey (ubicacionHorizontal, ubicacionVertical,
	    (*ubicacionHorizontalPiezaEliminar),
	    (*ubicacionVerticalPiezaEliminar));
  (*ubicacionHorizontalPiezaEliminar) = 0;
  (*ubicacionVerticalPiezaEliminar) = 0;
  return;
}

int
detectarJaqueRey (int peonHorizontal1, int peonVertical1, char peonColor1,
		  int peonHorizontal2, int peonVertical2, char peonColor2,
		  int peonHorizontal3, int peonVertical3, char peonColor3,
		  int peonHorizontal4, int peonVertical4, char peonColor4,
		  int peonHorizontal5, int peonVertical5, char peonColor5,
		  int peonHorizontal6, int peonVertical6, char peonColor6,
		  int peonHorizontal7, int peonVertical7, char peonColor7,
		  int peonHorizontal8, int peonVertical8, char peonColor8,
		  int peonHorizontal9, int peonVertical9, char peonColor9,
		  int peonHorizontal10, int peonVertical10, char peonColor10,
		  int peonHorizontal11, int peonVertical11, char peonColor11,
		  int peonHorizontal12, int peonVertical12, char peonColor12,
		  int peonHorizontal13, int peonVertical13, char peonColor13,
		  int peonHorizontal14, int peonVertical14, char peonColor14,
		  int peonHorizontal15, int peonVertical15, char peonColor15,
		  int peonHorizontal16, int peonVertical16, char peonColor16,
		  int alfilHorizontal1, int alfilVertical1, char alfilColor1,
		  int alfilHorizontal2, int alfilVertical2, char alfilColor2,
		  int alfilHorizontal3, int alfilVertical3, char alfilColor3,
		  int alfilHorizontal4, int alfilVertical4, char alfilColor4,
		  int torreHorizontal1, int torreVertical1, char torreColor1,
		  int torreHorizontal2, int torreVertical2, char torreColor2,
		  int torreHorizontal3, int torreVertical3, char torreColor3,
		  int torreHorizontal4, int torreVertical4, char torreColor4,
		  int caballoHorizontal1, int caballoVertical1,
		  char caballoColor1, int caballoHorizontal2,
		  int caballoVertical2, char caballoColor2,
		  int caballoHorizontal3, int caballoVertical3,
		  char caballoColor3, int caballoHorizontal4,
		  int caballoVertical4, char caballoColor4,
		  int reinaHorizontal1, int reinaVertical1, char reinaColor1,
		  int reinaHorizontal2, int reinaVertical2, char reinaColor2,
		  int reyHorizontal1, int reyVertical1, char reyColor1,
		  int reyHorizontal2, int reyVertical2, char reyColor2)
{
  return 0;
}

void
moverReina (int *ubicacionHorizontal, int *ubicacionVertical,
	    int nuevaUbicacionHorizontal, int nuevaUbicacionVertical)
{
  int error = 0;
  int lugaresMoverHorizontal = 0;
  int lugaresMoverVertical = 0;
  if (nuevaUbicacionHorizontal > (*ubicacionHorizontal))
    {
      lugaresMoverHorizontal =
	nuevaUbicacionHorizontal - (*ubicacionHorizontal);
    }
  else
    {
      lugaresMoverHorizontal =
	(*ubicacionVertical) - nuevaUbicacionHorizontal;
    }
  if (nuevaUbicacionVertical > (*ubicacionVertical))
    {
      lugaresMoverVertical = nuevaUbicacionVertical - (*ubicacionVertical);
    }
  else
    {
      lugaresMoverVertical = (*ubicacionVertical) - nuevaUbicacionHorizontal;
    }
  if (lugaresMoverHorizontal != lugaresMoverVertical
      || lugaresMoverHorizontal == 0 || lugaresMoverVertical == 0)
    {
      error = 0;
    }
  else
    {
      *ubicacionHorizontal = nuevaUbicacionHorizontal;
      *ubicacionVertical = nuevaUbicacionVertical;
    }
  return;
}

void
comerReina (int *ubicacionHorizontal, int *ubicacionVertical,
	    int *ubicacionHorizontalPiezaEliminar,
	    int *ubicacionVerticalPiezaEliminar)
{
  moverReina (ubicacionHorizontal, ubicacionVertical,
	      (*ubicacionHorizontalPiezaEliminar),
	      (*ubicacionVerticalPiezaEliminar));
  (*ubicacionHorizontalPiezaEliminar) = 0;
  (*ubicacionVerticalPiezaEliminar) = 0;
  return;
}

int
hacerJaqueReina (int ubicacionHorizontal,
		 int ubicacionVertical, int ubicacionHorizontalRey,
		 int ubicacionVerticalRey, char colorRey)
{
  int verificarMovimiento = 1;
  int jaque = 0;
  int ubicacionHorizontalCambio = ubicacionHorizontal;
  int ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio <= 8 || ubicacionVerticalCambio <= 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio <= 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 8;
	}
      ubicacionHorizontalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  while (ubicacionHorizontalCambio <= 8 || ubicacionVerticalCambio >= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionVerticalCambio >= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionVerticalCambio = 1;
	}
      ubicacionVerticalCambio--;
    }
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio >= 1 || ubicacionVerticalCambio >= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio >= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 1;
	}
      ubicacionHorizontalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  while (ubicacionHorizontalCambio >= 1 || ubicacionVerticalCambio <= 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionVerticalCambio <= 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorRey == 'b')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  else if (colorRey == 'n')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  ubicacionVerticalCambio++;
	}
      ubicacionVerticalCambio++;
    }
  return jaque;
}


int
enrocar (int contadorMovimientosRey, int contadorMovimientosTorre,
	 int *ubicacionHorizontalRey, int *ubicacionHorizontalTorre,
	 int *movimientosLimite)
{
  int error = 0;
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
      error = 1;
      *movimientosLimite++;
    }
  else
    {
      printf ("No se puede hacer el enroque\n");
      error = 0;
    }
  return error;
}
