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
  int verificarDestino = 0;

  if (coordenadaPieza == coordenadaMovimiento)
    {
      return 0;
    }

  if (filaPieza == filaMovimiento)
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
verificarMovimientoCaballo (int coordenadaPieza, int filaPieza,int coordenadaMovimiento, int filaMovimiento){
    int absolutoFila = 0;
    int absolutoCoordenada = 0;
    if (coordenadaPieza == coordenadaMovimiento && filaPieza == filaMovimiento){
        return 0;
    }
    if (coordenadaMovimiento < 1 || coordenadaMovimiento > 8){
        return 0;
    }
    if (filaMovimiento < 1 || filaMovimiento > 8)
    {
      return 0;
    }
    if(filaPieza>filaMovimiento){
        absolutoFila = filaPieza-filaMovimiento;
    }else{
        absolutoFila = filaMovimiento-filaPieza;
    }
    if(coordenadaPieza>coordenadaMovimiento){
        absolutoCoordenada = coordenadaPieza-coordenadaMovimiento;
    }else{
        absolutoCoordenada = coordenadaMovimiento-coordenadaPieza;
    }
    if(absolutoCoordenada == 0 || absolutoFila ==0){
        return 0;
    }
    if(absolutoCoordenada+absolutoFila!=3){
        return 0;
    }
    if(absolutoCoordenada != 1 && absolutoFila != 1){
        return 0;
    }
    if(absolutoFila !=2 && absolutoCoordenada != 2){
        return 0;
    }
    if(verificarDestinoDesocupado(coordenadaMovimiento,filaMovimiento)==0){
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

    if (calcularDistanciaFila >=1 && calcularDistanciaFila <8 || calcularDistanciaColumna >=1 && calcularDistanciaColumna<8) 
       {
          return 0;
       }

    if (calcularDistanciaColumna >=1 && calcularDistanciaColumna <8 && calcularDistanciaFila >=1 && calcularDistanciaFila<8) 
       {
          return 0;
       }
    
      else
       {
          return 1;
       }
} 
 
