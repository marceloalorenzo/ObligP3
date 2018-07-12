#include "Alumno.h"

/** Carga los datos recibidos por teclado de un Alumno */
void cargarAlumno(Alumno &a)
{
    printf("Ingresar cedula: ");
    scanf("%d", &a.cedula);
    printf("Ingresar nombre: ");
    strCargar(a.nombre);
    printf("Ingresar apellido: ");
    strCargar(a.apellido);
    printf("Ingresar domicilio: ");
    strCargar(a.domicilio);
    printf("Ingresar telefono: ");
    scanf("%d", &a.telefono);
    crearAprobaciones(a.aprobaciones);
}

/** Muestra por pantalla los datos de un Alumno */
void printAlumno(Alumno a)
{
    printf("Informacion del Alumno: ");
    printf("Cedula: %d", a.cedula);
    printf("Nombre: ");
    strPrint(a.nombre);
    printf("Apellido: ");
    strPrint(a.apellido);
    printf("Domicilio: ");
    strPrint(a.domicilio);
    printf("Telefono: %d", a.telefono);
    printAprobaciones(a.aprobaciones);
}

/** Selectora de la cedula */
void darCedula(Alumno a)

/** Selectora del nombre */
void darNombre(Alumno a)

/** Selectora del apellido */
void darApellido(Alumno a)

/** Selectora del domicilio */
void darDomicilio(Alumno a)

/** Selectora del telefono */
void darTelefono(Alumno a)

/** Elimina la estructura de Alumno */
void eliminarAlumno(Alumno &a)
