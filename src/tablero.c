
#include "tablero.h"


void
imprimirTablero (int tablero[][8])
{
  int x, y;
  for (x = 0; x < 8; x++)
    {
      if (x % 2)
	{
	  for (y = 0; y < 8; y++)
	    {
	      if (tablero[x][y] != 0)
		{
		  if (tablero[x][y] == 1)
		    {
		      printf (" PB ");
		    }

		  else if (tablero[x][y] == -1)
		    {
		      printf (" PN ");
		    }

		  else if (tablero[x][y] == 2)
		    {
		      printf (" TB ");
		    }

		  else if (tablero[x][y] == -2)
		    {
		      printf (" TN ");
		    }

		  else if (tablero[x][y] == 3)
		    {
		      printf (" CB ");
		    }

		  else if (tablero[x][y] == -3)
		    {
		      printf (" CN ");
		    }

		  else if (tablero[x][y] == 4)
		    {
		      printf (" AB ");
		    }

		  else if (tablero[x][y] == -4)
		    {
		      printf (" AN ");
		    }

		  else if (tablero[x][y] == 5)
		    {
		      printf (" QB ");
		    }

		  else if (tablero[x][y] == -5)
		    {
		      printf (" QN ");
		    }

		  else if (tablero[x][y] == 6)
		    {
		      printf (" KB ");
		    }

		  else if (tablero[x][y] == -6)
		    {
		      printf (" KN ");
		    }
		}

	      else if (y % 2)
		{
		  printf (" // ");
		}

	      else
		{
		  printf (" ** ");
		}
	    }
	}

      else
	{
	  for (y = 0; y < 8; y++)
	    {
	      if (tablero[x][y] != 0)
		{
		  if (tablero[x][y] == 1)
		    {
		      printf (" PB ");
		    }

		  else if (tablero[x][y] == -1)
		    {
		      printf (" PN ");
		    }

		  else if (tablero[x][y] == 2)
		    {
		      printf (" TB ");
		    }

		  else if (tablero[x][y] == -2)
		    {
		      printf (" TN ");
		    }

		  else if (tablero[x][y] == 3)
		    {
		      printf (" CB ");
		    }

		  else if (tablero[x][y] == -3)
		    {
		      printf (" CN ");
		    }

		  else if (tablero[x][y] == 4)
		    {
		      printf (" AB ");
		    }

		  else if (tablero[x][y] == -4)
		    {
		      printf (" AN ");
		    }

		  else if (tablero[x][y] == 5)
		    {
		      printf (" QB ");
		    }

		  else if (tablero[x][y] == -5)
		    {
		      printf (" QN ");
		    }

		  else if (tablero[x][y] == 6)
		    {
		      printf (" KB ");
		    }

		  else if (tablero[x][y] == -6)
		    {
		      printf (" KN ");
		    }
		}

	      else if (y % 2)
		{
		  printf (" ** ");
		}

	      else
		{
		  printf (" // ");
		}
	    }
	}
      printf ("\n");
    }
}

int
recibirCoordenadas (int pieza, int casillaOrigen, int casillaDestino)
{
  return 0;
}
