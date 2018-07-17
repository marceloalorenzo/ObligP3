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
Boolean perteneceAlumnos(Alumnos a, Alumno alumn){
    if(a == NULL)
        return FALSE;
    if (darCedula(alumn) == darCedula(a->alumno))
        return TRUE;
    else {
        if (darCedula(alumn) < darCedula(a->alumno))
            perteneceAlumnos(a->hIzq, alumn);
        else
            perteneceAlumnos(a->hDer, alumn);
    }
}

/** Inserta un Alumno al AVL de Alumnos */
void insertarAlumnos(Alumnos &a, Alumno alumn)
{
    if (a == NULL){
        a = new NodoAVL;
        a->alumno = alumn;
        a->hIzq = NULL;
        a->hDer = NULL;
        a->altura = 1;
    }else{
    if (darCedula(alumn) < darCedula(a->alumno))
        insertarAlumnos(a->hIzq,alumn);
    else
        insertarAlumnos(a->hDer,alumn);
        balancearAlumnos(a);
        a->altura = 1 + fmax(alturaAlumnos(a->hIzq), alturaAlumnos(a->hDer));
    }
}

/** Elimina el AVL de Alumnos, liberando la memoria*/
void eliminarAlumnos(Alumnos &a)
{
    if (a != NULL)
    {
        eliminarAlumnos(a->hIzq);
        eliminarAlumnos(a->hDer);
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

