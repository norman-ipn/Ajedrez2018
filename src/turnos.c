#include "turnos.h"
void
cambiarTurno (char * turno)
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
}

void ingresarComando(char * turno, char tipoComando){
	int comandoCorrecto;

	comandoCorrecto = 0;

	while (comandoCorrecto == 0){
		switch (tipoComando){
			case 'r':
				iniciarJuego();
			break;

			case 's':
				rendirseJugador(turno);
			break;

			case 'm':
				printf("Ingrese los parámetros deseados");
				comandoCorrecto = moverPiezaIndicada(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, *turno);
			break;

			default:
				printf("Ingrese un comando correcto");
		}
	}

	return;
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
moverPiezaIndicada (int columnaPieza, int filaPieza, int columnaMovimiento, int filaMovimiento, char turno)
{
   int columnaComienzo = convertirColumnaaNumero(columnaPieza);
   int columnaFinal = convertirColumnaaNumero(columnaPieza);
   if(columnaComienzo == 0 || columnaFinal ==0){
     printf("Ingrese una columna valida\n");
     return 0;
   } else
   if(filaPieza == 0 || filaPieza >8 || filaMovimiento==0 || filaMovimiento >8)
   {
     printf("Ingrese una fila valida\n");
     return 0;
   } else
   if (columnaPieza == torreBlanco1Columna && filaPieza == torreBlanco1Fila){
		moverTorre(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == caballoBlanco1Columna && filaPieza == caballoBlanco1Fila){
		moverCaballo(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == alfilBlanco1Columna && filaPieza == alfilBlanco1Fila){
		moverAlfil(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == reinaBlancoColumna && filaPieza == reinaBlancoFila){
		moverReina(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == reyBlancoColumna && filaPieza == reyBlancoFila){
		moverRey(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno);
	} else
    if (columnaPieza == torreBlanco2Columna && filaPieza == torreBlanco2Fila){
		moverTorre(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == caballoBlanco2Columna && filaPieza == caballoBlanco2Fila){
		moverCaballo(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == alfilBlanco2Columna && filaPieza == alfilBlanco2Fila){
		moverAlfil(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco1Columna && filaPieza == peonBlanco1Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco2Columna && filaPieza == peonBlanco2Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco3Columna && filaPieza == peonBlanco3Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco4Columna && filaPieza == peonBlanco4Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco5Columna && filaPieza == peonBlanco5Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco6Columna && filaPieza == peonBlanco6Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco7Columna && filaPieza == peonBlanco7Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == peonBlanco8Columna && filaPieza == peonBlanco8Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyNegroColumna, reyNegroFila);
	} else
    if (columnaPieza == torreNegro1Columna && filaPieza == torreNegro1Fila){
		moverTorre(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == caballoNegro1Columna && filaPieza == caballoNegro1Fila){
		moverCaballo(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == alfilNegro1Columna && filaPieza == alfilNegro1Fila){
		moverAlfil(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == reinaNegroColumna && filaPieza == reinaNegroFila){
		moverReina(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == reyNegroColumna && filaPieza == reyNegroFila){
		moverRey(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno);
	} else
    if (columnaPieza == torreNegro2Columna && filaPieza == torreNegro2Fila){
		moverTorre(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == caballoNegro2Columna && filaPieza == caballoNegro2Fila){
		moverCaballo(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == alfilNegro2Columna && filaPieza == alfilNegro2Fila){
		moverAlfil(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro1Columna && filaPieza == peonNegro1Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro2Columna && filaPieza == peonNegro2Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro3Columna && filaPieza == peonNegro3Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro4Columna && filaPieza == peonNegro4Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro5Columna && filaPieza == peonNegro5Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro6Columna && filaPieza == peonNegro6Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro7Columna && filaPieza == peonNegro7Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
	} else
    if (columnaPieza == peonNegro8Columna && filaPieza == peonNegro8Fila){
		moverPeon(columnaPieza, filaPieza, columnaMovimiento, filaMovimiento, turno, reyBlancoColumna, reyBlancoFila);
  } else
    printf("No coincide ninguna con la coordenada \n");

}

int
convertirColumnaaNumero(char columna){
  switch(columna){
    case 'A':
        return 1;
    break;
    case 'B':
        return 2;
    break;
    case 'C':
        return 3;
    break;
    case 'D':
        return 4;
    break;
    case 'E':
        return 5;
    break;
    case 'F':
        return 6;
    break;
    case 'G':
        return 7;
    break;
    case 'H':
        return 8;
    break;

    default:
      return 0;
      break;
  }
}

void
mostrarTiempo (int tiempo)
{
  printf(tiempo);
  return;
}

void
rendirseJugador (char * turnoN)
{
  cambiarTurno(turnoN);
  if(turno == 'b'){
    printf("Se rendieron las blancas. Ganaron las negras \n");
  } else
  if(turno == 'n'){
    printf("Se rindieron las negras. Ganaron las blancas \n");
 }
}

void
reiniciarPartida ()
{
  iniciarJuego();
}