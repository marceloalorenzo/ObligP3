#include "Asignatura.h"
void cargarAsignatura(Asignatura &a, int num){

/** Selectora del nombre */
void darNombre(String &s, Asignatura a){
  strcop(s,a.nombre);
}

/** Selectora del numero */
int darNumero(Asignatura a){
  return (a.numero);
}

/** Muestra la asignatura en pantalla */
void printAsignatura(Asignatura a){
