#ifndef ASIGNATURA_H_INCLUDED
#define ASIGNATURA_H_INCLUDED
#include <stdio.h>
#include "String.h"

typedef struct {int numero;
                String nombre;
                } Asignatura;

/** Carga una Asignatura recibiendo como par�metro el n�mero de Asignatura */
void cargarAsignatura(Asignatura &a, int num);

/** Selectora del nombre */
void darNombre(Asignatura a);

/** Selectora del numero */
void darNumero(Asignatura a);

/** Muestra la asignatura en pantalla */
void printAsignatura(Asignatura a);


#endif // ASIGNATURA_H_INCLUDED
