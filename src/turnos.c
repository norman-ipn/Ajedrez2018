#include "turnos.h"
char
cambiarTurno (char *turno)
{
  if (*turno == 'b')
    {
      *turno = 'n';
      indicarTurno (*turno);
    }
  else
    {
      *turno = 'b';
      indicarTurno (*turno);
    }
  return *turno;
}

int
ingresarComando (char turno, char tipoComando)
{

}

void
indicarTurno (char turno)
{
  if (turno == 'b')
    {
      printf ("Turno de las blancas");
    }
  else
    {
      printf ("Turno de las negras");
    }
}

int
moverPiezaIndicada (int coordenadaPieza, int filaPieza,
		    int coordenadaMovimiento, int filaMovimiento)
{

}

void
mostrarTiempo (int tiempo)
{
  printf (tiempo);
}

void
rendirseJugador (char turno)
{

}

void
reiniciarPartida ()
{

}
