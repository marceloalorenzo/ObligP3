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
int darCedula(Alumno a)
{
    return a.cedula;
}

/** Selectora del nombre */
void darNombre(String &s, Alumno a)
{
    strcop(s,a.nombre);
}


/** Selectora del apellido */
void darApellido(String &s, Alumno a)
{
    strcop(s,a.apellido);
}

/** Selectora del domicilio */
void darDomicilio(String &s, Alumno a)
{
    strcop(s,a.domicilio);
}

/** Selectora del telefono */
void darTelefono(Alumno a)
{
    return a.telefono;
}

/** Elimina la estructura de Alumno */
void eliminarAlumno(Alumno &a)
{
    delete a;
}
