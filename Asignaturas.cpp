#include "Asignaturas.h"


/** Reserva dinámicamente n celdas para el arreglo
    Precondición: n > 0 */
void crearAsignaturas(Asignaturas &a, int n){
    a.asignatura = new Asignatura[n];
    a.cantidad = n;
}

/** Libera dinámicamente las celdas ocupadas por el arreglo */
void eliminarAignaturas(Asignaturas &a){
    delete [] a.asignatura;
    a.asignatura = NULL;
    a.cantidad = 0;
}

/** Carga el arreglo de Asignaturas desde teclado */
void cargarAsignaturas(Asignaturas &a){
    for(int i = 0; i < a.cantidad; i++){
        cargarAsignatura(a.asignatura[i],  i);
    }
}

/** Muestra por pantalla cada una de las Asignaturas del Arreglo */
void mostrarAsignaturas(Asignaturas a){
    for(int i = 0; i < a.cantidad; i++){
        printAsignatura(a.asignatura[i]);
    }
}

/** Dado un numero de asignatura determina si la Asignatura pertenece al Array */
Boolean existeAsignatura(Asignaturas a, int num){
    Boolean existe = FALSE;
    int i = 0;
    while(!existe && i < a.cantidad){
        if(num == darNumero(a.asignatura[i])){
            existe = TRUE;
        } else {
            i++;
        }
    }
    return existe;
}


/** Busca una Asignatura por su numero en la lista y devuelve la posicion de la Asignatura en en Array */
int darAsignaturaLista(Asignaturas a, int numAsig){
    Boolean encontreAsignatura = FALSE;
    int num;
    int posAsignatura;
    int i = 0;
    while(!encontreAsignatura && i < a.cantidad){
        num = darNumero(a.asignatura[i]);
        if(numAsig == num){
            encontreAsignatura = TRUE;
            posAsignatura = i;
        } else {
            i++;
        }
    }
    return posAsignatura;
}
