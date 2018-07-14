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
        Aprobaciones iter = a;
        if(iter->sig == NULL){
            if(esMenorFecha(darFechaAprobacion(iter->aprobacion), darFechaAprobacion(aprobacion))){
                iter->sig = aux
            } else {
                a = aux;
                a->sig = iter;
            }
        } else {
            while(iter->sig != NULL
                  &&
                  esMenorFecha(darFechaAprobacion(iter->sig->aprobacion), darFechaAprobacion(aprobacion))){
                      iter = iter->sig;
            }
            aux->sig = iter->sig;
            iter->sig = aux;
        }
    }
}

/** Elimina la Lista de Aprobaciones, liberando la memoria */
void eliminarAprobaciones(Aprobaciones &a){
    if(a == NULL){
        eliminarAprobaciones(a->sig);
        delete a;
    }
}
