#include "restricciones.h"


int
verificarMovimientoTorre (int coordenadaPieza, int filaPieza,
			  int coordenadaMovimiento, int filaMovimiento)
{
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
