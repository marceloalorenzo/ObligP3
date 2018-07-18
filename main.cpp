#include <stdio.h>
#include "CursoCocina.h"
#include "Menu.h"

int main()
{
    Boolean salir = FALSE;
    int opcion;
    Asignaturas asignaturas;
    Alumnos alumnos;

    crearAlumnos(alumnos);

    while (!salir){
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

                break;
            case 8:

                break;
        }
    }
}
