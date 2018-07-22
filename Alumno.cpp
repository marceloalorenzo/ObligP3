#include "Alumno.h"

/** Carga los datos recibidos por teclado de un Alumno */
void cargarAlumno(Alumno &a)
{
    printf("\n Registrar Alumno:");
    printf("\n   Cedula:    ");
    scanf("%d", &a.cedula);
    printf("   Nombre:    ");
    strScan(a.nombre);
    printf("   Apellido:  ");
    strScan(a.apellido);
    printf("   Domicilio: ");
    strScan(a.domicilio);
    printf("   Telefono:  ");
    scanf("%d", &a.telefono);
    crearAprobaciones(a.aprobaciones);
}

/** Muestra por pantalla los datos Basicos de un Alumno */
void printAlumno(Alumno a)
{
    printf(" %d", a.cedula);
    printf("|");
    strPrint(a.nombre);
    printf("|");
    strPrint(a.apellido);
    printf("|");
    strPrint(a.domicilio);
    printf("|");
    printf("%d", a.telefono);
    printf("\n");
}

/** Selectora de la cedula */
int darCedula(Alumno a)
{
    return a.cedula;
}

/** Selectora del nombre */
void darNombre(String &s, Alumno a)
{
    strCop(s,a.nombre);
}


/** Selectora del apellido */
void darApellido(String &s, Alumno a)
{
    strCop(s,a.apellido);
}

/** Selectora del domicilio */
void darDomicilio(String &s, Alumno a)
{
    strCop(s,a.domicilio);
}

/** Selectora del telefono */
int darTelefono(Alumno a)
{
    return a.telefono;
}

/** Elimina la estructura de Alumno */
void eliminarAlumno(Alumno &a)
{
    eliminarAprobaciones(a.aprobaciones);
}

/** Inserta la aprobacion a la lista de aprobaciones de la lista */
void agregarAprobacionAlumno(Alumno &a, Aprobacion aprobacion){
    insertarAprobaciones(a.aprobaciones, aprobacion);
}

/** Devuelve TRUE sii el alumno "a" tiene la asignatura "numAsignatura" aprobada */
Boolean estaAprobadaAsiganturaAlumno(Alumno a, int numAsignatura){
    return perteneceAprobaciones(a.aprobaciones, numAsignatura);
}

