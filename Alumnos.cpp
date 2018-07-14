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
                RotacionSimpleIzquierda(a);
            else
                RotacionDobleIzquierda(a);
        }
        else
        {
            if (alturaAlumnos(a->hDer) - alturaAlumnos(a->hIzq) == 2)
            {
                if (alturaAlumnos(a->hDer->hDer) >= alturaAlumnos(a->hDer->hIzq))
                    RotacionSimpleDerecha(a);
                else
                    RotacionDobleDerecha(a);
            }
        }
    }
}

/** Crea el AVL de Alumnos vacio */
void crearAlumnos(Alumnos &a);

/** Determina si Alumnos es vacio */
Boolean vacioAlumnos(Alumnos a);

/** Determina si el alumno alumn pertenece al AVL de Alumnos */
Boolean perteneceAlumnos(Alumnos a, Alumno alumn);

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

/** Elimina el AVL de Alumnos, liberando la memoria */
void eliminarAlumnos(Alumnos &a);

/** Rotaciones */
void RotacionSimpleIzquierda(Alumnos &a){
}

void RotacionSimpleDerecha(Alumnos &a){
}

void RotacionDobleIzquierda(Alumnos &a){
}

void RotacionDobleDerecha(Alumnos &a){
}

