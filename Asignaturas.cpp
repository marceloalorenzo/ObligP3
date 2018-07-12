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
void cargarAsignaturas(Asignaturas &a, Asignatura asignatura){
    for(int i = 0; i < a.cantidad; i++){
        // cargarAsignatura(asignatura,  i);
    }
}

/** Muestra por pantalla cada una de las Asignaturas del Arreglo */
void mostrarAsignaturas(Asignaturas a){
    for(int i = 0; i < a.cantidad; i++){
        // printAsignatura(a.asignatura[a.cantidad]);
    }
}
