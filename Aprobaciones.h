#ifndef APROBACIONES_H_INCLUDED
#define APROBACIONES_H_INCLUDED
#include <stdio.h>
#include "Aprobacion.h"

typedef struct nodoLA { Aprobacion aprobacion;
                        nodoLA * sig;
                        } NodoAprobaciones;


typedef NodoAprobaciones * Aprobaciones;

/** Crea una lista de Aprobaciones vacia */
void crearAprobaciones(Aprobaciones &a);

/** Lista en pantalla todas las Aprobaciones de la Lista */
void printAprobaciones(Aprobaciones a);

/** Determina si una Aprobacion pertenece a la lista */
Boolean perteneceAprobaciones(Aprobaciones a, Aprobacion aprobacion);

/** Inserta una Aprobacion a la lista de Aprobaciones ordenado por fecha de aprobacion */
void insertarAprobaciones(Aprobaciones &a, Aprobacion aprobacion);

/** Elimina la Lista de Aprobaciones, liberando la memoria */
void eliminarAprobaciones(Aprobaciones &a);

#endif // APROBACIONES_H_INCLUDED
