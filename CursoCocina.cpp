#include "CursoCocina.h"

/** 1. Registrar los nombres de todas las asignaturas que componen la carrera.
 Al momento de registrar cada una, se le asignará también un número que la
 identificará posteriormente en el programa. La primera asignatura en ser registrada
 tendrá el número 0, la siguiente el número 1, la siguiente el número 2, y así sucesivamente. */
void registraAsignaturas(Asignaturas &a){
    /* TODO: validar que la cantidad de asignaturas ingresada sea un numero mayor que cero */
    int cantAsignaturas;
    printf("\n Cantidad de Asignaturas de la Carrera: ");
    scanf("%d", &cantAsignaturas);
    crearAsignaturas(a, cantAsignaturas);
    printf("\n  Ingresar las asignaturas: \n");
    cargarAsignaturas(a);
}


/** 2. Listar número y nombre de todas las asignaturas registradas en el sistema,
 ordenadas por número de asignatura de menor a mayor. */
void listarAsignaturas(Asignaturas a){
    printf("\n Listado de Asignaturas: ");
    mostrarAsignaturas(a);
}

/** 3. Dados los números que identifican a dos asignaturas, agregar una previatura entre ellas,
 cuidando que no se forme un ciclo de previaturas en el sistema. */


/** 4. Dado el número que identifica a una asignatura, obtener un listado conteniendo
 número y nombre de todas sus previas (no solamente de las previas inmediatas,
 sino de todas sus asignaturas previas). */


/** 5. Ingresar un nuevo alumno a la academia, chequeando que no existiera previamente. */
void ingresarNuevoAlumno(Alumnos &a, Alumno alumno){
}

/** 6. Listar los datos básicos de todos los alumnos de la academia,
 ordenados por cédula de menor a mayor. */


/** 7. Agregar una nueva aprobación a la escolaridad de un alumno,
 verificando que el alumno esté registrado en el sistema, que no tenga la asignatura
 aprobada de antes y también que tenga salvadas sus previas inmediatas. */


/** 8. Dada la cédula de un alumno, listar su escolaridad, ordenada cronológicamente
 por fecha de aprobación. Se debe verificar que el alumno esté registrado en el sistema. */
