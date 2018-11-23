#include "restricciones.h"

int
verificarMovimientoTorre (int tablero[8][8], int coordenadaPieza,
			  int filaPieza, int coordenadaMovimiento,
			  int filaMovimiento)
{
  int i = 0;
  int minimo = 0;
  int maximo = 0;
  int color = 0;
  int colorDestino = 0;
  if (tablero[filaPieza][coordenadaPieza] == 0)
    {
      return 0;
    }
  if (tablero[filaPieza][coordenadaPieza] < 0)
    {
      color = -1;
    }
  else
    {
      color = 1;
    }
  if (coordenadaPieza == coordenadaMovimiento && filaPieza == filaMovimiento)
    {
      return 0;
    }
  if (filaPieza != filaMovimiento && coordenadaPieza != coordenadaMovimiento)
    {
      return 0;
    }
  if (filaMovimiento < 0 || filaMovimiento > 7)
    {
      return 0;
    }
  if (coordenadaMovimiento < 0 || coordenadaMovimiento > 7)
    {
      return 0;
    }
  if (filaMovimiento == filaPieza)
    {
      if (coordenadaPieza < coordenadaMovimiento)
	{
	  minimo = coordenadaPieza;
	  maximo = coordenadaMovimiento;
	}
      else
	{
	  minimo = coordenadaMovimiento;
	  maximo = coordenadaPieza;
	}
      for (i = minimo + 1; i < maximo; i++)
	{
	  if (tablero[filaPieza][i] != 0)
	    {
	      return 0;
	    }
	}
    }
  else
    {
      if (filaPieza < filaMovimiento)
	{
	  minimo = filaPieza;
	  maximo = filaMovimiento;
	}
      else
	{
	  minimo = filaMovimiento;
	  maximo = filaPieza;
	}
      for (i = minimo + 1; i < maximo; i++)
	{
	  if (tablero[i][coordenadaPieza] != 0)
	    {
	      return 0;
	    }
	}
    }
  if (tablero[filaMovimiento][coordenadaMovimiento] != 0)
    {
      if (tablero[filaMovimiento][coordenadaMovimiento] < 0)
	{
	  colorDestino = -1;
	}
      else
	{
	  colorDestino = 1;
	}
      if (colorDestino == color)
	{
	  return 0;
	}
    }
  return 1;
}

int
verificarMovimientoRey (int tablero[8][8], int coordenadaPieza, int filaPieza,
			int coordenadaMovimiento, int filaMovimiento)
{
  int colorPieza = 0;
  int colorDestino = 0;
  int calcularDistanciaFila = 0;
  int calcularDistanciaColumna = 0;
  int verificarDestino = 0;

  if (coordenadaMovimiento < 1 || coordenadaMovimiento > 8
      || filaMovimiento < 1 || filaMovimiento > 8)
    {
      return 0;
    }

  if (coordenadaMovimiento == coordenadaPieza && filaMovimiento == filaPieza)
    {
      return 0;
    }

  if (coordenadaPieza > coordenadaMovimiento)
    {
      calcularDistanciaColumna = coordenadaPieza - coordenadaMovimiento;
    }

  if (coordenadaPieza < coordenadaMovimiento)
    {
      calcularDistanciaColumna = coordenadaMovimiento - coordenadaPieza;
    }

  if (calcularDistanciaColumna != 1)
    {
      return 0;
    }

  if (filaPieza > filaMovimiento)
    {
      calcularDistanciaFila = filaPieza - filaMovimiento;
    }

  if (filaPieza > filaMovimiento)
    {
      calcularDistanciaFila = filaMovimiento - filaPieza;
    }

  if (calcularDistanciaFila != 1)
    {
      return 0;
    }

  if (tablero[coordenadaMovimiento + 1][filaMovimiento] == -1
      || tablero[coordenadaMovimiento + 1][filaMovimiento] == 1)
    {
      return 0;
    }

  if (tablero[coordenadaMovimiento + 1][filaMovimiento + 1] == -1
      || tablero[coordenadaMovimiento + 1][filaMovimiento + 1] == 1)
    {
      return 0;
    }

  if (tablero[coordenadaMovimiento][filaMovimiento + 1] == -1
      || tablero[coordenadaMovimiento][filaMovimiento + 1] == 1)
    {
      return 0;
    }

  if (tablero[coordenadaMovimiento - 1][filaMovimiento] == -1
      || tablero[coordenadaMovimiento - 1][filaMovimiento] == 1)
    {
      return 0;
    }

  if (tablero[coordenadaMovimiento - 1][filaMovimiento - 1] == -1
      || tablero[coordenadaMovimiento - 1][filaMovimiento - 1] == 1)
    {
      return 0;
    }

  if (tablero[coordenadaMovimiento][filaMovimiento - 1] == -1
      || tablero[coordenadaMovimiento][filaMovimiento - 1] == 1)
    {
      return 0;
    }

  if (tablero[coordenadaMovimiento][filaMovimiento] == 0)
    {
      return 1;
    }

  if (tablero[filaPieza][coordenadaPieza] < 0)
    {
      colorPieza = -1;
    }
  else
    {
      colorPieza = 1;
    }

  if (tablero[filaMovimiento][coordenadaMovimiento] < 0)
    {
      colorDestino = -1;
    }
  else
    {
      colorDestino = 1;
    }

  if (colorDestino == colorPieza)
    {
      return 0;
    }
  else
    {
      return 1;
    }

}

int
verificarDestinoDesocupado (int coordenadaMovimiento, int filaMovimiento)
{
  printf ("prueba\n");
}

int
verificarMovimientoPeon (int coordenadaPieza, int filaPieza,
			 int coordenadaMovimiento, int filaMovimiento)
{
  if (coordenadaMovimiento == (coordenadaPieza + 1)
      && filaMovimiento == filaPieza)
    {
      return 1;
    }
  if (coordenadaMovimiento == (coordenadaPieza + 1)
      && filaMovimiento == (filaPieza + 1))
    {
      return 1;
    }
  if (coordenadaMovimiento == (coordenadaPieza + 2)
      && filaMovimiento == filaPieza)
    {
      return 1;
    }
  return 0;
}

int
verificarMovimientoCaballo (int coordenadaPieza, int filaPieza,
			    int coordenadaMovimiento, int filaMovimiento)
{
  int absolutoFila = 0;
  int absolutoCoordenada = 0;
  if (coordenadaPieza == coordenadaMovimiento && filaPieza == filaMovimiento)
    {
      return 0;
    }
  if (coordenadaMovimiento < 1 || coordenadaMovimiento > 8)
    {
      return 0;
    }
  if (filaMovimiento < 1 || filaMovimiento > 8)
    {
      return 0;
    }
  if (filaPieza > filaMovimiento)
    {
      absolutoFila = filaPieza - filaMovimiento;
    }
  else
    {
      absolutoFila = filaMovimiento - filaPieza;
    }
  if (coordenadaPieza > coordenadaMovimiento)
    {
      absolutoCoordenada = coordenadaPieza - coordenadaMovimiento;
    }
  else
    {
      absolutoCoordenada = coordenadaMovimiento - coordenadaPieza;
    }
  if (absolutoCoordenada == 0 || absolutoFila == 0)
    {
      return 0;
    }
  if (absolutoCoordenada + absolutoFila != 3)
    {
      return 0;
    }
  if (absolutoCoordenada != 1 && absolutoFila != 1)
    {
      return 0;
    }
  if (absolutoFila != 2 && absolutoCoordenada != 2)
    {
      return 0;
    }
  if (verificarDestinoDesocupado (coordenadaMovimiento, filaMovimiento) == 0)
    {
      return 0;
    }
  return 1;
}

int
verificarMovimientoReina (int coordenadaPieza, int filaPieza,
			  int coordenadaMovimiento, int filaMovimiento)
{
  int calcularDistanciaFila = 0;
  int calcularDistanciaColumna = 0;
  int calcularDistanciaDiagonal = 0;
  int verificarDestino = 0;

  if (coordenadaPieza != coordenadaMovimiento && filaPieza != filaMovimiento)
    {
      return 0;
    }

  if (coordenadaPieza != coordenadaMovimiento || filaPieza != filaMovimiento)
    {
      return 0;
    }

  if (coordenadaPieza > coordenadaMovimiento)
    {
      calcularDistanciaColumna = coordenadaPieza - coordenadaMovimiento;
    }

  if (coordenadaPieza < coordenadaMovimiento)
    {
      calcularDistanciaColumna = coordenadaMovimiento - coordenadaPieza;
    }

  if (filaPieza > filaMovimiento)
    {
      calcularDistanciaFila = filaPieza - filaMovimiento;
    }

  if (filaPieza < filaMovimiento)
    {
      calcularDistanciaFila = filaMovimiento - filaPieza;
    }

  if (calcularDistanciaFila >= 1 && calcularDistanciaFila < 8
      || calcularDistanciaColumna >= 1 && calcularDistanciaColumna < 8)
    {
      return 0;
    }

  if (calcularDistanciaColumna >= 1 && calcularDistanciaColumna < 8
      && calcularDistanciaFila >= 1 && calcularDistanciaFila < 8)
    {
      return 0;
    }

  else
    {
      return 1;
    }
}

int
verificarMovimientoAlfil (int coordenadaPieza, int filaPieza,
			  int coordenadaMovimiento, int filaMovimiento)
{
  int calcularDistanciaFila = 0;
  int calcularDistanciaColumna = 0;

  if (coordenadaPieza == coordenadaMovimiento && filaPieza == filaMovimiento)
    {
      return 0;
    }
  if (coordenadaPieza != coordenadaMovimiento && filaPieza != filaMovimiento)
    {
      return 0;
    }
  if (coordenadaPieza > coordenadaMovimiento)
    {
      calcularDistanciaColumna = coordenadaPieza - coordenadaMovimiento;
    }
  if (coordenadaPieza < coordenadaMovimiento)
    {
      calcularDistanciaColumna = coordenadaMovimiento - coordenadaPieza;
    }
  if (filaPieza > filaMovimiento)
    {
      calcularDistanciaFila = filaPieza - filaMovimiento;
    }
  if (filaPieza < filaMovimiento)
    {
      calcularDistanciaFila = filaMovimiento - filaPieza;
    }
  if (calcularDistanciaColumna >= 1 && calcularDistanciaColumna < 8
      && calcularDistanciaFila >= 1 && calcularDistanciaFila < 8)
    {
      return 0;
    }
  else
    {
      return 1;
    }
}

int
siEsta (int filaPiezaComp, int columnaPiezaComp, int filaPieza1,
	int columnaPieza1, int filaPieza2, int columnaPieza2, int filaPieza3,
	int columnaPieza3, int filaPieza4, int columnaPieza4, int filaPieza5,
	int columnaPieza5, int filaPieza6, int columnaPieza6, int filaPieza7,
	int columnaPieza7, int filaPieza8, int columnaPieza8, int filaPieza9,
	int columnaPieza9, int filaPieza10, int columnaPieza10,
	int filaPieza11, int columnaPieza11, int filaPieza12,
	int columnaPieza12, int filaPieza13, int columnaPieza13,
	int filaPieza14, int columnaPieza14, int filaPieza15,
	int columnaPieza15, int filaPieza16, int columnaPieza16,
	int filaPieza17, int columnaPieza17, int filaPieza18,
	int columnaPieza18, int filaPieza19, int columnaPieza19,
	int filaPieza20, int columnaPieza20, int filaPieza21,
	int columnaPieza21, int filaPieza22, int columnaPieza22,
	int filaPieza23, int columnaPieza23, int filaPieza24,
	int columnaPieza24, int filaPieza25, int columnaPieza25,
	int filaPieza26, int columnaPieza26, int filaPieza27,
	int columnaPieza27, int filaPieza28, int columnaPieza28,
	int filaPieza29, int columnaPieza29, int filaPieza30,
	int columnaPieza30, int filaPieza31, int columnaPieza31,
	int filaPieza32, int columnaPieza32, int filaPieza33,
	int columnaPieza33, int filaPieza34, int columnaPieza34,
	int filaPieza35, int columnaPieza35, int filaPieza36,
	int columnaPieza36, int filaPieza37, int columnaPieza37,
	int filaPieza38, int columnaPieza38, int filaPieza39,
	int columnaPieza39, int filaPieza40, int columnaPieza40,
	int filaPieza41, int columnaPieza41, int filaPieza42,
	int columnaPieza42, int filaPieza43, int columnaPieza43,
	int filaPieza44, int columnaPieza44, int filaPieza45,
	int columnaPieza45, int filaPieza46, int columnaPieza46,
	int filaPieza47, int columnaPieza47, int filaPieza48,
	int columnaPieza48, int filaPieza49, int columnaPieza49,
	int filaPieza50, int columnaPieza50, int filaPieza51,
	int columnaPieza51, int filaPieza52, int columnaPieza52,
	int filaPieza53, int columnaPieza53, int filaPieza54,
	int columnaPieza54, int filaPieza55, int columnaPieza55,
	int filaPieza56, int columnaPieza56, int filaPieza57,
	int columnaPieza57, int filaPieza58, int columnaPieza58,
	int filaPieza59, int columnaPieza59, int filaPieza60,
	int columnaPieza60, int filaPieza61, int columnaPieza61,
	int filaPieza62, int columnaPieza62, int filaPieza63,
	int columnaPieza63, int filaPieza64, int columnaPieza64)
{
  if (filaPiezaComp == filaPieza1 && columnaPiezaComp == columnaPieza1)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza2 && columnaPiezaComp == columnaPieza2)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza3 && columnaPiezaComp == columnaPieza3)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza4 && columnaPiezaComp == columnaPieza4)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza5 && columnaPiezaComp == columnaPieza5)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza6 && columnaPiezaComp == columnaPieza6)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza7 && columnaPiezaComp == columnaPieza7)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza8 && columnaPiezaComp == columnaPieza8)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza9 && columnaPiezaComp == columnaPieza9)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza10 && columnaPiezaComp == columnaPieza10)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza11 && columnaPiezaComp == columnaPieza11)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza12 && columnaPiezaComp == columnaPieza12)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza13 && columnaPiezaComp == columnaPieza13)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza14 && columnaPiezaComp == columnaPieza14)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza15 && columnaPiezaComp == columnaPieza15)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza16 && columnaPiezaComp == columnaPieza16)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza17 && columnaPiezaComp == columnaPieza17)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza18 && columnaPiezaComp == columnaPieza18)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza19 && columnaPiezaComp == columnaPieza19)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza20 && columnaPiezaComp == columnaPieza20)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza21 && columnaPiezaComp == columnaPieza21)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza22 && columnaPiezaComp == columnaPieza22)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza23 && columnaPiezaComp == columnaPieza23)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza24 && columnaPiezaComp == columnaPieza24)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza25 && columnaPiezaComp == columnaPieza25)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza26 && columnaPiezaComp == columnaPieza26)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza27 && columnaPiezaComp == columnaPieza27)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza28 && columnaPiezaComp == columnaPieza28)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza29 && columnaPiezaComp == columnaPieza29)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza30 && columnaPiezaComp == columnaPieza30)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza31 && columnaPiezaComp == columnaPieza31)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza32 && columnaPiezaComp == columnaPieza32)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza33 && columnaPiezaComp == columnaPieza33)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza34 && columnaPiezaComp == columnaPieza34)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza35 && columnaPiezaComp == columnaPieza35)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza36 && columnaPiezaComp == columnaPieza36)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza37 && columnaPiezaComp == columnaPieza37)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza38 && columnaPiezaComp == columnaPieza38)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza39 && columnaPiezaComp == columnaPieza39)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza40 && columnaPiezaComp == columnaPieza40)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza41 && columnaPiezaComp == columnaPieza41)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza42 && columnaPiezaComp == columnaPieza42)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza43 && columnaPiezaComp == columnaPieza43)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza44 && columnaPiezaComp == columnaPieza44)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza45 && columnaPiezaComp == columnaPieza45)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza46 && columnaPiezaComp == columnaPieza46)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza47 && columnaPiezaComp == columnaPieza47)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza48 && columnaPiezaComp == columnaPieza48)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza49 && columnaPiezaComp == columnaPieza49)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza50 && columnaPiezaComp == columnaPieza50)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza51 && columnaPiezaComp == columnaPieza51)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza52 && columnaPiezaComp == columnaPieza52)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza53 && columnaPiezaComp == columnaPieza53)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza54 && columnaPiezaComp == columnaPieza54)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza55 && columnaPiezaComp == columnaPieza55)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza56 && columnaPiezaComp == columnaPieza56)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza57 && columnaPiezaComp == columnaPieza57)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza58 && columnaPiezaComp == columnaPieza58)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza59 && columnaPiezaComp == columnaPieza59)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza60 && columnaPiezaComp == columnaPieza60)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza61 && columnaPiezaComp == columnaPieza61)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza62 && columnaPiezaComp == columnaPieza62)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza63 && columnaPiezaComp == columnaPieza63)
    {
      return 1;
    }
  if (filaPiezaComp == filaPieza64 && columnaPiezaComp == columnaPieza64)
    {
      return 1;
    }
  return 0;
}
