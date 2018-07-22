#include "Alumnos.h"

/** Devuelve la altura del AVL Alumnos */
int alturaAlumnos(Alumnos a)
{
    if (a == NULL)
        return 0;
    else
        return a->altura;
}

/** Balancea el AVL de Alumnos */
void balancearAlumnos(Alumnos &a)
{
    if (a != NULL)
    {
        if (alturaAlumnos(a->hIzq) - alturaAlumnos(a->hDer) == 2)
        {
            if (alturaAlumnos(a->hIzq->hIzq) >= alturaAlumnos(a->hIzq->hDer))
                rotacionSimpleIzquierda(a);
            else
                rotacionDobleIzquierda(a);
        }
        else
        {
            if (alturaAlumnos(a->hDer) - alturaAlumnos(a->hIzq) == 2)
            {
                if (alturaAlumnos(a->hDer->hDer) >= alturaAlumnos(a->hDer->hIzq))
                    rotacionSimpleDerecha(a);
                else
                    rotacionDobleDerecha(a);
            }
        }
    }
}

/** Crea el AVL de Alumnos vacio */
void crearAlumnos(Alumnos &a)
{
    a = NULL;
}


/** Determina si Alumnos es vacio*/
Boolean vacioAlumnos(Alumnos a)
{
    Boolean es=FALSE;
    if(a == NULL)
        es = TRUE;
    return es;
}


/** Determina si el alumno alumn pertenece al AVL de Alumnos */
Boolean perteneceAlumnos(Alumnos a, int cedula){
    if(a == NULL)
        return FALSE;

    if (cedula == darCedula(a->alumno))
        return TRUE;

    if (cedula < darCedula(a->alumno))
        return perteneceAlumnos(a->hIzq, cedula);
    else
        return perteneceAlumnos(a->hDer, cedula);

}

/** Inserta un Alumno al AVL de Alumnos */
void insertarAlumnos(Alumnos &a, Alumno alumn){
    if (a == NULL){
        a = new NodoAVL;
        a->alumno = alumn;
        a->hIzq = NULL;
        a->hDer = NULL;
        a->altura = 1;
    } else {
        if (darCedula(alumn) < darCedula(a->alumno))
            insertarAlumnos(a->hIzq,alumn);
        else {
            insertarAlumnos(a->hDer,alumn);
            balancearAlumnos(a);
            a->altura = 1 + fmax(alturaAlumnos(a->hIzq), alturaAlumnos(a->hDer));
        }
    }
}

/** Elimina el AVL de Alumnos, liberando la memoria*/
void eliminarAlumnos(Alumnos &a)
{
    if (a != NULL)
    {
        eliminarAlumnos(a->hIzq);
        eliminarAlumnos(a->hDer);
        eliminarAlumno(a->alumno);
        delete a;
    }
}

/** Rotaciones */
void rotacionSimpleIzquierda(Alumnos &a)
{
    Alumnos aux = a->hIzq;
    a->hIzq = aux->hDer;
    aux->hDer = a;
    a = aux;
    a->altura = a->altura + 1;
    a->hDer->altura = a->hDer->altura - 1;
}

void rotacionSimpleDerecha(Alumnos &a)
{
    Alumnos aux = a->hDer;
    a->hDer = aux->hDer;
    aux->hIzq = a;
    a = aux;
    a->altura = a->altura + 1;
    a->hIzq->altura = a->hIzq->altura - 1;
}

void rotacionDobleIzquierda(Alumnos &a)
{
    rotacionSimpleDerecha(a->hIzq);
    rotacionSimpleIzquierda(a);
    a->altura = a->altura - 1;
    a->hDer->altura = a->hDer->altura - 1;
}

void rotacionDobleDerecha(Alumnos &a)
{
    rotacionSimpleIzquierda(a->hDer);
    rotacionSimpleDerecha(a);
    a->altura = a->altura - 1;
    a->hIzq->altura = a->hIzq->altura - 1;
}

/** Imprime la informacion de todos los alumnos cargados en el AVL */
void printAlumnos(Alumnos a){
    if(a != NULL){
        printAlumnos(a->hIzq);
        printAlumno(a->alumno);
        printAlumnos(a->hDer);
    }
}

/** Busca un Alumno por su cedula en el AVL y devuelve la direccion de memoria del Alumno */
Alumno* darAlumnoAVL(Alumnos a, int cedula){
    int c;
    Alumno* alumno = NULL;
    while(alumno == NULL && a != NULL){
        c = darCedula(a->alumno);
        if(cedula == c){
            alumno = &a->alumno;
        } else {
            if(cedula < c)
                a = a->hIzq;
            else
                a = a->hDer;
        }
    }
    return alumno;
}
