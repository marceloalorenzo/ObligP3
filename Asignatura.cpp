#include "Asignatura.h"
void cargarAsignatura(Asignatura &a, int num){
    printf("Ingrese nombre de asignatura: ");
    strScan(a.nombre);
    printf("Ingrese numero de asignatura: ");
    scanf("%d",&num);
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
    printf("Nombre de asignatura: ");
    strPrint(a.nombre);
    printf("Numero de asignatura: %d", a.numero);
}
