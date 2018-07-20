#ifndef CURSOCOCINA_H_INCLUDED
#define CURSOCOCINA_H_INCLUDED
#include <stdio.h>
#include "Alumnos.h"
#include "Asignaturas.h"
#include "Previaturas.h"

/** 1. Registrar los nombres de todas las asignaturas que componen la carrera.
 Al momento de registrar cada una, se le asignar� tambi�n un n�mero que la
 identificar� posteriormente en el programa. La primera asignatura en ser registrada
 tendr� el n�mero 0, la siguiente el n�mero 1, la siguiente el n�mero 2, y as� sucesivamente. */
void registraAsignaturas(Asignaturas &a);

/** 2. Listar n�mero y nombre de todas las asignaturas registradas en el sistema,
 ordenadas por n�mero de asignatura de menor a mayor. */
void listarAsignaturas(Asignaturas a);

/** 3. Dados los n�meros que identifican a dos asignaturas, agregar una previatura entre ellas,
 cuidando que no se forme un ciclo de previaturas en el sistema. */
void ingresarPreviatura(Previaturas &p, Asignaturas asignaturas);

/** 4. Dado el n�mero que identifica a una asignatura, obtener un listado conteniendo
 n�mero y nombre de todas sus previas (no solamente de las previas inmediatas,
 sino de todas sus asignaturas previas). */


/** 5. Ingresar un nuevo alumno a la academia, chequeando que no existiera previamente. */
void ingresarNuevoAlumno(Alumnos &a);

/** 6. Listar los datos b�sicos de todos los alumnos de la academia,
 ordenados por c�dula de menor a mayor. */
void listarAlumnos(Alumnos a);

/** 7. Agregar una nueva aprobaci�n a la escolaridad de un alumno,
 verificando que el alumno est� registrado en el sistema, que no tenga la asignatura
 aprobada de antes y tambi�n que tenga salvadas sus previas inmediatas. */
void agregarAprobacionAlumno(Alumnos &a, Asignaturas asignaturas);

/** 8. Dada la c�dula de un alumno, listar su escolaridad, ordenada cronol�gicamente
 por fecha de aprobaci�n. Se debe verificar que el alumno est� registrado en el sistema. */
void listarEscolaridad(Alumnos a);

#endif // CURSOCOCINA_H_INCLUDED
