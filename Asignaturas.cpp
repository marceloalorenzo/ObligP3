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
    if(a.cantidad > num){
        return TRUE;
    }
    return FALSE;
}


/** Busca una Asignatura por su numero en la lista y devuelve la posicion de la Asignatura en en Array
Precondicion: La asignatura debe existir en el array */
Asignatura darAsignatura(Asignaturas a, int numAsig){
    return a.asignatura[numAsig];
}

/** Devuelve la cantidad de asignaturas */
int darCantidadAsignaturas(Asignaturas a){
    return a.cantidad;
}
