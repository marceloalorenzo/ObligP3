#include "Previaturas.h"

/** Crea las listas de previaturas y las inicializa en NULL */
void crearPreviaturas(Previaturas &p, int cantAsignaturas){
    p = new ListaAdy[cantAsignaturas];
    for(int i = 0; i < cantAsignaturas; i++){
        p[i] = NULL;
    }
}

/** Dado el número que identifica a una asignatura,
 obtener un listado conteniendo número y nombre de todas sus previas.
 Precondicion: Existe la asignatura con codigo numAsignatura */
void listarPrevias(Previaturas p, Asignaturas a, int numAsignatura){
    Asignatura asignatura;
    int numPrevia;
    ListaAdy previas = p[numAsignatura];
    if(previas == NULL){
        printf("\n La asignatura no tiene previas.");
    }else{
        printf("\n Previaturas:");
        while(previas != NULL){
            numPrevia = previas->numAsignatura;
            asignatura = darAsignatura(a, numPrevia);
            printAsignatura(asignatura);
            previas = previas->sig;
        }
    }
}

/** Dados dos números de asignaturas agregar una previatura entre ellas */
void agregarPreviatura(Previaturas &p, int a1, int a2){
    if(pertenece(p, a1,a2)){
        printf("\n   Error - La asignatura %d ya es previa de la asignatura %d.", a2, a1);
    }else{
        if(existeCicloPreviaturas(p,a1, a2)){
            printf("\n   Error - Existe una referencia circular entre las asignaturas: %d y %d.", a2, a1);
        }else{
            insFront(p[a1],a2);
            printf("\n  Previatura ingresada exitosamente.");
        }
    }
}

/** Determina si existe un ciclo en el grafo de previaturas */
Boolean existeCicloPreviaturas(Previaturas &p, int a1, int a2){
    if(a1 == a2){
        return TRUE;
    }
    return pertenece(p, a2, a1);
}

/** Inserta un nuevo nodo al grafo de previaturas */
void insFront(ListaAdy &l, int n){
    ListaAdy aux;
    aux = new NodoPreviaturas;
    aux->numAsignatura = n;
    aux->sig = l;
    l = aux;
}

/** Determina si una previa ya existe en la lista de previaturas */
Boolean pertenece(Previaturas p, int asig, int previa){
    ListaAdy l = p[asig];
    while (l != NULL){
        if (l->numAsignatura == previa || pertenece(p, l->numAsignatura, previa)){
            return TRUE;
        }
        l = l->sig;
    }
    return FALSE;
}

/** Elimina la extructura de Grafo de Previaturas, liberando la memoria */
void eliminarPreviaturas(Previaturas &p, int cantAsignaturas){
    for(int i = 0; i< cantAsignaturas; i++){
        eliminarListaAdy(p[i]);
    }
    delete [] p;
}

/** Elimina la estructura de ListaAdy, liberando la memoria */
void eliminarListaAdy(ListaAdy &l){
    if(l!=NULL){
        eliminarListaAdy(l->sig);
        delete l;
    }
}

/** Devuelve TRUE sii el alumno "a" tiene aprobadas todas las previas de la asignatura "numAsignatura" */
Boolean cumplePreviaturasAsignatura(Previaturas &p, Alumno a, int numAsignatura){
    ListaAdy previas = p[numAsignatura];
    while(previas != NULL){
        if(!estaAprobadaAsiganturaAlumno(a, previas->numAsignatura)){
            return FALSE;
        }
        previas = previas->sig;
    }
    return TRUE;
}
