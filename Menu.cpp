#include "Menu.h"

const char * REGISTAR_ASIGNATURA = "\n  1. Registrar Asignaturas.";
const char * LISTADO_ASIGNATURA = "\n  2. Listado de Asignaturas.";
const char * AGREGAR_PREVIATURA = "\n  3. Agregar Previatura entre Asignaturas.";
const char * CONSULTAR_PREVIATURAS = "\n  4. Consultar Previas de una Asignatura.";
const char * INGRESAR_ALUMNO = "\n  5. Ingresar Alumno.";
const char * LISTADO_ALUMNO = "\n  6. Listado de Alumnos.";
const char * INGRESAR_APROBACION = "\n  7. Ingresar Aprobacion a Escolaridad de Alumno.";
const char * LISTAR_ESCOLARIDAD = "\n  8. Listar Escolaridad de Alumno.";
const char * SALIR = "\n  9. Salir.\n";

/** Despliega el menu de opciones al usuario */
void menu(int &opcion){
    printf("\n\n Menu Principal: ");
    printf(REGISTAR_ASIGNATURA);
    printf(LISTADO_ASIGNATURA);
    printf(AGREGAR_PREVIATURA);
    printf(CONSULTAR_PREVIATURAS);
    printf(INGRESAR_ALUMNO);
    printf(LISTADO_ALUMNO);
    printf(INGRESAR_APROBACION);
    printf(LISTAR_ESCOLARIDAD);
    printf(SALIR);
    printf("\n Ingrese una opcion: ");
    scanf("%d", &opcion);
}

/** Muestra la opcion seleccionada por el usuario */
void mostrarOpcion(int opcion){
    switch(opcion){
        case 1:
            printf(REGISTAR_ASIGNATURA);
            break;
        case 2:
            printf(LISTADO_ASIGNATURA);
            break;
        case 3:
            printf(AGREGAR_PREVIATURA);
            break;
        case 4:
            printf(CONSULTAR_PREVIATURAS);
            break;
        case 5:
            printf(INGRESAR_ALUMNO);
            break;
        case 6:
            printf(LISTADO_ALUMNO);
            break;
        case 7:
            printf(INGRESAR_APROBACION);
            break;
        case 8:
            printf(LISTAR_ESCOLARIDAD);
            break;
        case 9:
            printf(SALIR);
            break;
    }
}
