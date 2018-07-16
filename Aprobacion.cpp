#include "Aprobacion.h"

/** Carga una Aprobacion recibiendo los datos desde teclado */
void cargarAprobacion(Aprobacion &a)
{
    crearAsignaturas(a.asignatura);
    crearFecha(a.fechaAprobacion);
    printf("Ingrese calificación: ");
    scanf("&d",a.calificacion);
}

/** Muestra por pantalla los datos de la Aprobacion */
void printAprobacion(Aprobacion a)
{
    printAsignatura(a.asignatura);
    printFecha(a.fechaAprobacion);
    printf("Calificación %d",a.calificacion);
}

/** Selectora del numero de Asignatura */
int darNumeroAsig(Aprobacion a)
{
    strCop(s,a.asignatura);
}

/** Selectora del nombre de Asignatura */
String darNombreAsig(String &s, Aprobacion a){
}

/** Selectora de la Fecha de Aprobacion */
Fecha darFechaAprobacion(Aprobacion a){
}

/** Selectora de la Calificacion */
int darCalificacion(Aprobacion a){
}
