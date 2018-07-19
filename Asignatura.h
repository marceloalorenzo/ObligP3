#ifndef ASIGNATURA_H_INCLUDED
#define ASIGNATURA_H_INCLUDED
#include <stdio.h>
#include "String.h"
#include "Boolean.h"

typedef struct {int numero;
                String nombre;
                } Asignatura;

/** Carga una Asignatura recibiendo como parámetro el número de Asignatura */
void cargarAsignatura(Asignatura &a, int num);

/** Selectora del nombre */
void darNombre(String &s, Asignatura a);

/** Selectora del numero */
int darNumero(Asignatura a);

/** Muestra la asignatura en pantalla */
void printAsignatura(Asignatura a);


#endif // ASIGNATURA_H_INCLUDED
