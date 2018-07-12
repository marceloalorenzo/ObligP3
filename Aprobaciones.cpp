#include "Aprobaciones.h"

/** Crea una lista de Aprobaciones vacia */
void crearAprobaciones(Aprobaciones &a){
    a = NULL;
}

/** Lista en pantalla todas las Aprobaciones de la Lista */
void printAprobaciones(Aprobaciones a){
    while(a != NULL){
        printAprobacion(a->aprobacion);
        a = a->sig;
    }
}

/** Inserta una Aprobacion a la lista de Aprobaciones ordenado por fecha de aprobacion */
void insertarAprobaciones(Aprobaciones &a, Aprobacion aprobacion){
    Aprobaciones aux = new NodoAprobaciones;
    aux->aprobacion = aprobacion;
    aux->sig = NULL;
    if(a == NULL){
        a = aux;
    } else {
        Aprobaciones aux2 = a;
        while((esMenorFecha(darFechaAprobacion(aux2->aprobacion), darFechaAprobacion(aprobacion))) && aux2 != NULL){
            aux2 = aux2->sig;
        }
        aux->sig = aux2;
        while((esMenorFecha(darFechaAprobacion(a->aprobacion), darFechaAprobacion(aprobacion))) && a != NULL){
            a = a->sig;
        }
        a->sig = aux;
    }
}

/** Elimina la Lista de Aprobaciones, liberando la memoria */
void eliminarAprobaciones(Aprobaciones &a){
    if(a == NULL){
        eliminarAprobaciones(a->sig);
        delete a;
    }
}
