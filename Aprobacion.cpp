#include "Aprobacion.h"

/** Carga una Aprobacion recibiendo los datos desde teclado */
void cargarAprobacion(Aprobacion &a, Asignatura asignatura)
{
    a.asignatura = asignatura;
    printf("\n  Fecha de Aprobacion(dd/mm/aaaa): ");
    cargarFecha(a.fechaAprobacion);
    printf("  Calificacion: ");
    scanf("%d", &a.calificacion);
}

/** Muestra por pantalla los datos de la Aprobacion */
void printAprobacion(Aprobacion a)
{
    printAsignatura(a.asignatura);
    printf("|");
    printFecha(a.fechaAprobacion);
    printf("|");
    printf("%d", a.calificacion);
}

/** Selectora del numero de Asignatura */
int darNumeroAsig(Aprobacion a)
{
    return a.asignatura.numero;
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
