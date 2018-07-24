#include "Aprobacion.h"

/** Carga una Aprobacion recibiendo los datos desde teclado */
void cargarAprobacion(Aprobacion &a, Asignatura asignatura)
{
    int calif;
    Boolean cargadaAprobacion = FALSE;
    while(!cargadaAprobacion){
        a.asignatura = asignatura;
        printf("\n  Fecha de Aprobacion(dd/mm/aaaa): ");
        cargarFecha(a.fechaAprobacion);
        printf("  Calificacion: ");
        scanf("%d", &calif);
        if(calif >= 3 && calif <= 12){
            a.calificacion = calif;
            cargadaAprobacion = TRUE;
        } else {
            printf("\n Error - La calificacion debe ser mayor o igual que 3.");
        }
    }
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
