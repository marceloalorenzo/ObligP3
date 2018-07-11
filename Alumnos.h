#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED
#include <stdio.h>
#include "Alumno.h"

typedef struct nodoA {Alumno alumno;
                      nodoA * hIzq;
                      nodoA * hDer;
                      int altura;
                      } NodoAVL;

typedef NodoAVL * Alumnos;

/** Devuelve la altura del AVL Alumnos */
int alturaAlumnos(Alumnos a);

/** Balancea el AVL de Alumnos */
void balancearAlumnos(Alumnos &a);

/** Crea el AVL de Alumnos vacio */
void crearAlumnos(Alumnos &a);

/** Determina si Alumnos es vacio */
Boolean vacioAlumnos(Alumnos a);

/** Determina si el alumno alumn pertenece al AVL de Alumnos */
Boolean perteneceAlumnos(Alumnos a, Alumno alumn);

/** Inserta un Alumno al AVL de Alumnos */
void insertarAlumnos(Alumnos &a, Alumno alumn);

/** Elimina el AVL de Alumnos, liberando la memoria */
void eliminarAlumnos(Alumnos &a);

#endif // ALUMNOS_H_INCLUDED
