#include "Previaturas.h"

void crear(ListaAdy &l){
    l = NULL;
}

void insFront(ListaAdy &l, int n){
    ListaAdy aux;
    aux = new NodoPreviaturas;
    aux->numAsignatura = n;
    aux->sig = l;
    l = aux;
}

Boolean pertenece(ListaAdy l, int n){
    Boolean esta = FALSE;
    while ((!esta) && (l != NULL))
        if (l->numAsignatura == n)
            esta = TRUE;
        else
            l = l->sig;
    return esta;
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
      printf("%d",l->numAsignatura);
      l=l->sig;
}

/** Crear un grafo de N vértices y sin aristas */
void crearGrafoPreviaturas(Previaturas &p){
    for (int i=0; i<N; i++)
        crearGrafoPreviaturas(p);
}

/** Dados dos números de asignaturas agregar una previatura entre ellas */
void agregarPreviatura(Previaturas &p, int a1, int a2){
    insFront(p[a1],a2);
        if (a1 != a2)
            insFront(p[a2],a1);
}

/** Dado el número que identifica a una asignatura,
 obtener un listado conteniendo número y nombre de todas sus previas */
void listarPrevias(Previaturas p, int numAsignatura){
    //desplegarListaAdy(p[asignatura]);
}
