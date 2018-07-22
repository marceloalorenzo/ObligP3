#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
#include <stdio.h>
#include "String.h"
#include "Aprobaciones.h"

typedef struct {int cedula;
                String nombre;
                String apellido;
                String domicilio;
                int telefono;
                Aprobaciones aprobaciones;
                } Alumno;


/** Carga los datos recibidos por teclado de un Alumno */
void cargarAlumno(Alumno &a);

/** Muestra por pantalla los datos de un Alumno */
void printAlumno(Alumno a);

/** Selectora de la cedula */
int darCedula(Alumno a);

/** Selectora del nombre */
void darNombre(String &s, Alumno a);

/** Selectora del apellido */
void darApellido(String &s, Alumno a);

/** Selectora del domicilio */
void darDomicilio(String &s, Alumno a);

/** Selectora del telefono */
int darTelefono(Alumno a);

/** Elimina la estructura de Alumno */
void eliminarAlumno(Alumno &a);

/** Inserta la aprobacion a la lista de aprobaciones de la lista */
void agregarAprobacionAlumno(Alumno &a, Aprobacion aprobacion);

/** Devuelve TRUE sii el alumno "a" tiene la asignatura "numAsignatura" aprobada */
Boolean estaAprobadaAsiganturaAlumno(Alumno a, int numAsignatura);

#endif // ALUMNO_H_INCLUDED
