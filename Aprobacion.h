#ifndef APROBACION_H_INCLUDED
#define APROBACION_H_INCLUDED
#include <stdio.h>
#include "String.h"
#include "Fecha.h"
#include "Asignatura.h"

typedef struct {Asignatura asignatura;
                Fecha fechaAprobacion;
                int calificacion;
                } Aprobacion;

/** Carga una Aprobacion recibiendo los datos desde teclado */
void cargarAprobacion(Aprobacion &a);

/** Muestra por pantalla los datos de la Aprobacion */
void printAprobacion(Aprobacion a);

/** Selectora del numero de Asignatura */
int darNumeroAsig(Aprobacion a);

/** Selectora del nombre de Asignatura */
String darNombreAsig(String &s, Aprobacion a);

/** Selectora de la Fecha de Aprobacion */
Fecha darFechaAprobacion(Aprobacion a);

/** Selectora de la Calificacion */
int darCalificacion(Aprobacion a);

#endif // APROBACION_H_INCLUDED
