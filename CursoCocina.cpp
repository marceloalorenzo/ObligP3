#include "CursoCocina.h"

/** 1. Registrar los nombres de todas las asignaturas que componen la carrera.
 Al momento de registrar cada una, se le asignar� tambi�n un n�mero que la
 identificar� posteriormente en el programa. La primera asignatura en ser registrada
 tendr� el n�mero 0, la siguiente el n�mero 1, la siguiente el n�mero 2, y as� sucesivamente. */
void registraAsignaturas(Asignaturas &a){
    /* TODO: validar que la cantidad de asignaturas ingresada sea un numero mayor que cero */
    int cantAsignaturas;
    printf("\n Cantidad de Asignaturas de la Carrera: ");
    scanf("%d", &cantAsignaturas);
    crearAsignaturas(a, cantAsignaturas);
    printf("\n  Ingresar las asignaturas: \n");
    cargarAsignaturas(a);
}


/** 2. Listar n�mero y nombre de todas las asignaturas registradas en el sistema,
 ordenadas por n�mero de asignatura de menor a mayor. */
void listarAsignaturas(Asignaturas a){
    printf("\n Listado de Asignaturas: ");
    mostrarAsignaturas(a);
}

/** 3. Dados los n�meros que identifican a dos asignaturas, agregar una previatura entre ellas,
 cuidando que no se forme un ciclo de previaturas en el sistema. */


/** 4. Dado el n�mero que identifica a una asignatura, obtener un listado conteniendo
 n�mero y nombre de todas sus previas (no solamente de las previas inmediatas,
 sino de todas sus asignaturas previas). */


/** 5. Ingresar un nuevo alumno a la academia, chequeando que no existiera previamente. */
void ingresarNuevoAlumno(Alumnos &a, Alumno alumno){
}

/** 6. Listar los datos b�sicos de todos los alumnos de la academia,
 ordenados por c�dula de menor a mayor. */


/** 7. Agregar una nueva aprobaci�n a la escolaridad de un alumno,
 verificando que el alumno est� registrado en el sistema, que no tenga la asignatura
 aprobada de antes y tambi�n que tenga salvadas sus previas inmediatas. */


/** 8. Dada la c�dula de un alumno, listar su escolaridad, ordenada cronol�gicamente
 por fecha de aprobaci�n. Se debe verificar que el alumno est� registrado en el sistema. */
