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
    Fecha fechaAprobIngresar = darFechaAprobacion(aprobacion);
    aux->aprobacion = aprobacion;
    aux->sig = NULL;
    if(a == NULL){
        a = aux;
    } else {
        Aprobaciones iter = a;
        if(esMayorFecha(darFechaAprobacion(iter->aprobacion), fechaAprobIngresar)){
                a = aux;
                a->sig = iter;
        } else {
            while(iter->sig != NULL && esMenorFecha(darFechaAprobacion(iter->sig->aprobacion), fechaAprobIngresar)){
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
