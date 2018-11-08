#include "turnos.h"
char
cambiarTurno (char turno)
{
  printf ("prueba\n");
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

}

int
moverPiezaIndicada (int columnaPieza, int filaPieza, int columnaMovimiento, int filaMovimiento, char turno)
{
   int columnaComienzo = convertirColumnaaNumero(columnaPieza);
   int columnaFinal = convertirColumnaaNumero(columnaPieza);
   if(columnaComienzo == 0 || columnaFinal ==0){
     printf("Ingrese una columna valida\n", );
     return 0;
   } else
   if(filaPieza == 0 || filaPieza >8 || filaMovimiento==0 || filaMovimiento >8)
   {
     printf("Ingrese una fila valida\n", );
     return 0;
   } else


}

int
convertirColumnaaNumero(char columna){
  switch(){
    case "A":
        return 1;
    break;
    case "B":
        return 2;
    break;
    case "C":
        return 3;
    break;
    case "D":
        return 4;
    break;
    case "E":
        return 5;
    break;
    case "F":
        return 6;
    break;
    case "G":
        return 7;
    break;
    case: "H":
        return 8;
    break;

    default:
      return 0;
      break;
  }
  return columnaConvert;
}

void
mostrarTiempo (int tiempo)
{

}
void
rendirseJugador (char * turno)
{
 char turnoNuevo = cambiarTurno(turno);
 if(turnoNuevo == "b"){
   printf("Se rendieron las blancas. Ganaron las negras \n");
 } else
 if(turnoNuevo =="n"){
   printf("Se riendieron las negras. Ganaron las blancas \n");
 }
}
void
reiniciarPartida ()
{
  iniciarJuego();
}
