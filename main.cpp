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
//        system("cls");
        fflush(stdin);
        menu(opcion);
        switch(opcion){
            case 1:
                if(asignaturasRegistradas){
                    printf("   Error - Las asignaturas ya fueron registradas.");
                }else{
                    registraAsignaturas(asignaturas, previaturas);
                    asignaturasRegistradas = TRUE;
                }
                break;
            case 2:
                if(!asignaturasRegistradas){
                    printf("   Error - Las asignaturas no fueron registradas.");
                }else{
                    listarAsignaturas(asignaturas);
                }
                break;

            case 3:
                if(!asignaturasRegistradas){
                    printf("   Error - Las asignaturas no fueron registradas.");
                }else{
                    ingresarPreviatura(previaturas, asignaturas);
                }
                break;

            case 4:
                if(!asignaturasRegistradas){
                    printf("   Error - Las asignaturas no fueron registradas.");
                }else{
                    listarPreviaturasAsignatura(previaturas, asignaturas);
                }
                break;

            case 5:
                ingresarNuevoAlumno(alumnos);
                break;

            case 6:
                listarAlumnos(alumnos);
                break;

            case 7:
                if(!asignaturasRegistradas){
                    printf("   Error - Las asignaturas no fueron registradas.");
                }else{
                    agregarAprobacion(previaturas, alumnos, asignaturas);
                }
                break;
            case 8:
                listarEscolaridad(alumnos);
                break;

            case 9:
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
                    printf("\nOpcion invalida, intente nuevamente\n");
                    system("pause");
                }
        }
    }while (!salir);
}
