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
        if (altura(a->hizq) - altura(a->hder) == 2)
        {
            if (altura(a->hizq->hizq) >= altura(a->hizq->hder))
                RotacionSimpleIzquierda (a);
            else
            RotacionDobleIzquierda (a);
        }
        else
        {
            if (altura(a->hder) - altura(a->hizq) == 2)
            {
                if (altura(a->hder->hder) >= altura(a->hder->hizq))
                    RotacionSimpleDerecha (a);
                else
                RotacionDobleDerecha (a);
            }
        }
    }
}

/** Crea el AVL de Alumnos vacio */
void crearAlumnos(Alumnos &a)

/** Determina si Alumnos es vacio */
Boolean vacioAlumnos(Alumnos a)

/** Determina si el alumno alumn pertenece al AVL de Alumnos */
Boolean perteneceAlumnos(Alumnos a, Alumno alumn)

/** Inserta un Alumno al AVL de Alumnos */
void insertarAlumnos(Alumnos &a, Alumno alumn)
{
    if (a == NULL){
        a = new nodo;
        a -> info = alumn;
        a -> hizq = NULL;
        a -> hder = NULL;
        a -> altura = 1;
    }else{
    if (alumn < a->info)
        Insertar (a->hizq,alumn);
    else
        Insertar (a->HDer,alumn);
        Balancear (a);
        a -> altura = 1 + max(Altura(a->hizq), altura(a->hder));
    }
}

/** Elimina el AVL de Alumnos, liberando la memoria */
void eliminarAlumnos(Alumnos &a)

