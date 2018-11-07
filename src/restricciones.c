#include "restricciones.h"


int
verificarMovimientoTorre (int coordenadaPieza, int filaPieza,
			  int coordenadaMovimiento, int filaMovimiento)
{

  printf ("prueba\n");


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
}
