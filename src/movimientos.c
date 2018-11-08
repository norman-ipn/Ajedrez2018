#include "movimientos.h"

int
moverPeon (int *filaInicialPeon, int *columnaInicialPeon, int filaDestinoPeon,
	   int columnaDestinoPeon, int colorPeon, int filaReyEnemigo,
	   int columnaReyEnemigo)
{
  printf ("Prueba mover peon");
}



int
hacerJaquePeon (int filaInicialPeon, int columnaInicialPeon, char colorPeon,
		int filaReyEnemigo, int columnaReyEnemigo)
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

  
}


int
moverTorre (int *filaInicialTorre, int *columnaInicialTorre,
	          int filaDestinoTorre, int columnaDestinoTorre)
{
  if (verificarMovimientoTorre(*columnaInicialTorre, *filaInicialTorre, columnaDestinoTorre,filaDestinoTorre) != 0)
  {
    if (verificarDestinoDesocupado(columnaDestinoTorre, filaDestinoTorre) != 0)
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
hacerJaqueTorre(int filaInicialTorre, int columnaInicialTorre,
                int filaReyEnemigo, int columnaReyEnemigo){
  int i=0;
  if(columnaInicialTorre==columnaReyEnemigo){
    int columnasOcupadas=0;
    if(columnaInicialTorre<columnaReyEnemigo){
      for(i=columnaInicialTorre;i>columnaReyEnemigo;i--)
      {
        if(verificarDestinoDesocupado (i,filaInicialTorre)==0)
        {
          columnasOcupadas++;
        }
      }
    }
    else
    {
      for(i=columnaInicialTorre;i<columnaReyEnemigo;i++)
      {
        if(verificarDestinoDesocupado (i,filaInicialTorre)==0)
        {
          columnasOcupadas++;
        }
      }
    }
    if(columnasOcupadas==0){
      printf("Jaque!");
      return 1;
    }else{
      return 0;
    }
  }
  else
  {
    if(filaInicialTorre==filaReyEnemigo){
      int filasOcupadas=0;
      if(filaInicialTorre<filaReyEnemigo){
        for(i=filaInicialTorre;i>filaReyEnemigo;i--)
        {
          if(verificarDestinoDesocupado (columnaInicialTorre, i)==0)
          {
            filasOcupadas++;
          }
        }
      }
      else
      {
        for(i=filaInicialTorre;i<filaReyEnemigo;i++)
        {
          if(verificarDestinoDesocupado (columnaInicialTorre, i)==0)
          {
            filasOcupadas++;
          }
        }
      }
      if(filasOcupadas==0){
        printf("Jaque!");
        return 1;
      }else{
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
moverCaballo (int *filaInicialCaballo, int *columnaInicialCaballo,
	      int filaDestinoCaballo, int columnaDestinoCaballo,
	      int colorCaballo, int filaReyEnemigo, int columnaReyEnemigo)
{

}


int
comerCaballo (int *filaInicialCaballo, int *columnaInicialCaballo,
	      int filaPiezaAComer, int columnaPiezaAComer, int colorCaballo,
	      int filaReyEnemigo, int columnaReyEnemigo)
{

}

int
hacerJaqueCaballo (int filaInicialCaballo, int columnaInicialCaballo,
		   int colorCaballo, int filaReyEnemigo,
		   int columnaReyEnemigo)
{

}


int
moverRey (char color, int *ubicacionHorizontal, int *ubicacionVertical,
	  int direccion, int *contadorMovimientoRey, int *movimientosLimite,
	  char peon1Blanco, char peon2Blanco, char peon3Blanco,
	  char peon4Blanco, char peon5Blanco, char peon6Blanco,
	  char peon7Blanco, char peon8Blanco, char caballo1Blanco,
	  char caballo2Blanco, char alfil1Blanco, char alfil2Blanco,
	  char torre1Blanco, char torre2Blanco, char reinaBlanco,
	  char reyBlanco, char peon1Negro, char peon2Negro, char peon3Negro,
	  char peon4Negro, char peon5Negro, char peon6Negro, char peon7Negro,
	  char peon8Negro, char caballo1Negro, char caballo2Negro,
	  char alfil1Negro, char alfil2Negro, char torre1Negro,
	  char torre2Negro, char reinaNegro, char reyNegro,
	  int *peonBlanco1Horizontal, int *peonBlanco1Vertical,
	  int *peonBlanco2Horizontal, int *peonBlanco2Vertical,
	  int *peonBlanco3Horizontal, int *peonBlanco3Vertical,
	  int *peonBlanco4Horizontal, int *peonBlanco4Vertical,
	  int *peonBlanco5Horizontal, int *peonBlanco5Vertical,
	  int *peonBlanco6Horizontal, int *peonBlanco6Vertical,
	  int *peonBlanco7Horizontal, int *peonBlanco7Vertical,
	  int *peonBlanco8Horizontal, int *peonBlanco8Vertical,
	  int *caballoBlanco1Horizontal, int *caballoBlanco1Vertical,
	  int *caballoBlanco2Horizontal, int *caballoBlanco2Vertical,
	  int *alfilBlanco1Horizontal, int *alfilBlanco1Vertical,
	  int *alfilBlanco2Horizontal, int *alfilBlanco2Vertical,
	  int *torreBlanco1Horizontal, int *torreBlanco1Vertical,
	  int *torreBlanco2Horizontal, int *torreBlanco2Vertical,
	  int *reinaBlancoHorizontal, int *reinaBlancoVertical,
	  int *reyBlancoHorizontal, int *reyBlancoVertical,
	  int *peonNegro1Horizontal, int *peonNegro1Vertical,
	  int *peonNegro2Horizontal, int *peonNegro2Vertical,
	  int *peonNegro3Horizontal, int *peonNegro3Vertical,
	  int *peonNegro4Horizontal, int *peonNegro4Vertical,
	  int *peonNegro5Horizontal, int *peonNegro5Vertical,
	  int *peonNegro6Horizontal, int *peonNegro6Vertical,
	  int *peonNegro7Horizontal, int *peonNegro7Vertical,
	  int *peonNegro8Horizontal, int *peonNegro8Vertical,
	  int *caballoNegro1Horizontal, int *caballoNegro1Vertical,
	  int *caballoNegro2Horizontal, int *caballoNegro2Vertical,
	  int *alfilNegro1Horizontal, int *alfilNegro1Vertical,
	  int *alfilNegro2Horizontal, int *alfilNegro2Vertical,
	  int *torreNegro1Horizontal, int *torreNegro1Vertical,
	  int *torreNegro2Horizontal, int *torreNegro2Vertical,
	  int *reinaNegroHorizontal, int *reinaNegroVertical,
	  int *reyNegroHorizontal, int *reyNegroVertical)
{
  int movimientoUbicacionHorizontal = (*ubicacionHorizontal);
  int movimientoUbicacionVertical = (*ubicacionVertical);
  int verificarMovimiento;
  int error;
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
      error = 0;
      break;
    case 2:
      *ubicacionHorizontal = movimientoUbicacionHorizontal;
      *ubicacionVertical = movimientoUbicacionVertical;
      *contadorMovimientoRey = 1;
      imprimirTablero (1);
      error = 1;
      *movimientosLimite++;
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
      error = 1;
      *movimientosLimite = 0;
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
  return error;
}

int
enrocar (int contadorMovimientosRey, int contadorMovimientosTorre,
	 int *ubicacionHorizontalRey, int *ubicacionHorizontalTorre,
	 int *movimientosLimite)
{
  int error;
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

int
moverReina (char color, int *ubicacionHorizontal, int *ubicacionVertical,
	    int lugaresMover, int direccion, int *movimientosLimite,
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
	    int *torreHorizontal1, int *torreVertical1, char torreColor1,
	    int *torreHorizontal2, int *torreVertical2, char torreColor2,
	    int *caballoHorizontal1, int *caballoVertical1,
	    char caballoColor1, int *caballoHorizontal2,
	    int *caballoVertical2, char caballoColor2, int *alfilHorizontal1,
	    int *alfilVertical1, char alfilColor1, int *alfilHorizontal2,
	    int *alfilVertical2, char alfilColor2, int *torreHorizontal3,
	    int *torreVertical3, char torreColor3, int *torreHorizontal4,
	    int *torreVertical4, char torreColor4, int *caballoHorizontal3,
	    int *caballoVertical3, char caballoColor3,
	    int *caballoHorizontal4, int *caballoVertical4,
	    char caballoColor4, int *alfilHorizontal3, int *alfilVertical3,
	    char alfilColor3, int *alfilHorizontal4, int *alfilVertical4,
	    char alfilColor4, int *reinaHorizontal1, int *reinaVertical1,
	    char reinaColor1, int *reinaHorizontal2, int *reinaVertical2,
	    char reinaColor2, int *reyHorizontal1, int *reyVertical1,
	    char reyColor1, int *reyHorizontal2, int *reyVertical2,
	    char reyColor2)
{
  int movimientoUbicacionHorizontal = (*ubicacionHorizontal);
  int movimientoUbicacionVertical = (*ubicacionVertical);
  int verificarMovimiento = 0;
  int error = 1;
  switch (direccion)
    {
    case 1:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    case 2:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    case 3:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    case 4:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    case 5:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    case 6:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    case 7:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    case 8:
      *ubicacionHorizontal += lugaresMover;
      *ubicacionVertical += lugaresMover;
      break;
    default:
      printf ("Esta dando una dirección incorrecta\n");
      error = 0;
      break;
    }
  verificarMovimiento =
    verificarMovimientoReina (*ubicacionHorizontal, *ubicacionVertical,
			      movimientoUbicacionHorizontal,
			      movimientoUbicacionVertical);
  switch (verificarMovimiento)
    {
    case 1:
      printf ("No se puede realizar el movimiento\n");
      error = 0;
      break;
    case 2:
      *ubicacionHorizontal = movimientoUbicacionHorizontal;
      *ubicacionVertical = movimientoUbicacionVertical;
      imprimirTablero (1);
      error = 1;
      *movimientosLimite++;
      break;
    case 3:
      *ubicacionHorizontal = movimientoUbicacionHorizontal;
      *ubicacionVertical = movimientoUbicacionVertical;
      comerReina (color, ubicacionHorizontal, ubicacionVertical,
		  peonHorizontal1, peonVertical1,
		  peonColor1, peonHorizontal2, peonVertical2, peonColor2,
		  peonHorizontal3, peonVertical3, peonColor3,
		  peonHorizontal4, peonVertical4, peonColor4,
		  peonHorizontal5, peonVertical5, peonColor5,
		  peonHorizontal6, peonVertical6, peonColor6,
		  peonHorizontal7, peonVertical7, peonColor7,
		  peonHorizontal8, peonVertical8, peonColor8,
		  peonHorizontal9, peonVertical9,
		  peonColor9, peonHorizontal10, peonVertical10,
		  peonColor10, peonHorizontal11, peonVertical11,
		  peonColor11, peonHorizontal12, peonVertical12,
		  peonColor12, peonHorizontal13, peonVertical13,
		  peonColor13, peonHorizontal14, peonVertical14,
		  peonColor14, peonHorizontal15, peonVertical15,
		  peonColor15, peonHorizontal16, peonVertical16,
		  peonColor16, torreHorizontal1, torreVertical1,
		  torreColor1, torreHorizontal2, torreVertical2,
		  torreColor2, caballoHorizontal1, caballoVertical1,
		  caballoColor1, caballoHorizontal2, caballoVertical2,
		  caballoColor2, alfilHorizontal1, alfilVertical1,
		  alfilColor1, alfilHorizontal2, alfilVertical2,
		  alfilColor2, torreHorizontal3, torreVertical3,
		  torreColor3, torreHorizontal4, torreVertical4,
		  torreColor4, caballoHorizontal3, caballoVertical3,
		  caballoColor3, caballoHorizontal4, caballoVertical4,
		  caballoColor4, alfilHorizontal3, alfilVertical3,
		  alfilColor3, alfilHorizontal4, alfilVertical4,
		  alfilColor4, reinaHorizontal1, reinaVertical1, reinaColor1,
		  reinaHorizontal2, reinaVertical2, reinaColor2,
		  reyHorizontal1, reyVertical1, reyColor1, reyHorizontal2,
		  reyVertical2, reyColor2);
      imprimirTablero (1);
      error = 1;
      *movimientosLimite = 0;
      break;
    }
  detectarJaqueRey (color, *ubicacionHorizontal, *ubicacionVertical,
		    *peonHorizontal1, *peonVertical1,
		    peonColor1, *peonHorizontal2, *peonVertical2, peonColor2,
		    *peonHorizontal3, *peonVertical3, peonColor3,
		    *peonHorizontal4, *peonVertical4, peonColor4,
		    *peonHorizontal5, *peonVertical5, peonColor5,
		    *peonHorizontal6, *peonVertical6, peonColor6,
		    *peonHorizontal7, *peonVertical7, peonColor7,
		    *peonHorizontal8, *peonVertical8, peonColor8,
		    *peonHorizontal9, *peonVertical9,
		    peonColor9, *peonHorizontal10, *peonVertical10,
		    peonColor10, *peonHorizontal11, *peonVertical11,
		    peonColor11, *peonHorizontal12, *peonVertical12,
		    peonColor12, *peonHorizontal13, *peonVertical13,
		    peonColor13, *peonHorizontal14, *peonVertical14,
		    peonColor14, *peonHorizontal15, *peonVertical15,
		    peonColor15, *peonHorizontal16, *peonVertical16,
		    peonColor16, *torreHorizontal1, *torreVertical1,
		    torreColor1, *torreHorizontal2, *torreVertical2,
		    torreColor2, *caballoHorizontal1, *caballoVertical1,
		    caballoColor1, *caballoHorizontal2, *caballoVertical2,
		    caballoColor2, *alfilHorizontal1, *alfilVertical1,
		    alfilColor1, *alfilHorizontal2, *alfilVertical2,
		    alfilColor2, *torreHorizontal3, *torreVertical3,
		    torreColor3, *torreHorizontal4, *torreVertical4,
		    torreColor4, *caballoHorizontal3, *caballoVertical3,
		    caballoColor3, *caballoHorizontal4, *caballoVertical4,
		    caballoColor4, *alfilHorizontal3, *alfilVertical3,
		    alfilColor3, *alfilHorizontal4, *alfilVertical4,
		    alfilColor4, *reinaHorizontal1, *reinaVertical1,
		    reinaColor1, *reinaHorizontal2, *reinaVertical2,
		    reinaColor2, *reyHorizontal1, *reyVertical1, reyColor1,
		    *reyHorizontal2, *reyVertical2, reyColor2);
  return error;
}

int
hacerJaqueReina (char color, int ubicacionHorizontal, int ubicacionVertical,
		 int ubicacionVerticalRey, int ubicacionHorizontalRey)
{
  int verificarMovimiento = 0;
  int jaque = 0;

  int ubicacionHorizontalCambio = ubicacionHorizontal;
  int ubicacionVerticalCambio = ubicacionVertical;

  while (ubicacionHorizontalCambio >= 8 && ubicacionVerticalCambio >= 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalCambio,
				  ubicacionVerticalCambio);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionVerticalCambio = 8;
	  ubicacionHorizontalCambio = 8;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio++;
    }

  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;

  while (ubicacionHorizontalCambio <= 1 && ubicacionVerticalCambio >= 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalRey,
				  ubicacionVerticalRey);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionVerticalCambio = 8;
	  ubicacionHorizontalCambio = 1;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio++;
    }

  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;

  while (ubicacionHorizontalCambio <= 1 && ubicacionVerticalCambio <= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalRey,
				  ubicacionVerticalRey);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionVerticalCambio = 1;
	  ubicacionHorizontalCambio = 1;
	}
      ubicacionHorizontalCambio--;
      ubicacionVerticalCambio--;
    }

  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;

  while (ubicacionHorizontalCambio >= 8 && ubicacionVerticalCambio <= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalRey,
				  ubicacionVerticalRey);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionVerticalCambio = 1;
	  ubicacionHorizontalCambio = 8;
	}
      ubicacionHorizontalCambio++;
      ubicacionVerticalCambio--;
    }

  ubicacionHorizontalCambio = ubicacionHorizontal;
  ubicacionVerticalCambio = ubicacionVertical;

  while (ubicacionHorizontalCambio >= 8)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalRey,
				  ubicacionVerticalRey);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVertical)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 8;
	}
      ubicacionHorizontalCambio++;
    }

  ubicacionHorizontalCambio = ubicacionHorizontal;

  while (ubicacionHorizontalCambio <= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalRey,
				  ubicacionVerticalRey);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontalCambio
	  && ubicacionVerticalRey == ubicacionVertical)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionHorizontalCambio = 1;
	}
      ubicacionHorizontalCambio--;
    }

  ubicacionHorizontalCambio = ubicacionHorizontal;

  while (ubicacionVerticalCambio <= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalRey,
				  ubicacionVerticalRey);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontal
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionVerticalCambio = 1;
	}
      ubicacionVerticalCambio--;
    }

  ubicacionVerticalCambio = ubicacionVertical;

  while (ubicacionVerticalCambio >= 1)
    {
      verificarMovimiento =
	verificarMovimientoReina (ubicacionHorizontal,
				  ubicacionVertical,
				  ubicacionHorizontalRey,
				  ubicacionVerticalRey);
      if (verificarMovimiento != 2
	  && ubicacionHorizontalRey == ubicacionHorizontal
	  && ubicacionVerticalRey == ubicacionVerticalCambio)
	{
	  printf ("El rey está el jaque\n");
	  if (color == 'n')
	    {
	      jaque = 1;
	    }
	  else if (color == 'b')
	    {
	      jaque = 2;
	    }
	  ubicacionVerticalCambio = 8;
	}
      ubicacionVerticalCambio++;
    }

  return jaque;
}
void comerRey (color, int *ubicacionHorizontal, int *ubicacionVertical,
	  int peonBlanco1Horizontal, int peonBlanco1Vertical,
	  char peon1Blanco, int peonBlanco2Horizontal,
	  int peonBlanco2Vertical, char peon2Blanco,
	  int peonBlanco3Horizontal, int peonBlanco3Vertical,
	  char peon3Blanco, int peonBlanco4Horizontal,
	  int peonBlanco4Vertical, char peon4Blanco,
	  int peonBlanco5Horizontal, int peonBlanco5Vertical,
	  char peon5Blanco, int peonBlanco6Horizontal,
	  int peonBlanco6Vertical, char peon6Blanco,
	  int peonBlanco7Horizontal, int peonBlanco7Vertical,
	  char peon7Blanco, int peonBlanco8Horizontal,
	  int peonBlanco8Vertical, char peon8Blanco,
	  int caballoBlanco1Horizontal, int caballoBlanco1Vertical,
	  int caballo1Blanco, caballoBlanco2Horizontal,
	  int caballoBlanco2Vertical, caballo2Blanco,
	  int alfilBlanco1Horizontal, int alfilBlanco1Vertical,
	  char alfil1Blanco, int alfilBlanco2Horizontal,
	  int alfilBlanco2Vertical, char alfil2Blanco,
	  int torreBlanco1Horizontal, int torreBlanco1Vertical,
	  char torre1Blanco, int torreBlanco2Horizontal,
	  int torreBlanco2Vertical, char torre2Blanco,
	  int reinaBlancoHorizontal, int reinaBlancoVertical,
	  char reinaBlanco, int reyBlancoHorizontal, int reyBlancoVertical,
	  char reyBlanco, int peonNegro1Horizontal, int peonNegro1Vertical,
	  char peon1Negro, int peonNegro2Horizontal, int peonNegro2Vertical,
	  char peon2Negro, int peonNegro3Horizontal, int peonNegro3Vertical,
	  char peon3Negro, int peonNegro4Horizontal, int peonNegro4Vertical,
	  char peon4Negro, int peonNegro5Horizontal, int peonNegro5Vertical,
	  char peon5Negro, int peonNegro6Horizontal, int peonNegro6Vertical,
	  char peon6Negro, int peonNegro7Horizontal, int peonNegro7Vertical,
	  char peon7Negro, int peonNegro8Horizontal, int peonNegro8Vertical,
	  char peon8Negro, int caballoNegro1Horizontal,
	  int caballoNegro1Vertical, char caballo1Negro,
	  int caballoNegro2Horizontal, int caballoNegro2Vertical,
	  char caballo2Negro, int alfilNegro1Horizontal,
	  int alfilNegro1Vertical, char alfil1Negro,
	  int alfilNegro2Horizontal, int alfilNegro2Vertical,
	  char alfil2Negro, int torreNegro1Horizontal,
	  int torreNegro1Vertical, char torre1Negro,
	  int torreNegro2Horizontal, int torreNegro2Vertical,
	  char torre2Negro, int reinaNegroHorizontal, int reinaNegroVertical,
	  char reinaNegro, int reyNegroHorizontal, int reyNegroVertical,
	  char reyNegro)
{
  char color = b;
  switch (color)
    {
    case b:
      if ((reyBlancoHorizontal = peon1NegroHorizontal) ^ (reyBlancoVertical =
							  peon1NegroVerical))
	{
	  peon1NegroHorizontal = 0;
	  peon1NegroVertical = 0;
	}
      if ((reyBlancoHorizontal = peon2NegroHorizontal) ^ (reyBlancoVertical =
							  peon2NegroVerical))
	{
	  peon2NegroHorizontal = 0;
	  peonNegroVertical = 0;
	  if ((reyBlancoHorizontal =
	       Peon3NegroHorizontal) ^ (ReyBlancoVertical =
					Peon3NegroVerical))
	    {
	      peon3NegroHorizontal = 0;
	      peon3NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       peon4NegroHorizontal) ^ (reyBlancoVertical =
					peon4NegroVerical))
	    {
	      peon4NegroHorizontal = 0;
	      peon4NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       peon5NegroHorizontal) ^ (reyBlancoVertical =
					peon5NegroVerical))
	    {
	      peon5NegroHorizontal = 0;
	      peon5NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       peon6NegroHorizontal) ^ (reyBlancoVertical =
					peon6NegroVerical))
	    {
	      peon6NegroHorizontal = 0;
	      peon6NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       peon7NegroHorizontal) ^ (reyBlancoVertical =
					peon7NegroVerical))
	    {
	      peon7NegroHorizontal = 0;
	      peon7NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       peon8NegroHorizontal) ^ (reyBlancoVertical =
					peon8NegroVerical))
	    {
	      peon8NegroHorizontal = 0;
	      peon8NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       torre1NegraHorizontal) ^ (reyBlancoVertical =
					 torre1NegraVerical))
	    {
	      torre1NegraHorizontal = 0;
	      torre1NegraVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       torre2NegraHorizontal) ^ (reyBlancoVertical =
					 torre2NegraVerical))
	    {
	      torre2NegraHorizontal = 0;
	      torre2NegraVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       alfil1NegroHorizontal) ^ (reyBlancoVertical =
					 alfil1NegroVerical))
	    {
	      alfil1NegroHorizontal = 0;
	      alfil1NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       alfil2NegroHorizontal) ^ (reyBlancoVertical =
					 alfil2NegroVerical))
	    {
	      alfil2NegroHorizontal = 0;
	      alfil2NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       caballo1NegroHorizontal) ^ (reyBlancoVertical =
					   caballo1NegroVerical;))
	    {
	      caballo1NegroHorizontal = 0;
	      caballo1NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       caballo2NegroHorizontal) ^ (reyBlancoVertical =
					   caballo2NegroVerical))
	    {
	      caballo2NegroHorizontal = 0;
	      caballo2NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       reinaNegraHorizontal) ^ (reyBlancoVertical =
					reinaNegraVerical))
	    {
	      reinaNegraHorizontal = 0;
	      reinaNegraVertical = 0;
	    }

	  break;
    default:
	  if ((reyNegroHorizontal =
	       peon1BlancoHorizontal) ^ (reyNegroVertical =
					 peon1BlancoVerical))
	    {
	      peon1BlancoHorizontal = 0;
	      peon1BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       peon2BlancoHorizontal) ^ (reyNegroVertical =
					 peon2BlancoVerical))
	    {
	      peon2BlancoHorizontal = 0;
	      peonBlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       peon3BlancoHorizontal) ^ (reyNegroVertical =
					 peon3BlancoVerical))
	    {
	      peon3BlancoHorizontal = 0;
	      peon3BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       peon4BlancoHorizontal) ^ (reyNegroVertical =
					 peon4BlancoVerical))
	    {
	      peon4BlancoHorizontal = 0;
	      peon4BlancVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       peon5BlancoHorizontal) ^ (reyNegroVertical =
					 peon5BlancoVerical))
	    {
	      peon5BlancoHorizontal = 0;
	      peon5BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       peon6BlancoHorizontal) ^ (reyNegroVertical =
					 peon6BlancoVerical))
	    {
	      peon6BlancoHorizontal = 0;
	      peon6BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       peon7BlancoHorizontal) ^ (reyNegroVertical =
					 peon7BlancoVerical))
	    {
	      peon7BlancoHorizontal = 0;
	      peon7BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       peon8BlancoHorizontal) ^ (reyNegroVertical =
					 peon8BlancoVerical))
	    {
	      peon8BlancoHorizontal = 0;
	      peon8BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       torre1BlancaHorizontal) ^ (reyNegroVertical =
					  torre1BlancaVerical))
	    {
	      torre1BlancaHorizontal = 0;
	      torre1BlancaVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       torre2BlancaHorizontal) ^ (reyNegroVertical =
					  torre2BlancaVerical))
	    {
	      torre2BlancaHorizontal = 0;
	      torre2BlancaVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       alfil1BlancoHorizontal) ^ (reyNegroVertical =
					  alfil1BlancoVerical))
	    {
	      alfil1BlancoHorizontal = 0;
	      alfil1BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       alfil2BlancoHorizontal) ^ (reyNegroVertical =
					  alfil2BlancoVerical))
	    {
	      alfil2BlancoHorizontal = 0;
	      alfil2BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       caballo1BlancoHorizontal) ^ (reyNegroVertical =
					    caballo1BlancoVerical;))
	    {
	      caballo1BlancoHorizontal = 0;
	      caballo1BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       caballo2BlancoHorizontal) ^ (reyNegroVertical =
					    caballo2BlancoVerical))
	    {
	      caballo2BlancoHorizontal = 0;
	      caballo2BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       reinaBLancaHorizontal) ^ (reyNegroVertical =
					 reinaBlancaVerical))
	    {
	      reinaBlancaHorizontal = 0;
	      reinaBlancaVertical = 0;
	    }
	  break.
	return;
	}
void comerReina (color, int *ubicacionHorizontal, int *ubicacionVertical,
	  int peonBlanco1Horizontal, int peonBlanco1Vertical,
	  char peon1Blanco, int peonBlanco2Horizontal,
	  int peonBlanco2Vertical, char peon2Blanco,
	  int peonBlanco3Horizontal, int peonBlanco3Vertical,
	  char peon3Blanco, int peonBlanco4Horizontal,
	  int peonBlanco4Vertical, char peon4Blanco,
	  int peonBlanco5Horizontal, int peonBlanco5Vertical,
	  char peon5Blanco, int peonBlanco6Horizontal,
	  int peonBlanco6Vertical, char peon6Blanco,
	  int peonBlanco7Horizontal, int peonBlanco7Vertical,
	  char peon7Blanco, int peonBlanco8Horizontal,
	  int peonBlanco8Vertical, char peon8Blanco,
	  int caballoBlanco1Horizontal, int caballoBlanco1Vertical,
	  int caballo1Blanco, caballoBlanco2Horizontal,
	  int caballoBlanco2Vertical, caballo2Blanco,
	  int alfilBlanco1Horizontal, int alfilBlanco1Vertical,
	  char alfil1Blanco, int alfilBlanco2Horizontal,
	  int alfilBlanco2Vertical, char alfil2Blanco,
	  int torreBlanco1Horizontal, int torreBlanco1Vertical,
	  char torre1Blanco, int torreBlanco2Horizontal,
	  int torreBlanco2Vertical, char torre2Blanco,
	  int reinaBlancoHorizontal, int reinaBlancoVertical,
	  char reinaBlanco, int reyBlancoHorizontal, int reyBlancoVertical,
	  char reyBlanco, int peonNegro1Horizontal, int peonNegro1Vertical,
	  char peon1Negro, int peonNegro2Horizontal, int peonNegro2Vertical,
	  char peon2Negro, int peonNegro3Horizontal, int peonNegro3Vertical,
	  char peon3Negro, int peonNegro4Horizontal, int peonNegro4Vertical,
	  char peon4Negro, int peonNegro5Horizontal, int peonNegro5Vertical,
	  char peon5Negro, int peonNegro6Horizontal, int peonNegro6Vertical,
	  char peon6Negro, int peonNegro7Horizontal, int peonNegro7Vertical,
	  char peon7Negro, int peonNegro8Horizontal, int peonNegro8Vertical,
	  char peon8Negro, int caballoNegro1Horizontal,
	  int caballoNegro1Vertical, char caballo1Negro,
	  int caballoNegro2Horizontal, int caballoNegro2Vertical,
	  char caballo2Negro, int alfilNegro1Horizontal,
	  int alfilNegro1Vertical, char alfil1Negro,
	  int alfilNegro2Horizontal, int alfilNegro2Vertical,
	  char alfil2Negro, int torreNegro1Horizontal,
	  int torreNegro1Vertical, char torre1Negro,
	  int torreNegro2Horizontal, int torreNegro2Vertical,
	  char torre2Negro, int reinaNegroHorizontal, int reinaNegroVertical,
	  char reinaNegro, int reyNegroHorizontal, int reyNegroVertical,
	  char reyNegro)
{
  char color = b;
  switch (color)
    {
    case b:
      if ((reinaBlancaHorizontal = peon1NegroHorizontal) ^ (reinaBlancaVertical =
							  peon1NegroVerical))
	{
	  peon1NegroHorizontal = 0;
	  peon1NegroVertical = 0;
	}
      if ((reinaBlancaHorizontal = peon2NegroHorizontal) ^ (reinaBlancaVertical =
							  peon2NegroVerical))
	{
	  peon2NegroHorizontal = 0;
	  peonNegroVertical = 0;
	  if ((reinaBlancaHorizontal =
	       peon3NegroHorizontal) ^ (reinaBlancaVertical =
					peon3NegroVerical))
	    {
	      peon3NegroHorizontal = 0;
	      peon3NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       peon4NegroHorizontal) ^ (reinaBlancaVertical =
					peon4NegroVerical))
	    {
	      peon4NegroHorizontal = 0;
	      peon4NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       peon5NegroHorizontal) ^ (reinaBlancaVertical =
					peon5NegroVerical))
	    {
	      peon5NegroHorizontal = 0;
	      peon5NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       peon6NegroHorizontal) ^ (reinaBlancaVertical =
					peon6NegroVerical))
	    {
	      peon6NegroHorizontal = 0;
	      peon6NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       peon7NegroHorizontal) ^ (reinaBlancaVertical =
					peon7NegroVerical))
	    {
	      peon7NegroHorizontal = 0;
	      peon7NegroVertical = 0;
	    }
	  if ((reyBlancoHorizontal =
	       peon8NegroHorizontal) ^ (reyBlancoVertical =
					peon8NegroVerical))
	    {
	      peon8NegroHorizontal = 0;
	      peon8NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       torre1NegraHorizontal) ^ (reinaBlancaVertical =
					 torre1NegraVerical))
	    {
	      torre1NegraHorizontal = 0;
	      torre1NegraVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       torre2NegraHorizontal) ^ (reinaBlancaVertical =
					 torre2NegraVerical))
	    {
	      torre2NegraHorizontal = 0;
	      torre2NegraVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       alfil1NegroHorizontal) ^ (reinaBlancaVertical =
					 alfil1NegroVerical))
	    {
	      alfil1NegroHorizontal = 0;
	      alfil1NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       alfil2NegroHorizontal) ^ (reinaBlancaVertical =
					 alfil2NegroVerical))
	    {
	      alfil2NegroHorizontal = 0;
	      alfil2NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       caballo1NegroHorizontal) ^ (reinaBlancaVertical =
					   caballo1NegroVerical;))
	    {
	      caballo1NegroHorizontal = 0;
	      caballo1NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       caballo2NegroHorizontal) ^ (reinaBlancaVertical =
					   caballo2NegroVerical))
	    {
	      caballo2NegroHorizontal = 0;
	      caballo2NegroVertical = 0;
	    }
	  if ((reinaBlancaHorizontal =
	       reinaNegraHorizontal) ^ (reinaBlancaVertical =
					reinaNegraVerical))
	    {
	      reinaNegraHorizontal = 0;
	      reinaNegraVertical = 0;
	    }

	  break;
    default:
	  if ((reinaNegraHorizontal =
	       peon1BlancoHorizontal) ^ (reinaNegraVertical =
					 peon1BlancoVerical))
	    {
	      peon1BlancoHorizontal = 0;
	      peon1BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       peon2BlancoHorizontal) ^ (reinaNegraVertical =
					 peon2BlancoVerical))
	    {
	      peon2BlancoHorizontal = 0;
	      peonBlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       peon3BlancoHorizontal) ^ (reinaNegraVertical =
					 peon3BlancoVerical))
	    {
	      peon3BlancoHorizontal = 0;
	      peon3BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       peon4BlancoHorizontal) ^ (reinaNegraVertical =
					 peon4BlancoVerical))
	    {
	      peon4BlancoHorizontal = 0;
	      peon4BlancVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       peon5BlancoHorizontal) ^ (reinaNegraVertical =
					 peon5BlancoVerical))
	    {
	      peon5BlancoHorizontal = 0;
	      peon5BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       peon6BlancoHorizontal) ^ (reinaNegraVertical =
					 peon6BlancoVerical))
	    {
	      peon6BlancoHorizontal = 0;
	      peon6BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       peon7BlancoHorizontal) ^ (reinaNegraVertical =
					 peon7BlancoVerical))
	    {
	      peon7BlancoHorizontal = 0;
	      peon7BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       peon8BlancoHorizontal) ^ (reinaNegraVertical =
					 peon8BlancoVerical))
	    {
	      peon8BlancoHorizontal = 0;
	      peon8BlancoVertical = 0;
	    }
	  if ((reyNegroHorizontal =
	       torre1BlancaHorizontal) ^ (reyNegroVertical =
					  torre1BlancaVerical))
	    {
	      torre1BlancaHorizontal = 0;
	      torre1BlancaVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       torre2BlancaHorizontal) ^ (reinaNegraVertical =
					  torre2BlancaVerical))
	    {
	      torre2BlancaHorizontal = 0;
	      torre2BlancaVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       alfil1BlancoHorizontal) ^ (reinaNegraVertical =
					  alfil1BlancoVerical))
	    {
	      alfil1BlancoHorizontal = 0;
	      alfil1BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       alfil2BlancoHorizontal) ^ (reinaNegraVertical =
					  alfil2BlancoVerical))
	    {
	      alfil2BlancoHorizontal = 0;
	      alfil2BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       caballo1BlancoHorizontal) ^ (reinaNegraVertical =
					    caballo1BlancoVerical;))
	    {
	      caballo1BlancoHorizontal = 0;
	      caballo1BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       caballo2BlancoHorizontal) ^ (reinaNegraVertical =
					    caballo2BlancoVerical))
	    {
	      caballo2BlancoHorizontal = 0;
	      caballo2BlancoVertical = 0;
	    }
	  if ((reinaNegraHorizontal =
	       reinaBLancaHorizontal) ^ (reinaNegraVertical =
					 reinaBlancaVerical))
	    {
	      reinaBlancaHorizontal = 0;
	      reinaBlancaVertical = 0;
	    }
	  break.
	return;
	}
