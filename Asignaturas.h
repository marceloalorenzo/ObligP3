#ifndef ASIGNATURAS_H_INCLUDED
#define ASIGNATURAS_H_INCLUDED
#include <stdio.h>
#include "Asignatura.h"

const int N = 10;

typedef Asignatura Asignaturas[N];

/** Carga una asignatura al arreglo de Asignaturas */
void cargarAsignaturas(Asignaturas &a, Asignatura asignatura);

/** Muestra por pantalla cada una de las Asignaturas del Arreglo */
void mostrarAsignaturas(Asignaturas a);

#endif // ASIGNATURAS_H_INCLUDED
