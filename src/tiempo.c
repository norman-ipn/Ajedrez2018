#include "tiempo.h"
void
disminuirTiempo (int *tiempoJugador)
{
  (*tiempoJugador)--;
}

void
guardarTiempo (int tiempo, int *tiempoJugador)
{
  (*tiempoJugador) = tiempo;
}

int
pausarTiempo (int *tiempoJugador)
{
  int tiempoPausado = (*tiempoJugador);
  return tiempoPausado;
}
