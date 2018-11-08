#include "restricciones.h"


int
verificarMovimientoTorre (int coordenadaPieza, int filaPieza,
			  int coordenadaMovimiento, int filaMovimiento)
{
  int i = 0;
  int minimo = 0;
  int maximo = 0;
  if (coordenadaPieza == coordenadaMovimiento && filaPieza == filaMovimiento)
    {
      return 0;
    }
  if (filaPieza != filaMovimiento || coordenadaPieza != coordenadaMovimiento)
    {
      return 0;
    }
  if (filaMovimiento < 1 || filaMovimiento > 8)
    {
      return 0;
    }
  if (coordenadaMovimiento < 1 || coordenadaMovimiento > 8)
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
      for (i = minimo; i <= maximo; i++)
	{
	  if (verificarDestinoDesocupado (i, filaPieza) == 0)
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
      for (i = minimo; i <= maximo; i++)
	{
	  if (verificarDestinoDesocupado (coordenadaPieza, i) == 0)
	    {
	      return 0;
	    }
	}
    }
  return 1;
}

int
verificarMovimientoRey (int coordenadaPieza, int filaPieza,
			int coordenadaMovimiento, int filaMovimiento)
{
  int calcularDistanciaFila = 0;
  int calcularDistanciaColumna = 0;

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
      return 1;
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
      return 1;
    }
  else
    {
      return 3;
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
