#include <stdio.h>
#include <stdlib.h>
#include "CursoCocina.h"
#include "Menu.h"

int main()
{
    Boolean salir = FALSE;
    int opcion;
    Asignaturas asignaturas;
    Alumnos alumnos;

    crearAlumnos(alumnos);
do
   {
        system("cls");
        fflush(stdin);
        menu(opcion);
        switch(opcion){
            case 1:
                registraAsignaturas(asignaturas);
                break;
            case 2:
                listarAsignaturas(asignaturas);
                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                ingresarNuevoAlumno(alumnos);
                break;
            case 6:
                listarAlumnos(alumnos);
                break;
            case 7:
                agregarAprobacionAlumno(alumnos, asignaturas);
                break;
            case 8:
                listarEscolaridad(alumnos);
                    system("cls");
                    fflush(stdin);
                break;
            case 9:
                {
                }
                break;
            default:
                {
                    system("cls");
                    fflush(stdin);
                    printf("\nOpcion invalida, intente nuevamente\n");
                    system("pause");
                     }
        }
    }while (opcion != 9);
}
