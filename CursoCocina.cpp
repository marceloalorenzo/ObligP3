#include "CursoCocina.h"

/** 1. Registrar los nombres de todas las asignaturas que componen la carrera.
 Al momento de registrar cada una, se le asignará también un número que la
 identificará posteriormente en el programa. La primera asignatura en ser registrada
 tendrá el número 0, la siguiente el número 1, la siguiente el número 2, y así sucesivamente. */
void registraAsignaturas(Asignaturas &a){
    /* TODO: validar que la cantidad de asignaturas ingresada sea un numero mayor que cero */
    int cantAsignaturas;
    printf("\n Cantidad de Asignaturas de la Carrera: ");
    scanf("%d", &cantAsignaturas);
    crearAsignaturas(a, cantAsignaturas);
    printf("\n  Ingresar las asignaturas: \n");
    cargarAsignaturas(a);
    printf("\n Se registraron %d asignaturas exitosamente.", cantAsignaturas);
}


/** 2. Listar número y nombre de todas las asignaturas registradas en el sistema,
 ordenadas por número de asignatura de menor a mayor. */
void listarAsignaturas(Asignaturas a){
    printf("\n Listado de Asignaturas: ");
    mostrarAsignaturas(a);
}

/** 3. Dados los números que identifican a dos asignaturas, agregar una previatura entre ellas,
 cuidando que no se forme un ciclo de previaturas en el sistema. */
void ingresarPreviatura(Previaturas &p, Asignaturas asignaturas)
{
    int as1, as2;
    printf("Ingrese numero de asignatura 1: ");
    scanf("%d", &as1);
    printf("Ingrese numero de asignatura 2: ");
    scanf("%d", &as2);
    if (existeAsignatura(asignaturas,as1) && existeAsignatura(asignaturas,as2)){
        agregarPreviatura(p, as1, as2);
        printf("Previatura ingresada exitosamente.");
    } else
        printf("Alguno de los datos ingresados son incorrectos.\n");
}


/** 4. Dado el número que identifica a una asignatura, obtener un listado conteniendo
 número y nombre de todas sus previas (no solamente de las previas inmediatas,
 sino de todas sus asignaturas previas). */
void consultarPrevias (Previatura p, int idcurso,ListaAdy&l){
    boolean visitado[]=new boolean [N]
    for(int i=0; i<N; i++){
visitado[i]=FALSE;
}
visitado[idcurso]=TRUE;
Crearlistaady(l);
ListaAdy ady= p[idcurso];
while(ady!=NULL){
if(!visitdo[ady->numAsigntura){
DFS(p,ady->numAsignatura, visitados l);
ady=ady->sig;
}
}
void DFS (Previatura p, int idcurso, boolean visitado [], ListaAdy&l){
visitado[idcurso]=TRUE;
Insfront(l,idCurso);
ListaAdy ady= p[idcurso];
while (ady!=NULL) {
if(!visitado[p-> numAsignatura])
DFS (p, p->numAsignatura, visitado, l);
ady=ady-> sig;
}

}


/** 5. Ingresar un nuevo alumno a la academia, chequeando que no existiera previamente. */
void ingresarNuevoAlumno(Alumnos &a){
    Alumno alumno;
    cargarAlumno(alumno);
    if(perteneceAlumnos(a, darCedula(alumno))){
        printf("\n Error - Ya existe un Alumno registrado con la cedula ingresada.");
    } else {
        insertarAlumnos(a, alumno);
        printf("\n Alumno registrado exitosamente.");
    }
}


/** 6. Listar los datos básicos de todos los alumnos de la academia,
 ordenados por cédula de menor a mayor. */
void listarAlumnos(Alumnos a){
    printf("\n Alumnos:");
    printf("\n Cedula|Nombre|Apellido|Direccion|Telefono\n");
    printAlumnos(a);
}

/** 7. Agregar una nueva aprobación a la escolaridad de un alumno,
 verificando que el alumno esté registrado en el sistema, que no tenga la asignatura
 aprobada de antes y también que tenga salvadas sus previas inmediatas. */
void agregarAprobacionAlumno(Alumnos &a, Asignaturas asignaturas){
    Alumno* alumno;
    Aprobacion aprobacion;
    int cedula, numAsig, posAsignatura;

    /* Verificacion de que el alumno esta registrado en el sistema */
    printf("\n Ingresar Cedula del Alumno: ");
    scanf("%d", &cedula);
    if(a == NULL){
        printf("\n Error - La cedula ingresada no esta registrada en el sistema.\n");
    } else {
        if(!perteneceAlumnos(a, cedula))
            printf("\n Error - La cedula ingresada no esta registrada en el sistema.\n");
        else {
            alumno = darAlumnoAVL(a, cedula);
            printf(" Ingrese el numero de Asignatura: ");
            scanf("%d", &numAsig);

            /* Valido que el numero de Asignatura ingresado sea Valido */
            if(numAsig > asignaturas.cantidad){
                printf(" \nError - El numero de Asignatura ingresado no es valido.");
            } else {
                /* Ingreso Aprobacion */
                posAsignatura = darAsignaturaLista(asignaturas, numAsig);
                printf("\n Ingresar Aprobacion para la Asignatura:\n");
                printAsignatura(asignaturas.asignatura[posAsignatura]);
                cargarAprobacion(aprobacion, asignaturas.asignatura[posAsignatura]);
                insertarAprobaciones(alumno->aprobaciones, aprobacion);
                printf("\n Aprobacion ingresada exitosamente.");
            }
        }
    }
}


/** 8. Dada la cédula de un alumno, listar su escolaridad, ordenada cronológicamente
 por fecha de aprobación. Se debe verificar que el alumno esté registrado en el sistema. */
void listarEscolaridad(Alumnos a){
    Alumno* alumno;
    int cedula;
    printf("\n Ingresar Cedula del Alumno: ");
    scanf("%d", &cedula);
    if(a == NULL){
        printf("\n Error - La cedula ingresada no esta registrada en el sistema.\n");
    } else {
        if(!perteneceAlumnos(a, cedula))
            printf("\n Error - La cedula ingresada no esta registrada en el sistema.\n");
        else {
            alumno = darAlumnoAVL(a, cedula);
            printf("\n Asignatura|Fecha de Aprobacion|Calificacion");
            printAprobaciones(alumno->aprobaciones);
        }
    }
}
