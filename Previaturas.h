#ifndef PREVIATURAS_H_INCLUDED
#define PREVIATURAS_H_INCLUDED
#include <stdio.h>
#include "Boolean.h"

typedef struct nodoL { int numAsignatura;
                        nodoL * sig;
                        } NodoPreviaturas;

typedef NodoPreviaturas * ListaAdy;

const int M = 10;

typedef ListaAdy Previaturas[M];

/** Operaciones Auxiliares */
void crear(ListaAdy &l);

void insFront(ListaAdy &l, int n);

Boolean pertenece(ListaAdy l, int n);

int largo(ListaAdy l);

void desplegarListaAdy(listaAdy l);

/** Crear un grafo de N vértices y sin aristas */
void crearGrafoPreviaturas(Previaturas &p);

/** Dados dos números de asignaturas agregar una previatura entre ellas */
void agregarPreviatura(Previaturas &p, int a1, int a2);

/** Dado el número que identifica a una asignatura,
 obtener un listado conteniendo número y nombre de todas sus previas */
void listarPrevias(Previaturas p, int numAsignatura);

#endif // PREVIATURAS_H_INCLUDED
