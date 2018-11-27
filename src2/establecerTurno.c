#include "establecerTurno.h"

int 
establecerTurno(int movimiento, int BN) // BN es el jugador que hizo el movimiento validado 0 = Negras 1=Blancas; movimiento es el valor la funcion que valida que el moimiento es coorecto
{
    if(movimiento == 1)
    {
      if (BN == 1)
      {
        return 0;
      }
      if(BN == 0)
      {
        return 1;
      }
    }
    
    if(BN == 0)
    {
      if(BN == 1)
      { 
        reutn 1;
      }
      if(BN == 0)
      {
        return 0;
      }
     }
}// si retorna 0 el turno es del jugador de las piezas Negras
 // si retorna 1 el turno es del jugador de las piezas Blancas
