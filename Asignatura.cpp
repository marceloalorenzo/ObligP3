#include "Asignatura.h"

/** Carga una Asignatura recibiendo como parámetro el número de Asignatura */
void cargarAsignatura(Asignatura &a, int num){
    printf("   Nombre Asignatura %d: ", num);
    strScan(a.nombre);
    a.numero = num;
}
/** Selectora del nombre */
void darNombre(String &s, Asignatura a){
  strCop(s,a.nombre);
}

/** Selectora del numero */
int darNumero(Asignatura a){
  return (a.numero);
}

/** Muestra la asignatura en pantalla */
void printAsignatura(Asignatura a){
    printf("\n  %d - ", a.numero);
    strPrint(a.nombre);
}
