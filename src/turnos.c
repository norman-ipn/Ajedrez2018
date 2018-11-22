#include "turnos.h"
void
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
  return;
}

void
ingresarComando (char *turno, char tipoComando)
{
  int comandoCorrecto;
  int *posicionInicialPieza;
  int *posicionFinalPieza;

  comandoCorrecto = 0;
  posicionInicialPieza = 0;
  posicionFinalPieza = 0;

  while (comandoCorrecto == 0)
    {
      switch (tipoComando)
	{
	case 'r':
	  reiniciarPartida ();
	  comandoCorrecto = 1;
	  break;

	case 's':
	  rendirseJugador (turno);
	  comandoCorrecto = 1;
	  break;

	case 'm':
	  printf ("Ingrese los parámetros deseados");
	  printf
	    ("Asignar valores a los apuntadores posicionInicialPieza, posicionFinalPieza");
	  comandoCorrecto =
	    moverPiezaIndicada (posicionInicialPieza, posicionFinalPieza);
	  break;

	default:
	  printf ("Ingrese un comando correcto");
	}
    }

  return;
}

int
moverPiezaIndicada (int *posicionInicialPieza, int *posicionFinalPieza)
{
  int posicionInicial = *posicionInicialPieza;

  switch (posicionInicial)
    {
    case -6:
      moverPeon (posicionInicialPieza, posicionFinalPieza);
      break;

    case -5:
      moverTorre (posicionInicialPieza, posicionFinalPieza);
      break;

    case -4:
      moverCaballo (posicionInicialPieza, posicionFinalPieza);
      break;

    case -3:
      moverAlfil (posicionInicialPieza, posicionFinalPieza);
      break;

    case -2:
      moverReina (posicionInicialPieza, posicionFinalPieza);
      break;

    case -1:
      moverRey (posicionInicialPieza, posicionFinalPieza);
      break;

    case 0:
      printf ("No existe ninguna pieza en esta casilla inicial");
      return 0;
      break;

    case 1:
      moverRey (posicionInicialPieza, posicionFinalPieza);
      break;

    case 2:
      moverReina (posicionInicialPieza, posicionFinalPieza);
      break;

    case 3:
      moverAlfil (posicionInicialPieza, posicionFinalPieza);
      break;

    case 4:
      moverCaballo (posicionInicialPieza, posicionFinalPieza);
      break;

    case 5:
      moverTorre (posicionInicialPieza, posicionFinalPieza);
      break;

    case 6:
      moverPeon (posicionInicialPieza, posicionFinalPieza);
      break;

    default:
      printf ("Valor invalido");
      return 0;
    }
  return 1;
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
  return;
}



void
mostrarTiempo (int tiempo)
{
  printf (tiempo);
  return;
}

void
rendirseJugador (char *turnoN)
{
  cambiarTurno (turnoN);
  if (turno == 'b')
    {
      printf ("Se rendieron las blancas. Ganaron las negras \n");
    }
  else if (turno == 'n')
    {
      printf ("Se rindieron las negras. Ganaron las blancas \n");
    }
  return;
}

void
reiniciarPartida ()
{
  iniciarJuego ();
  return;
}
