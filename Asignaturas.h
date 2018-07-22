#ifndef ASIGNATURAS_H_INCLUDED
#define ASIGNATURAS_H_INCLUDED
#include <stdio.h>
#include "Asignatura.h"

typedef struct { Asignatura * asignatura;
                 int cantidad;
                } Asignaturas;

/** Reserva dinámicamente n celdas para el arreglo
    Precondición: n > 0 */
void crearAsignaturas(Asignaturas &a, int n);

/** Libera dinámicamente las celdas ocupadas por el arreglo */
void eliminarAignaturas(Asignaturas &a);

/** Carga el arreglo de Asignaturas desde teclado */
void cargarAsignaturas(Asignaturas &a);

/** Muestra por pantalla cada una de las Asignaturas del Arreglo */
void mostrarAsignaturas(Asignaturas a);

/** Dado un numero de asignatura determina si la Asignatura pertenece al Array */
Boolean existeAsignatura(Asignaturas a, int num);

/** Busca una Asignatura por su numero en la lista y devuelve la posicion de la Asignatura en en Array */
Asignatura darAsignatura(Asignaturas a, int numAsig);

/** Devuelve la cantidad de asignaturas */
int darCantidadAsignaturas(Asignaturas a);

#endif // ASIGNATURAS_H_INCLUDED
