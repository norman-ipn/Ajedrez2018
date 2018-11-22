#include "tablero.h"

void
imprimirTablero (int Tablero[][8])
{
  int x, y;
  for (x = 0; x < 8; x++)
    {
      if (x % 2)
	{
	  for (y = 0; y < 8; y++)
	    {
	      if (Tablero[x][y] != 0)
		{
		  if (Tablero[x][y] == 6)
		    {
		      printf (" PB ");
		    }

		  else if (Tablero[x][y] == -6)
		    {
		      printf (" PN ");
		    }

		  else if (Tablero[x][y] == 5)
		    {
		      printf (" TB ");
		    }

		  else if (Tablero[x][y] == -5)
		    {
		      printf (" TN ");
		    }

		  else if (Tablero[x][y] == 4)
		    {
		      printf (" CB ");
		    }

		  else if (Tablero[x][y] == -4)
		    {
		      printf (" CN ");
		    }

		  else if (Tablero[x][y] == 3)
		    {
		      printf (" AB ");
		    }

		  else if (Tablero[x][y] == -3)
		    {
		      printf (" AN ");
		    }

		  else if (Tablero[x][y] == 2)
		    {
		      printf (" QB ");
		    }

		  else if (Tablero[x][y] == -2)
		    {
		      printf (" QN ");
		    }

		  else if (Tablero[x][y] == 1)
		    {
		      printf (" KB ");
		    }

		  else if (Tablero[x][y] == -1)
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
	      if (Tablero[x][y] != 0)
		{
		  if (Tablero[x][y] == 6)
		    {
		      printf (" PB ");
		    }

		  else if (Tablero[x][y] == -6)
		    {
		      printf (" PN ");
		    }

		  else if (Tablero[x][y] == 5)
		    {
		      printf (" TB ");
		    }

		  else if (Tablero[x][y] == -5)
		    {
		      printf (" TN ");
		    }

		  else if (Tablero[x][y] == 4)
		    {
		      printf (" CB ");
		    }

		  else if (Tablero[x][y] == -4)
		    {
		      printf (" CN ");
		    }

		  else if (Tablero[x][y] == 3)
		    {
		      printf (" AB ");
		    }

		  else if (Tablero[x][y] == -3)
		    {
		      printf (" AN ");
		    }

		  else if (Tablero[x][y] == 2)
		    {
		      printf (" QB ");
		    }

		  else if (Tablero[x][y] == -2)
		    {
		      printf (" QN ");
		    }

		  else if (Tablero[x][y] == 1)
		    {
		      printf (" KB ");
		    }

		  else if (Tablero[x][y] == -1)
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
