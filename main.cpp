#include <stdio.h>
#include <stdlib.h>
#include "CursoCocina.h"
#include "Menu.h"

int main()
{
    Boolean salir = FALSE;
    Boolean asignaturasRegistradas = FALSE;

    int opcion, i;
    Asignaturas asignaturas;
    Alumnos alumnos;
    Previaturas previaturas;

    crearAlumnos(alumnos);
    do {
        fflush(stdin);
        menu(opcion);
        system("cls");
        mostrarOpcion(opcion);
        switch(opcion){

            case 1:
                printf("\n");
                if(asignaturasRegistradas){
                    printf("\n   Error - Las asignaturas ya fueron registradas.");
                }else{
                    registraAsignaturas(asignaturas, previaturas, asignaturasRegistradas);
                }
                break;

            case 2:
                printf("\n");
                if(!asignaturasRegistradas){
                    printf("\n   Error - Las asignaturas no fueron registradas.");
                }else{
                    listarAsignaturas(asignaturas);
                }
                break;

            case 3:
                printf("\n");
                if(!asignaturasRegistradas){
                    printf("\n   Error - Las asignaturas no fueron registradas.");
                }else{
                    ingresarPreviatura(previaturas, asignaturas);
                }
                break;

            case 4:
                printf("\n");
                if(!asignaturasRegistradas){
                    printf("\n   Error - Las asignaturas no fueron registradas.");
                }else{
                    listarPreviaturasAsignatura(previaturas, asignaturas);
                }
                break;

            case 5:
                printf("\n");
                ingresarNuevoAlumno(alumnos);
                break;

            case 6:
                printf("\n");
                listarAlumnos(alumnos);
                break;

            case 7:
                printf("\n");
                if(!asignaturasRegistradas){
                    printf("\n   Error - Las asignaturas no fueron registradas.");
                }else{
                    agregarAprobacion(previaturas, alumnos, asignaturas);
                }
                break;

            case 8:
                printf("\n");
                listarEscolaridad(alumnos);
                break;

            case 9:
                printf("\n");
                salir = TRUE;
                //elimino todas las estructuras
                if(asignaturasRegistradas){
                    i = darCantidadAsignaturas(asignaturas);
                    eliminarPreviaturas(previaturas, i);
                    eliminarAignaturas(asignaturas);
                }
                eliminarAlumnos(alumnos);
                break;
            default:
                {
                    system("cls");
                    fflush(stdin);
                    printf("\n Opcion invalida, intente nuevamente\n");
                    system("pause");
                }
        }
    }while (!salir);
}
