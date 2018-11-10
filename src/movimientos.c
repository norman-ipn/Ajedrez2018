#include "movimientos.h"


int
moverInicialmentePeon (int *filaInicialPeon, int *columnaInicialPeon,
		       int filaDestinoPeon, int columnaDestinoPeon,
		       char colorPeon)
{
  if (colorPeon == 'B')
    {
      if (*filaInicialPeon == 2)
	{
	  *columnaInicialPeon = columnaDestinoPeon;
	}
      return 1;
    }
  else
    {
      if (colorPeon == 'N')
	{
	  if (*filaInicialPeon == 7)
	    {
	      *columnaInicialPeon = columnaDestinoPeon;
	    }
	  return 1;
	}
    }
  return 0;
}



int
comerPeon (int *filaIniciarPeon, int *columnaIniciarPeon, int filaPiezComer,
	   int columnaPiezaComer, char colorPeon, int filaReyEnemigo,
	   int columnaReyEnemigo)
{

  return 0;
}

int
moverPeon (int *filaInicialPeon, int *columnaInicialPeon, int filaDestinoPeon,
	   int columnaDestinoPeon, char colorPeon, int filaReyEnemigo,
	   int columnaReyEnemigo)
{
  int verificarMovimiento = 0;
  verificarMovimiento =
    verificarMovimientoPeon (*columnaInicialPeon, *filaInicialPeon,
			     columnaDestinoPeon, filaDestinoPeon);
  if (verificarMovimiento == 1)
    {
      if (*filaInicialPeon == filaDestinoPeon)
	{
	  int moverCasillas = 0;
	  moverCasillas = *columnaInicialPeon - columnaDestinoPeon;
	  if (moverCasillas > 0)
	    {
	      if (moverCasillas == 2)
		{
		  int estadoMovimiento =
		    moverInicialmentePeon (filaInicialPeon,
					   columnaInicialPeon,
					   filaDestinoPeon,
					   columnaDestinoPeon, colorPeon);
		  if (estadoMovimiento == 0)
		    {
		      return 0;
		    }
		}
	      else
		{
		  *columnaInicialPeon = columnaDestinoPeon;
		}
	    }
	  else
	    {
	      if (moverCasillas == -2)
		{
		  int estadoMovimiento =
		    moverInicialmentePeon (filaInicialPeon,
					   columnaInicialPeon,
					   filaDestinoPeon,
					   columnaDestinoPeon, colorPeon);
		  if (estadoMovimiento == 0)
		    {
		      return 0;
		    }
		}
	      else
		{
		  *columnaInicialPeon = columnaDestinoPeon;
		}
	    }
	}
    }
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


int
comerTorre (int *filaInicialTorre, int *columnaInicialTorre,
	    int filaPiezaAComer, int columnaPiezaAComer, int filaReyEnemigo,
	    int columnaReyEnemigo)
{
  if (verificarMovimientoTorre
      (*columnaInicialTorre, *filaInicialTorre, columnaDestinoTorre,
       filaDestinoTorre) != 0)
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

int *filaInicialCaballo, int *columnaInicialCaballo, int filaPiezaAComer,
  int columnaPiezaAComer, char colorCaballo, int filaReyEnemigo,
  int columnaReyEnemigo int
hacerJaqueTorre (int filaInicialTorre, int columnaInicialTorre,
		 int filaReyEnemigo, int columnaReyEnemigo)
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
	  printf ("Jaque!");
	  return 1;
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
	      printf ("Jaque!");
	      return 1;
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

int
moverAlfil (int *ubicacionHorizontal, int *ubicacionVertical,
	    int nuevaUbicacionHorizontal, int nuevaUbicacionVertical,
	    int *movimientosLimite)
{
  int verificarMovimiento = 1;
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
      verificarMovimiento =
	verificarMovimientoAlfil (*ubicacionHorizontal, *ubicacionVertical,
				  nuevaUbicacionHorizontal,
				  nuevaUbicacionVertical);
      switch (verificarMovimiento)
	{
	case 1:
	  error = 0;
	  break;
	case 2:
	  *ubicacionHorizontal = nuevaUbicacionHorizontal;
	  *ubicacionVertical = nuevaUbicacionVertical;
	  *movimientosLimite++;
	  error = 1;
	  break;
	case 3:
	  *ubicacionHorizontal = nuevaUbicacionHorizontal;
	  *ubicacionVertical = nuevaUbicacionVertical;
	  *movimientosLimite = 0;
	  error = 2;
	  break;
	}
    }
  return error;
}

void
comerAlfil (char color, int ubicacionHorizontal, int ubicacionVertical,
	    int *peonHorizontal1, int *peonVertical1, char peonColor1,
	    int *peonHorizontal2, int *peonVertical2, char peonColor2,
	    int *peonHorizontal3, int *peonVertical3, char peonColor3,
	    int *peonHorizontal4, int *peonVertical4, char peonColor4,
	    int *peonHorizontal5, int *peonVertical5, char peonColor5,
	    int *peonHorizontal6, int *peonVertical6, char peonColor6,
	    int *peonHorizontal7, int *peonVertical7, char peonColor7,
	    int *peonHorizontal8, int *peonVertical8, char peonColor8,
	    int *peonHorizontal9, int *peonVertical9, char peonColor9,
	    int *peonHorizontal10, int *peonVertical10, char peonColor10,
	    int *peonHorizontal11, int *peonVertical11, char peonColor11,
	    int *peonHorizontal12, int *peonVertical12, char peonColor12,
	    int *peonHorizontal13, int *peonVertical13, char peonColor13,
	    int *peonHorizontal14, int *peonVertical14, char peonColor14,
	    int *peonHorizontal15, int *peonVertical15, char peonColor15,
	    int *peonHorizontal16, int *peonVertical16, char peonColor16,
	    int *alfilHorizontal1, int *alfilVertical1, char alfilColor1,
	    int *alfilHorizontal2, int *alfilVertical2, char alfilColor2,
	    int *alfilHorizontal3, int *alfilVertical3, char alfilColor3,
	    int *alfilHorizontal4, int *alfilVertical4, char alfilColor4,
	    int *torreHorizontal1, int *torreVertical1, char torreColor1,
	    int *torreHorizontal2, int *torreVertical2, char torreColor2,
	    int *torreHorizontal3, int *torreVertical3, char torreColor3,
	    int *torreHorizontal4, int *torreVertical4, char torreColor4,
	    int *caballoHorizontal1, int *caballoVertical1,
	    char caballoColor1, int *caballoHorizontal2,
	    int *caballoVertical2, char caballoColor2,
	    int *caballoHorizontal3, int *caballoVertical3,
	    char caballoColor3, int *caballoHorizontal4,
	    int *caballoVertical4, char caballoColor4, int *reinaHorizontal1,
	    int *reinaVertical1, char reinaColor1, int *reinaHorizontal2,
	    int *reinaVertical2, char reinaColor2, int *reyHorizontal1,
	    int *reyVertical1, char reyColor1, int *reyHorizontal2,
	    int *reyVertical2, char reyColor2)
{
  if (color != peonColor1 && ubicacionHorizontal == *peonHorizontal1
      && ubicacionVertical == *peonVertical1)
    {
      *peonHorizontal1 = 0;
      *peonVertical1 = 0;
    }
  if (color != peonColor2 && ubicacionHorizontal == *peonHorizontal2
      && ubicacionVertical == *peonVertical2)
    {
      *peonHorizontal2 = 0;
      *peonVertical2 = 0;
    }
  if (color != peonColor3 && ubicacionHorizontal == *peonHorizontal3
      && ubicacionVertical == *peonVertical3)
    {
      *peonHorizontal3 = 0;
      *peonVertical3 = 0;
    }
  if (color != peonColor4 && ubicacionHorizontal == *peonHorizontal4
      && ubicacionVertical == *peonVertical4)
    {
      *peonHorizontal4 = 0;
      *peonVertical4 = 0;
    }
  if (color != peonColor5 && ubicacionHorizontal == *peonHorizontal5
      && ubicacionVertical == *peonVertical5)
    {
      *peonHorizontal5 = 0;
      *peonVertical5 = 0;
    }
  if (color != peonColor6 && ubicacionHorizontal == *peonHorizontal6
      && ubicacionVertical == *peonVertical6)
    {
      *peonHorizontal6 = 0;
      *peonVertical6 = 0;
    }
  if (color != peonColor7 && ubicacionHorizontal == *peonHorizontal7
      && ubicacionVertical == *peonVertical7)
    {
      *peonHorizontal7 = 0;
      *peonVertical7 = 0;
    }
  if (color != peonColor8 && ubicacionHorizontal == *peonHorizontal8
      && ubicacionVertical == *peonVertical8)
    {
      *peonHorizontal8 = 0;
      *peonVertical8 = 0;
    }
  if (color != peonColor9 && ubicacionHorizontal == *peonHorizontal9
      && ubicacionVertical == *peonVertical9)
    {
      *peonHorizontal9 = 0;
      *peonVertical9 = 0;
    }
  if (color != peonColor10 && ubicacionHorizontal == *peonHorizontal10
      && ubicacionVertical == *peonVertical10)
    {
      *peonHorizontal10 = 0;
      *peonVertical10 = 0;
    }
  if (color != peonColor11 && ubicacionHorizontal == *peonHorizontal11
      && ubicacionVertical == *peonVertical11)
    {
      *peonHorizontal11 = 0;
      *peonVertical11 = 0;
    }
  if (color != peonColor12 && ubicacionHorizontal == *peonHorizontal12
      && ubicacionVertical == *peonVertical12)
    {
      *peonHorizontal12 = 0;
      *peonVertical12 = 0;
    }
  if (color != peonColor13 && ubicacionHorizontal == *peonHorizontal13
      && ubicacionVertical == *peonVertical13)
    {
      *peonHorizontal13 = 0;
      *peonVertical13 = 0;
    }
  if (color != peonColor14 && ubicacionHorizontal == *peonHorizontal14
      && ubicacionVertical == *peonVertical14)
    {
      *peonHorizontal14 = 0;
      *peonVertical14 = 0;
    }
  if (color != peonColor15 && ubicacionHorizontal == *peonHorizontal15
      && ubicacionVertical == *peonVertical15)
    {
      *peonHorizontal15 = 0;
      *peonVertical15 = 0;
    }
  if (color != peonColor16 && ubicacionHorizontal == *peonHorizontal16
      && ubicacionVertical == *peonVertical16)
    {
      *peonHorizontal16 = 0;
      *peonVertical16 = 0;
    }
  if (color != alfilColor1 && ubicacionHorizontal == *alfilHorizontal1
      && ubicacionVertical == *alfilVertical1)
    {
      *alfilHorizontal1 = 0;
      *alfilVertical1 = 0;
    }
  if (color != alfilColor2 && ubicacionHorizontal == *alfilHorizontal2
      && ubicacionVertical == *alfilVertical2)
    {
      *alfilHorizontal2 = 0;
      *alfilVertical2 = 0;
    }
  if (color != alfilColor3 && ubicacionHorizontal == *alfilHorizontal3
      && ubicacionVertical == *alfilVertical3)
    {
      *alfilHorizontal3 = 0;
      *alfilVertical3 = 0;
    }
  if (color != alfilColor4 && ubicacionHorizontal == *alfilHorizontal4
      && ubicacionVertical == *alfilVertical4)
    {
      *alfilHorizontal4 = 0;
      *alfilVertical4 = 0;
    }

  if (color != torreColor1 && ubicacionHorizontal == *torreHorizontal1
      && ubicacionVertical == *torreVertical1)
    {
      *torreHorizontal1 = 0;
      *torreVertical1 = 0;
    }
  if (color != torreColor2 && ubicacionHorizontal == *torreHorizontal2
      && ubicacionVertical == *torreVertical2)
    {
      *torreHorizontal2 = 0;
      *torreVertical2 = 0;
    }
  if (color != torreColor3 && ubicacionHorizontal == *torreHorizontal3
      && ubicacionVertical == *torreVertical3)
    {
      *torreHorizontal3 = 0;
      *torreVertical3 = 0;
    }
  if (color != torreColor4 && ubicacionHorizontal == *torreHorizontal4
      && ubicacionVertical == *torreVertical4)
    {
      *torreHorizontal4 = 0;
      *torreVertical4 = 0;
    }
  if (color != caballoColor1 && ubicacionHorizontal == *caballoHorizontal1
      && ubicacionVertical == *caballoVertical1)
    {
      *caballoHorizontal1 = 0;
      *caballoVertical1 = 0;
    }
  if (color != caballoColor2 && ubicacionHorizontal == *caballoHorizontal2
      && ubicacionVertical == *caballoVertical2)
    {
      *caballoHorizontal2 = 0;
      *caballoVertical2 = 0;
    }
  if (color != caballoColor3 && ubicacionHorizontal == *caballoHorizontal3
      && ubicacionVertical == *caballoVertical3)
    {
      *caballoHorizontal3 = 0;
      *caballoVertical3 = 0;
    }
  if (color != caballoColor4 && ubicacionHorizontal == *caballoHorizontal4
      && ubicacionVertical == *caballoVertical4)
    {
      *caballoHorizontal4 = 0;
      *caballoVertical4 = 0;
    }
  if (color != reyColor1 && ubicacionHorizontal == *reyHorizontal1
      && ubicacionVertical == *reyVertical1)
    {
      *reyHorizontal1 = 0;
      *reyVertical1 = 0;
    }
  if (color != reyColor2 && ubicacionHorizontal == *reyHorizontal2
      && ubicacionVertical == *reyVertical2)
    {
      *reyHorizontal2 = 0;
      *reyVertical2 = 0;
    }
  if (color != reinaColor1 && ubicacionHorizontal == *reinaHorizontal1
      && ubicacionVertical == *reinaVertical1)
    {
      *reinaHorizontal1 = 0;
      *reinaVertical1 = 0;
    }
  if (color != reinaColor2 && ubicacionHorizontal == *reinaHorizontal2
      && ubicacionVertical == *reinaVertical2)
    {
      *reinaHorizontal2 = 0;
      *reinaVertical2 = 0;
    }
  return;
}

int
hacerJaqueAlfil (char colorAlfil, int ubicacionHorizontal,
		 int ubicacionVertical, int ubicacionHorizontalRey,
		 int ubicacionVerticalRey)
{
  int verificarMovimiento = 1;
  int jaque = 0;
  int ubicacionHorizontalCambio = ubicacionHorizontal;
  int ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio == 8 || ubicacionVerticalCambio == 8)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorAlfil == 'b')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  else if (colorAlfil == 'n')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio == 1 || ubicacionVerticalCambio == 8)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorAlfil == 'b')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  else if (colorAlfil == 'n')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio == 8 || ubicacionVerticalCambio == 1)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorAlfil == 'b')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  else if (colorAlfil == 'n')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio == 1 || ubicacionVerticalCambio == 1)
    {
      verificarMovimiento =
	verificarMovimientoAlfil (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorAlfil == 'b')
	    {
	      jaque = 2;
	      printf ("El rey negro esta en jaque\n");
	    }
	  else if (colorAlfil == 'n')
	    {
	      jaque = 1;
	      printf ("El rey blanco esta en jaque\n");
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio--;
    }
  return jaque;
}

int
moverRey (int *ubicacionHorizontal, int *ubicacionVertical,
	  int nuevaUbicacionHorizontal, int nuevaUbicacionVertical,
	  int *movimientosLimite, int *contadorMovimientoRey)
{
  int verificarMovimiento = 1;
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
      verificarMovimiento =
	verificarMovimientoRey (*ubicacionHorizontal, *ubicacionVertical,
				nuevaUbicacionHorizontal,
				nuevaUbicacionVertical);
      switch (verificarMovimiento)
	{
	case 1:
	  error = 0;
	  break;
	case 2:
	  *ubicacionHorizontal = nuevaUbicacionHorizontal;
	  *ubicacionVertical = nuevaUbicacionVertical;
	  *movimientosLimite++;
	  error = 1;
	  *contadorMovimientoRey = 1;
	  break;
	case 3:
	  *ubicacionHorizontal = nuevaUbicacionHorizontal;
	  *ubicacionVertical = nuevaUbicacionVertical;
	  *movimientosLimite = 0;
	  error = 2;
	  *contadorMovimientoRey = 1;
	  break;
	}
    }
  return error;
}

void
comerRey (char color, int ubicacionHorizontal, int ubicacionVertical,
	  int *peonHorizontal1, int *peonVertical1, char peonColor1,
	  int *peonHorizontal2, int *peonVertical2, char peonColor2,
	  int *peonHorizontal3, int *peonVertical3, char peonColor3,
	  int *peonHorizontal4, int *peonVertical4, char peonColor4,
	  int *peonHorizontal5, int *peonVertical5, char peonColor5,
	  int *peonHorizontal6, int *peonVertical6, char peonColor6,
	  int *peonHorizontal7, int *peonVertical7, char peonColor7,
	  int *peonHorizontal8, int *peonVertical8, char peonColor8,
	  int *peonHorizontal9, int *peonVertical9, char peonColor9,
	  int *peonHorizontal10, int *peonVertical10, char peonColor10,
	  int *peonHorizontal11, int *peonVertical11, char peonColor11,
	  int *peonHorizontal12, int *peonVertical12, char peonColor12,
	  int *peonHorizontal13, int *peonVertical13, char peonColor13,
	  int *peonHorizontal14, int *peonVertical14, char peonColor14,
	  int *peonHorizontal15, int *peonVertical15, char peonColor15,
	  int *peonHorizontal16, int *peonVertical16, char peonColor16,
	  int *alfilHorizontal1, int *alfilVertical1, char alfilColor1,
	  int *alfilHorizontal2, int *alfilVertical2, char alfilColor2,
	  int *alfilHorizontal3, int *alfilVertical3, char alfilColor3,
	  int *alfilHorizontal4, int *alfilVertical4, char alfilColor4,
	  int *torreHorizontal1, int *torreVertical1, char torreColor1,
	  int *torreHorizontal2, int *torreVertical2, char torreColor2,
	  int *torreHorizontal3, int *torreVertical3, char torreColor3,
	  int *torreHorizontal4, int *torreVertical4, char torreColor4,
	  int *caballoHorizontal1, int *caballoVertical1,
	  char caballoColor1, int *caballoHorizontal2,
	  int *caballoVertical2, char caballoColor2,
	  int *caballoHorizontal3, int *caballoVertical3,
	  char caballoColor3, int *caballoHorizontal4,
	  int *caballoVertical4, char caballoColor4, int *reinaHorizontal1,
	  int *reinaVertical1, char reinaColor1, int *reinaHorizontal2,
	  int *reinaVertical2, char reinaColor2, int *reyHorizontal1,
	  int *reyVertical1, char reyColor1, int *reyHorizontal2,
	  int *reyVertical2, char reyColor2)
{
  if (color != peonColor1 && ubicacionHorizontal == *peonHorizontal1
      && ubicacionVertical == *peonVertical1)
    {
      *peonHorizontal1 = 0;
      *peonVertical1 = 0;
    }
  if (color != peonColor2 && ubicacionHorizontal == *peonHorizontal2
      && ubicacionVertical == *peonVertical2)
    {
      *peonHorizontal2 = 0;
      *peonVertical2 = 0;
    }
  if (color != peonColor3 && ubicacionHorizontal == *peonHorizontal3
      && ubicacionVertical == *peonVertical3)
    {
      *peonHorizontal3 = 0;
      *peonVertical3 = 0;
    }
  if (color != peonColor4 && ubicacionHorizontal == *peonHorizontal4
      && ubicacionVertical == *peonVertical4)
    {
      *peonHorizontal4 = 0;
      *peonVertical4 = 0;
    }
  if (color != peonColor5 && ubicacionHorizontal == *peonHorizontal5
      && ubicacionVertical == *peonVertical5)
    {
      *peonHorizontal5 = 0;
      *peonVertical5 = 0;
    }
  if (color != peonColor6 && ubicacionHorizontal == *peonHorizontal6
      && ubicacionVertical == *peonVertical6)
    {
      *peonHorizontal6 = 0;
      *peonVertical6 = 0;
    }
  if (color != peonColor7 && ubicacionHorizontal == *peonHorizontal7
      && ubicacionVertical == *peonVertical7)
    {
      *peonHorizontal7 = 0;
      *peonVertical7 = 0;
    }
  if (color != peonColor8 && ubicacionHorizontal == *peonHorizontal8
      && ubicacionVertical == *peonVertical8)
    {
      *peonHorizontal8 = 0;
      *peonVertical8 = 0;
    }
  if (color != peonColor9 && ubicacionHorizontal == *peonHorizontal9
      && ubicacionVertical == *peonVertical9)
    {
      *peonHorizontal9 = 0;
      *peonVertical9 = 0;
    }
  if (color != peonColor10 && ubicacionHorizontal == *peonHorizontal10
      && ubicacionVertical == *peonVertical10)
    {
      *peonHorizontal10 = 0;
      *peonVertical10 = 0;
    }
  if (color != peonColor11 && ubicacionHorizontal == *peonHorizontal11
      && ubicacionVertical == *peonVertical11)
    {
      *peonHorizontal11 = 0;
      *peonVertical11 = 0;
    }
  if (color != peonColor12 && ubicacionHorizontal == *peonHorizontal12
      && ubicacionVertical == *peonVertical12)
    {
      *peonHorizontal12 = 0;
      *peonVertical12 = 0;
    }
  if (color != peonColor13 && ubicacionHorizontal == *peonHorizontal13
      && ubicacionVertical == *peonVertical13)
    {
      *peonHorizontal13 = 0;
      *peonVertical13 = 0;
    }
  if (color != peonColor14 && ubicacionHorizontal == *peonHorizontal14
      && ubicacionVertical == *peonVertical14)
    {
      *peonHorizontal14 = 0;
      *peonVertical14 = 0;
    }
  if (color != peonColor15 && ubicacionHorizontal == *peonHorizontal15
      && ubicacionVertical == *peonVertical15)
    {
      *peonHorizontal15 = 0;
      *peonVertical15 = 0;
    }
  if (color != peonColor16 && ubicacionHorizontal == *peonHorizontal16
      && ubicacionVertical == *peonVertical16)
    {
      *peonHorizontal16 = 0;
      *peonVertical16 = 0;
    }
  if (color != alfilColor1 && ubicacionHorizontal == *alfilHorizontal1
      && ubicacionVertical == *alfilVertical1)
    {
      *alfilHorizontal1 = 0;
      *alfilVertical1 = 0;
    }
  if (color != alfilColor2 && ubicacionHorizontal == *alfilHorizontal2
      && ubicacionVertical == *alfilVertical2)
    {
      *alfilHorizontal2 = 0;
      *alfilVertical2 = 0;
    }
  if (color != alfilColor3 && ubicacionHorizontal == *alfilHorizontal3
      && ubicacionVertical == *alfilVertical3)
    {
      *alfilHorizontal3 = 0;
      *alfilVertical3 = 0;
    }
  if (color != alfilColor4 && ubicacionHorizontal == *alfilHorizontal4
      && ubicacionVertical == *alfilVertical4)
    {
      *alfilHorizontal4 = 0;
      *alfilVertical4 = 0;
    }

  if (color != torreColor1 && ubicacionHorizontal == *torreHorizontal1
      && ubicacionVertical == *torreVertical1)
    {
      *torreHorizontal1 = 0;
      *torreVertical1 = 0;
    }
  if (color != torreColor2 && ubicacionHorizontal == *torreHorizontal2
      && ubicacionVertical == *torreVertical2)
    {
      *torreHorizontal2 = 0;
      *torreVertical2 = 0;
    }
  if (color != torreColor3 && ubicacionHorizontal == *torreHorizontal3
      && ubicacionVertical == *torreVertical3)
    {
      *torreHorizontal3 = 0;
      *torreVertical3 = 0;
    }
  if (color != torreColor4 && ubicacionHorizontal == *torreHorizontal4
      && ubicacionVertical == *torreVertical4)
    {
      *torreHorizontal4 = 0;
      *torreVertical4 = 0;
    }
  if (color != caballoColor1 && ubicacionHorizontal == *caballoHorizontal1
      && ubicacionVertical == *caballoVertical1)
    {
      *caballoHorizontal1 = 0;
      *caballoVertical1 = 0;
    }
  if (color != caballoColor2 && ubicacionHorizontal == *caballoHorizontal2
      && ubicacionVertical == *caballoVertical2)
    {
      *caballoHorizontal2 = 0;
      *caballoVertical2 = 0;
    }
  if (color != caballoColor3 && ubicacionHorizontal == *caballoHorizontal3
      && ubicacionVertical == *caballoVertical3)
    {
      *caballoHorizontal3 = 0;
      *caballoVertical3 = 0;
    }
  if (color != caballoColor4 && ubicacionHorizontal == *caballoHorizontal4
      && ubicacionVertical == *caballoVertical4)
    {
      *caballoHorizontal4 = 0;
      *caballoVertical4 = 0;
    }
  if (color != reyColor1 && ubicacionHorizontal == *reyHorizontal1
      && ubicacionVertical == *reyVertical1)
    {
      *reyHorizontal1 = 0;
      *reyVertical1 = 0;
    }
  if (color != reyColor2 && ubicacionHorizontal == *reyHorizontal2
      && ubicacionVertical == *reyVertical2)
    {
      *reyHorizontal2 = 0;
      *reyVertical2 = 0;
    }
  if (color != reinaColor1 && ubicacionHorizontal == *reinaHorizontal1
      && ubicacionVertical == *reinaVertical1)
    {
      *reinaHorizontal1 = 0;
      *reinaVertical1 = 0;
    }
  if (color != reinaColor2 && ubicacionHorizontal == *reinaHorizontal2
      && ubicacionVertical == *reinaVertical2)
    {
      *reinaHorizontal2 = 0;
      *reinaVertical2 = 0;
    }
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
  int salida1 = 0;
  int salida2 = 0;
  int salida3 = 0;
  int salida4 = 0;
  int salida5 = 0;
  int salida6 = 0;
  int salida7 = 0;
  int salida8 = 0;
  int salida9 = 0;
  int salida10 = 0;
  int salida11 = 0;
  int salida12 = 0;
  int salida13 = 0;
  int salida14 = 0;
  int salida15 = 0;
  int salida16 = 0;
  int salida17 = 0;
  int salida18 = 0;
  int salida19 = 0;
  int salida20 = 0;
  int salida21 = 0;
  int salida22 = 0;
  int salida23 = 0;
  int salida24 = 0;
  int salida25 = 0;
  int salida26 = 0;
  int salida27 = 0;
  int salida28 = 0;
  int salida29 = 0;
  int salida30 = 0;
  int jaque = 0;
  salida1 =
    hacerJaquePeon (peonVertical1, peonHorizontal1, peonColor1, reyVertical2,
		    reyHorizontal2);
  salida2 =
    hacerJaquePeon (peonVertical2, peonHorizontal2, peonColor2, reyVertical2,
		    reyHorizontal2);
  salida3 =
    hacerJaquePeon (peonVertical3, peonHorizontal3, peonColor3, reyVertical2,
		    reyHorizontal2);
  salida4 =
    hacerJaquePeon (peonVertical4, peonHorizontal4, peonColor4, reyVertical2,
		    reyHorizontal2);
  salida5 =
    hacerJaquePeon (peonVertical5, peonHorizontal5, peonColor5, reyVertical2,
		    reyHorizontal2);
  salida6 =
    hacerJaquePeon (peonVertical6, peonHorizontal6, peonColor6, reyVertical2,
		    reyHorizontal2);
  salida7 =
    hacerJaquePeon (peonVertical7, peonHorizontal7, peonColor7, reyVertical2,
		    reyHorizontal2);
  salida8 =
    hacerJaquePeon (peonVertical8, peonHorizontal8, peonColor8, reyVertical2,
		    reyHorizontal2);
  salida9 =
    hacerJaqueCaballo (caballoVertical1, caballoHorizontal1, caballoColor1,
		       reyVertical2, reyHorizontal2);
  salida10 =
    hacerJaqueCaballo (caballoVertical2, caballoHorizontal2, caballoColor2,
		       reyVertical2, reyHorizontal2);
  salida11 =
    hacerJaqueTorre (torreVertical1, torreHorizontal1, torreColor1,
		     reyVertical2, reyHorizontal2);
  salida12 =
    hacerJaqueTorre (torreVertical2, torreHorizontal2, torreColor2,
		     reyVertical2, reyHorizontal2);
  salida13 =
    hacerJaqueAlfil (alfilColor1, alfilHorizontal1, alfilVertical1,
		     reyHorizontal2, reyVertical2);
  salida14 =
    hacerJaqueAlfil (alfilColor2, alfilHorizontal2, alfilVertical2,
		     reyHorizontal2, reyVertical2);
  salida15 =
    hacerJaqueReina (reinaColor1, reinaHorizontal1, reinaVertical1,
		     reyHorizontal2, reyVertical2);
  if (salida1 == 2 || salida2 == 2 || salida3 == 2 || salida4 == 2
      || salida5 == 2 || salida6 == 2 || salida7 == 2 || salida8 == 2
      || salida9 == 2 || salida10 == 2 || salida11 == 2 || salida12 == 2
      || salida13 == 2 || salida14 == 2 || salida15 == 2)
    {
      jaque = 2;
    }
  salida16 =
    hacerJaquePeon (peonVertical9, peonHorizontal9, peonColor9, reyVertical1,
		    reyHorizontal1);
  salida17 =
    hacerJaquePeon (peonVertical10, peonHorizontal10, peonColor10,
		    reyVertical1, reyHorizontal1);
  salida18 =
    hacerJaquePeon (peonVertical11, peonHorizontal11, peonColor11,
		    reyVertical1, reyHorizontal1);
  salida19 =
    hacerJaquePeon (peonVertical12, peonHorizontal12, peonColor12,
		    reyVertical1, reyHorizontal1);
  salida20 =
    hacerJaquePeon (peonVertical13, peonHorizontal13, peonColor13,
		    reyVertical1, reyHorizontal1);
  salida21 =
    hacerJaquePeon (peonVertical14, peonHorizontal14, peonColor14,
		    reyVertical1, reyHorizontal1);
  salida22 =
    hacerJaquePeon (peonVertical15, peonHorizontal15, peonColor15,
		    reyVertical1, reyHorizontal1);
  salida23 =
    hacerJaquePeon (peonVertical16, peonHorizontal16, peonColor16,
		    reyVertical1, reyHorizontal1);
  salida24 =
    hacerJaqueCaballo (caballoVertical3, caballoHorizontal3, caballoColor3,
		       reyVertical1, reyHorizontal1);
  salida25 =
    hacerJaqueCaballo (caballoVertical4, caballoHorizontal4, caballoColor4,
		       reyVertical1, reyHorizontal1);
  salida26 =
    hacerJaqueTorre (torreVertical3, torreHorizontal3, torreColor3,
		     reyVertical1, reyHorizontal1);
  salida27 =
    hacerJaqueTorre (torreVertical4, torreHorizontal4, torreColor4,
		     reyVertical1, reyHorizontal1);
  salida28 =
    hacerJaqueAlfil (alfilColor3, alfilHorizontal3, alfilVertical3,
		     reyHorizontal1, reyVertical1);
  salida29 =
    hacerJaqueAlfil (alfilColor4, alfilHorizontal4, alfilVertical4,
		     reyHorizontal1, reyVertical1);
  salida30 =
    hacerJaqueReina (reinaColor2, reinaHorizontal2, reinaVertical2,
		     reyHorizontal1, reyVertical1);
  if (salida16 == 1 || salida17 == 1 || salida18 == 1 || salida19 == 1
      || salida20 == 1 || salida21 == 1 || salida22 == 1 || salida23 == 1
      || salida24 == 1 || salida25 == 1 || salida26 == 1 || salida27 == 1
      || salida28 == 1 || salida29 == 1 || salida30 == 1)
    {
      jaque = 1;
    }
  return jaque;
}

int
moverReina (int *ubicacionHorizontal, int *ubicacionVertical,
	    int nuevaUbicacionHorizontal, int nuevaUbicacionVertical,
	    int *movimientosLimite)
{
  int verificarMovimiento = 1;
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
      verificarMovimiento =
	verificarMovimientoReina (*ubicacionHorizontal, *ubicacionVertical,
				  nuevaUbicacionHorizontal,
				  nuevaUbicacionVertical);
      switch (verificarMovimiento)
	{
	case 1:
	  error = 0;
	  break;
	case 2:
	  *ubicacionHorizontal = nuevaUbicacionHorizontal;
	  *ubicacionVertical = nuevaUbicacionVertical;
	  *movimientosLimite++;
	  error = 1;
	  break;
	case 3:
	  *ubicacionHorizontal = nuevaUbicacionHorizontal;
	  *ubicacionVertical = nuevaUbicacionVertical;
	  *movimientosLimite = 0;
	  error = 2;
	  break;
	}
    }
  return error;
}

void
comerReina (char color, int ubicacionHorizontal, int ubicacionVertical,
	    int *peonHorizontal1, int *peonVertical1, char peonColor1,
	    int *peonHorizontal2, int *peonVertical2, char peonColor2,
	    int *peonHorizontal3, int *peonVertical3, char peonColor3,
	    int *peonHorizontal4, int *peonVertical4, char peonColor4,
	    int *peonHorizontal5, int *peonVertical5, char peonColor5,
	    int *peonHorizontal6, int *peonVertical6, char peonColor6,
	    int *peonHorizontal7, int *peonVertical7, char peonColor7,
	    int *peonHorizontal8, int *peonVertical8, char peonColor8,
	    int *peonHorizontal9, int *peonVertical9, char peonColor9,
	    int *peonHorizontal10, int *peonVertical10, char peonColor10,
	    int *peonHorizontal11, int *peonVertical11, char peonColor11,
	    int *peonHorizontal12, int *peonVertical12, char peonColor12,
	    int *peonHorizontal13, int *peonVertical13, char peonColor13,
	    int *peonHorizontal14, int *peonVertical14, char peonColor14,
	    int *peonHorizontal15, int *peonVertical15, char peonColor15,
	    int *peonHorizontal16, int *peonVertical16, char peonColor16,
	    int *alfilHorizontal1, int *alfilVertical1, char alfilColor1,
	    int *alfilHorizontal2, int *alfilVertical2, char alfilColor2,
	    int *alfilHorizontal3, int *alfilVertical3, char alfilColor3,
	    int *alfilHorizontal4, int *alfilVertical4, char alfilColor4,
	    int *torreHorizontal1, int *torreVertical1, char torreColor1,
	    int *torreHorizontal2, int *torreVertical2, char torreColor2,
	    int *torreHorizontal3, int *torreVertical3, char torreColor3,
	    int *torreHorizontal4, int *torreVertical4, char torreColor4,
	    int *caballoHorizontal1, int *caballoVertical1,
	    char caballoColor1, int *caballoHorizontal2,
	    int *caballoVertical2, char caballoColor2,
	    int *caballoHorizontal3, int *caballoVertical3,
	    char caballoColor3, int *caballoHorizontal4,
	    int *caballoVertical4, char caballoColor4, int *reinaHorizontal1,
	    int *reinaVertical1, char reinaColor1, int *reinaHorizontal2,
	    int *reinaVertical2, char reinaColor2, int *reyHorizontal1,
	    int *reyVertical1, char reyColor1, int *reyHorizontal2,
	    int *reyVertical2, char reyColor2)
{
  if (color != peonColor1 && ubicacionHorizontal == *peonHorizontal1
      && ubicacionVertical == *peonVertical1)
    {
      *peonHorizontal1 = 0;
      *peonVertical1 = 0;
    }
  if (color != peonColor2 && ubicacionHorizontal == *peonHorizontal2
      && ubicacionVertical == *peonVertical2)
    {
      *peonHorizontal2 = 0;
      *peonVertical2 = 0;
    }
  if (color != peonColor3 && ubicacionHorizontal == *peonHorizontal3
      && ubicacionVertical == *peonVertical3)
    {
      *peonHorizontal3 = 0;
      *peonVertical3 = 0;
    }
  if (color != peonColor4 && ubicacionHorizontal == *peonHorizontal4
      && ubicacionVertical == *peonVertical4)
    {
      *peonHorizontal4 = 0;
      *peonVertical4 = 0;
    }
  if (color != peonColor5 && ubicacionHorizontal == *peonHorizontal5
      && ubicacionVertical == *peonVertical5)
    {
      *peonHorizontal5 = 0;
      *peonVertical5 = 0;
    }
  if (color != peonColor6 && ubicacionHorizontal == *peonHorizontal6
      && ubicacionVertical == *peonVertical6)
    {
      *peonHorizontal6 = 0;
      *peonVertical6 = 0;
    }
  if (color != peonColor7 && ubicacionHorizontal == *peonHorizontal7
      && ubicacionVertical == *peonVertical7)
    {
      *peonHorizontal7 = 0;
      *peonVertical7 = 0;
    }
  if (color != peonColor8 && ubicacionHorizontal == *peonHorizontal8
      && ubicacionVertical == *peonVertical8)
    {
      *peonHorizontal8 = 0;
      *peonVertical8 = 0;
    }
  if (color != peonColor9 && ubicacionHorizontal == *peonHorizontal9
      && ubicacionVertical == *peonVertical9)
    {
      *peonHorizontal9 = 0;
      *peonVertical9 = 0;
    }
  if (color != peonColor10 && ubicacionHorizontal == *peonHorizontal10
      && ubicacionVertical == *peonVertical10)
    {
      *peonHorizontal10 = 0;
      *peonVertical10 = 0;
    }
  if (color != peonColor11 && ubicacionHorizontal == *peonHorizontal11
      && ubicacionVertical == *peonVertical11)
    {
      *peonHorizontal11 = 0;
      *peonVertical11 = 0;
    }
  if (color != peonColor12 && ubicacionHorizontal == *peonHorizontal12
      && ubicacionVertical == *peonVertical12)
    {
      *peonHorizontal12 = 0;
      *peonVertical12 = 0;
    }
  if (color != peonColor13 && ubicacionHorizontal == *peonHorizontal13
      && ubicacionVertical == *peonVertical13)
    {
      *peonHorizontal13 = 0;
      *peonVertical13 = 0;
    }
  if (color != peonColor14 && ubicacionHorizontal == *peonHorizontal14
      && ubicacionVertical == *peonVertical14)
    {
      *peonHorizontal14 = 0;
      *peonVertical14 = 0;
    }
  if (color != peonColor15 && ubicacionHorizontal == *peonHorizontal15
      && ubicacionVertical == *peonVertical15)
    {
      *peonHorizontal15 = 0;
      *peonVertical15 = 0;
    }
  if (color != peonColor16 && ubicacionHorizontal == *peonHorizontal16
      && ubicacionVertical == *peonVertical16)
    {
      *peonHorizontal16 = 0;
      *peonVertical16 = 0;
    }
  if (color != alfilColor1 && ubicacionHorizontal == *alfilHorizontal1
      && ubicacionVertical == *alfilVertical1)
    {
      *alfilHorizontal1 = 0;
      *alfilVertical1 = 0;
    }
  if (color != alfilColor2 && ubicacionHorizontal == *alfilHorizontal2
      && ubicacionVertical == *alfilVertical2)
    {
      *alfilHorizontal2 = 0;
      *alfilVertical2 = 0;
    }
  if (color != alfilColor3 && ubicacionHorizontal == *alfilHorizontal3
      && ubicacionVertical == *alfilVertical3)
    {
      *alfilHorizontal3 = 0;
      *alfilVertical3 = 0;
    }
  if (color != alfilColor4 && ubicacionHorizontal == *alfilHorizontal4
      && ubicacionVertical == *alfilVertical4)
    {
      *alfilHorizontal4 = 0;
      *alfilVertical4 = 0;
    }

  if (color != torreColor1 && ubicacionHorizontal == *torreHorizontal1
      && ubicacionVertical == *torreVertical1)
    {
      *torreHorizontal1 = 0;
      *torreVertical1 = 0;
    }
  if (color != torreColor2 && ubicacionHorizontal == *torreHorizontal2
      && ubicacionVertical == *torreVertical2)
    {
      *torreHorizontal2 = 0;
      *torreVertical2 = 0;
    }
  if (color != torreColor3 && ubicacionHorizontal == *torreHorizontal3
      && ubicacionVertical == *torreVertical3)
    {
      *torreHorizontal3 = 0;
      *torreVertical3 = 0;
    }
  if (color != torreColor4 && ubicacionHorizontal == *torreHorizontal4
      && ubicacionVertical == *torreVertical4)
    {
      *torreHorizontal4 = 0;
      *torreVertical4 = 0;
    }
  if (color != caballoColor1 && ubicacionHorizontal == *caballoHorizontal1
      && ubicacionVertical == *caballoVertical1)
    {
      *caballoHorizontal1 = 0;
      *caballoVertical1 = 0;
    }
  if (color != caballoColor2 && ubicacionHorizontal == *caballoHorizontal2
      && ubicacionVertical == *caballoVertical2)
    {
      *caballoHorizontal2 = 0;
      *caballoVertical2 = 0;
    }
  if (color != caballoColor3 && ubicacionHorizontal == *caballoHorizontal3
      && ubicacionVertical == *caballoVertical3)
    {
      *caballoHorizontal3 = 0;
      *caballoVertical3 = 0;
    }
  if (color != caballoColor4 && ubicacionHorizontal == *caballoHorizontal4
      && ubicacionVertical == *caballoVertical4)
    {
      *caballoHorizontal4 = 0;
      *caballoVertical4 = 0;
    }
  if (color != reyColor1 && ubicacionHorizontal == *reyHorizontal1
      && ubicacionVertical == *reyVertical1)
    {
      *reyHorizontal1 = 0;
      *reyVertical1 = 0;
    }
  if (color != reyColor2 && ubicacionHorizontal == *reyHorizontal2
      && ubicacionVertical == *reyVertical2)
    {
      *reyHorizontal2 = 0;
      *reyVertical2 = 0;
    }
  if (color != reinaColor1 && ubicacionHorizontal == *reinaHorizontal1
      && ubicacionVertical == *reinaVertical1)
    {
      *reinaHorizontal1 = 0;
      *reinaVertical1 = 0;
    }
  if (color != reinaColor2 && ubicacionHorizontal == *reinaHorizontal2
      && ubicacionVertical == *reinaVertical2)
    {
      *reinaHorizontal2 = 0;
      *reinaVertical2 = 0;
    }
  return;
}

int
hacerJaqueReina (char colorReina, int ubicacionHorizontal,
		 int ubicacionVertical, int ubicacionHorizontalRey,
		 int ubicacionVerticalRey)
{
  int verificarMovimiento = 1;
  int jaque = 0;
  int ubicacionHorizontalCambio = ubicacionHorizontal;
  int ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio == 8 || ubicacionVerticalCambio == 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio = 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  ubicacionHorizontalCambio = 8;
	}
      ubicacionHorizontalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  while (ubicacionHorizontalCambio == 8 || ubicacionVerticalCambio == 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  ubicacionHorizontalCambio = 8;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionVerticalCambio == 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  ubicacionVerticalCambio = 1;
	}
      ubicacionVerticalCambio--;
    }
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio == 1 || ubicacionVerticalCambio == 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 1;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionHorizontalCambio == 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  ubicacionHorizontalCambio = 1;
	}
      ubicacionHorizontalCambio--;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  while (ubicacionHorizontalCambio == 1 || ubicacionVerticalCambio == 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
	    }
	  ubicacionHorizontalCambio = 1;
	  ubicacionVerticalCambio = 8;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio++;
    }
  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;
  while (ubicacionVerticalCambio == 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal, ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  if (colorReina == 'b')
	    {
	      printf ("El rey negro esta en jaque\n");
	      jaque = 2;
	    }
	  else if (colorReina == 'n')
	    {
	      printf ("El rey blanco esta en jaque\n");
	      jaque = 1;
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
