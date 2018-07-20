#include "Menu.h"

/** Despliega el menu de opciones al usuario */
void menu(int &opcion){
    printf("\n\n Menu Principal: ");
    printf("\n  1. Registrar Asignaturas.");
    printf("\n  2. Listado de Asignaturas.");
    printf("\n  3. Agregar Previatura entre Asignaturas.");
    printf("\n  4. Consultar Previas de una Asignatura.");
    printf("\n  5. Ingresar Alumno.");
    printf("\n  6. Listado de Alumnos.");
    printf("\n  7. Ingresar Aprobacion a Escolaridad de Alumno.");
    printf("\n  8. Listar Escolaridad de Alumno.");
    printf("\n  9. Salir.");
    printf("\n Ingrese una opcion: ");
    scanf("%d", &opcion);
}

