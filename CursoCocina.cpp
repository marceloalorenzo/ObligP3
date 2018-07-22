#include "CursoCocina.h"

/** 1. Registrar los nombres de todas las asignaturas que componen la carrera.
 Al momento de registrar cada una, se le asignará también un número que la
 identificará posteriormente en el programa. La primera asignatura en ser registrada
 tendrá el número 0, la siguiente el número 1, la siguiente el número 2, y así sucesivamente. */
void registraAsignaturas(Asignaturas &a, Previaturas &p){
    /* TODO: validar que la cantidad de asignaturas ingresada sea un numero mayor que cero */
    int cantAsignaturas;
    printf("\n Cantidad de Asignaturas de la Carrera: ");
    scanf("%d", &cantAsignaturas);
    crearAsignaturas(a, cantAsignaturas);
    printf("\n  Ingresar las asignaturas: \n");
    cargarAsignaturas(a);
    printf("\n Se registraron %d asignaturas exitosamente.", cantAsignaturas);
    crearPreviaturas(p, cantAsignaturas);
}


/** 2. Listar número y nombre de todas las asignaturas registradas en el sistema,
 ordenadas por número de asignatura de menor a mayor. */
void listarAsignaturas(Asignaturas a){
    mostrarAsignaturas(a);
}

/** 3. Dados los números que identifican a dos asignaturas, agregar una previatura entre ellas,
 cuidando que no se forme un ciclo de previaturas en el sistema. */
void ingresarPreviatura(Previaturas &p, Asignaturas asignaturas)
{
    int as1, as2;
    printf("\n Ingrese numero de asignatura para agregar previas: ");
    scanf("%d", &as1);
    printf("\n Ingrese numero de asignatura previa: ");
    scanf("%d", &as2);
    if (existeAsignatura(asignaturas,as1) && existeAsignatura(asignaturas,as2)){
        agregarPreviatura(p, as1, as2);
    } else
        printf("\n Alguno de los datos ingresados son incorrectos.\n");
}


/** 4. Dado el número que identifica a una asignatura, obtener un listado conteniendo
 número y nombre de todas sus previas (no solamente de las previas inmediatas,
 sino de todas sus asignaturas previas). */
void listarPreviaturasAsignatura(Previaturas p, Asignaturas a){
    int numAsignatura;
    printf("\n Ingrese numero de asignatura: ");
    scanf("%d", &numAsignatura);
    Asignatura asignatura;
    if(!existeAsignatura(a, numAsignatura)){
        printf(" \n Error - El numero de Asignatura ingresado no es valido.");
    } else {
        asignatura = darAsignatura(a, numAsignatura);
        printAsignatura(asignatura);
        listarPrevias(p,a, numAsignatura);
    }
}

/** 5. Ingresar un nuevo alumno a la academia, chequeando que no existiera previamente. */
void ingresarNuevoAlumno(Alumnos &a){
    Alumno alumno;
    cargarAlumno(alumno);
    if(perteneceAlumnos(a, darCedula(alumno))){
        printf("\n Error - Ya existe un Alumno registrado con la cedula ingresada.");
    } else {
        insertarAlumnos(a, alumno);
        printf("\n Alumno registrado exitosamente.");
    }
}


/** 6. Listar los datos básicos de todos los alumnos de la academia,
 ordenados por cédula de menor a mayor. */
void listarAlumnos(Alumnos a){
    printf("\n Cedula|Nombre|Apellido|Direccion|Telefono\n");
    printAlumnos(a);
}

/** 7. Agregar una nueva aprobación a la escolaridad de un alumno,
 verificando que el alumno esté registrado en el sistema, que no tenga la asignatura
 aprobada de antes y también que tenga salvadas sus previas inmediatas. */
void agregarAprobacion(Previaturas p, Alumnos &a, Asignaturas asignaturas){
    Alumno* alumno;
    Aprobacion aprobacion;
    Asignatura asignatura;
    int cedula, numAsig;

    /* Verificacion de que el alumno esta registrado en el sistema */
    printf("\n Ingresar Cedula del Alumno: ");
    scanf("%d", &cedula);
    if(!perteneceAlumnos(a, cedula)){
        printf("\n Error - La cedula ingresada no esta registrada en el sistema.\n");
    } else {
        alumno = darAlumnoAVL(a, cedula);
        printf(" Ingrese el numero de Asignatura: ");
        scanf("%d", &numAsig);

        /* Valido que el numero de Asignatura ingresado sea Valido */
        if(!existeAsignatura(asignaturas, numAsig)){
            printf("\n Error - El numero de Asignatura ingresado no es valido.");
        } else {
            if(estaAprobadaAsiganturaAlumno(*alumno, numAsig)){
                printf("\n Error - El alumno ya tiene aprobada la asignatura %d.", numAsig);
            } else {
                if(!cumplePreviaturasAsignatura(p, *alumno, numAsig)){
                    printf("\n Error - El alumno no cumple con las previaturas de la asignatura %d", numAsig);
                }else{
                    /* Ingreso Aprobacion */
                    asignatura = darAsignatura(asignaturas, numAsig);
                    printf("\n Ingresar Aprobacion para la Asignatura:\n");
                    printAsignatura(asignatura);
                    cargarAprobacion(aprobacion, asignatura);
                    agregarAprobacionAlumno(*alumno, aprobacion);
                    printf("\n Aprobacion ingresada exitosamente.");
                }
            }
        }
    }
}


/** 8. Dada la cédula de un alumno, listar su escolaridad, ordenada cronológicamente
 por fecha de aprobación. Se debe verificar que el alumno esté registrado en el sistema. */
void listarEscolaridad(Alumnos a){
    Alumno* alumno;
    int cedula;
    printf("\n Ingresar Cedula del Alumno: ");
    scanf("%d", &cedula);
    if(a == NULL){
        printf("\n Error - La cedula ingresada no esta registrada en el sistema.\n");
    } else {
        if(!perteneceAlumnos(a, cedula))
            printf("\n Error - La cedula ingresada no esta registrada en el sistema.\n");
        else {
            alumno = darAlumnoAVL(a, cedula);
            printf("\n Asignatura|Fecha de Aprobacion|Calificacion");
            printAprobaciones(alumno->aprobaciones);
        }
    }
}
