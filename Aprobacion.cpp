#include "Aprobacion.h"

/** Carga una Aprobacion recibiendo los datos desde teclado */
void cargarAprobacion(Aprobacion &a)
{
    // TODO: Validar que el numero de Asignatura Ingresado sea Valido
    int numAsig;
    printf("\n Numero de Asignatura: ");
    scanf("%d", &numAsig);
    cargarAsignatura(a.asignatura, numAsig);
    printf("\n Fecha de Aprobacion: ");
    cargarFecha(a.fechaAprobacion);
    printf("Calificacion: ");
    scanf("%d", &a.calificacion);
}

/** Muestra por pantalla los datos de la Aprobacion */
void printAprobacion(Aprobacion a)
{
    printAsignatura(a.asignatura);
    printFecha(a.fechaAprobacion);
    printf("Calificación %d", a.calificacion);
}

/** Selectora del numero de Asignatura */
int darNumeroAsig(Aprobacion a)
{
    return a.asignatura.numero;
}

/** Selectora del nombre de Asignatura */
String darNombreAsig(String &s, Aprobacion a)
{
    strCop(s,a.asignatura.nombre);
}

/** Selectora de la Fecha de Aprobacion */
Fecha darFechaAprobacion(Aprobacion a)
{
    return a.fechaAprobacion;
}

/** Selectora de la Calificacion */
int darCalificacion(Aprobacion a)
{
        return a.calificacion;
}
