#include <stdio.h>
int
main (void)
{
  int i = 0, p = 0;
  for (i = 1; i <= 8; i++)
    {
      for (p = 1; p <= 8; p++)
	{
	  if ((i == 1 && p == 1) || (i == 1 && p == 8) || (i == 8 && p == 1)
	       || (i == 8 && p == 8))
	    {
	      printf ("T ");
	    }
	  else if ((i == 1 && p == 2) || (i == 1 && p == 7)
		   || (i == 8 && p == 2) || (i == 8 && p == 7))
	    {
	      printf ("C ");
	    }
	  else if ((i == 1 && p == 3) || (i == 1 && p == 6)
		   || (i == 8 && p == 3) || (i == 8 && p == 6))
	    {
	      printf ("A ");
	    }
	  else if ((i == 1 && p == 5) || (i == 8 && p == 4))
	    {
	      printf ("K ");
	    }
	  else if ((i == 1 && p == 4) || (i == 8 && p == 5))
	    {
	      printf ("Q ");
	    }
	  else if (i == 2 || i == 7)
	    {
	      printf ("P ");
	    }
	  else
	    {
	      printf ("* ");
	    }
	}
      printf ("\n");
    }
  return 0;
}


