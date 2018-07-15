#include "Previaturas.h"

void crear(ListaAdy &l){
l=NULL;
}

void insFront(ListaAdy &l, int n){
  {
Lista aux = new Nodo;
aux -> info = n;
aux -> sig = l;
l = aux;
}

Boolean pertenece(ListaAdy l, int n){
boolean existe=FALSE;
while(l!=NULL)
  if(l->info==n)
    existe= TRUE;
  else
    l=l->sig;
}
  return existe;
}

int largo(ListaAdy l){
  int cant=0;
  while(l!=NULL)
  {
    cant++;
    l=l->sig;
  }
  return cant;
}
  
  

void desplegarListaAdy(ListaAdy l){
while(l!=NULL)
  printf("%d",l->info);
  l=l->sig;
}
/** Crear un grafo de N vértices y sin aristas */
void crearGrafoPreviaturas(Previaturas &p){

/** Dados dos números de asignaturas agregar una previatura entre ellas */
void agregarPreviatura(Previaturas &p, int a1, int a2){

/** Dado el número que identifica a una asignatura,
 obtener un listado conteniendo número y nombre de todas sus previas */
void listarPrevias(Previaturas p, int asignatura){
