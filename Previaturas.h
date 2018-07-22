#ifndef PREVIATURAS_H_INCLUDED
#define PREVIATURAS_H_INCLUDED
#include <stdio.h>
#include "Boolean.h"
#include "Asignaturas.h"
#include "Alumno.h"

typedef struct nodoL { int numAsignatura;
                        nodoL * sig;
                        } NodoPreviaturas;

typedef NodoPreviaturas * ListaAdy;

typedef ListaAdy * Previaturas;

/** Crea las listas de previaturas y las inicializa en NULL */
void crearPreviaturas(Previaturas &p, int cantAsignaturas);

/** Dado el número que identifica a una asignatura,
 obtener un listado conteniendo número y nombre de todas sus previas.
 Precondicion: Existe la asignatura con codigo numAsignatura */
void listarPrevias(Previaturas p, Asignaturas a, int numAsignatura);

/** Dados dos números de asignaturas agregar una previatura entre ellas */
void agregarPreviatura(Previaturas &p, int a1, int a2);

/** Determina si existe un ciclo en el grafo de previaturas */
Boolean existeCicloPreviaturas(Previaturas &p, int a1, int a2);

/** Inserta un nuevo nodo al grafo de previaturas */
void insFront(ListaAdy &l, int n);

/** Determina si una previa ya existe en la lista de previaturas */
Boolean pertenece(Previaturas p, int asig, int previa);

/** Elimina las prviaturas */
void eliminarPreviaturas(Previaturas &p, int cantAsignaturas);

/** Elimina la ListaAdy */
void eliminarListaAdy(ListaAdy &l);

/** Devuelve TRUE sii el alumno "a" tiene aprobadas todas las previas de la asignatura "numAsignatura" */
Boolean cumplePreviaturasAsignatura(Previaturas &p, Alumno a, int numAsignatura);

#endif // PREVIATURAS_H_INCLUDED
