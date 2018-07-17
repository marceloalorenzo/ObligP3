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


/** Determina si el alumno alumn pertenece al AVL de Alumnos
Boolean perteneceAlumnos(Alumnos a, Alumno alumn)
{
Boolean encontre=FALSE;
while ((!encontre) && (a != NULL))
if (alumn == a->info)
encontre = TRUE;
else
if (alumn < a->info)
a = a -> hIzq;
else
a = a -> hDer;
return encontre;
}
*/
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
        Posorden (a->hIzq);
        Posorden (a->hDer);
        delete a;
        a = NULL;
    }
}

/** Rotaciones */
void RotacionSimpleIzquierda(Alumnos &a)
{
    Alumnos aux = a->hIzq;
    a->hIzq = aux->hDer
    aux->hDer = a;
    a = aux;
    a->altura = ls->altura + 1;
    a->hDer->altura = a->hDer->altura - 1;
}

void RotacionSimpleDerecha(Alumnos &a)
{
    Alumnos aux = a->hder;
    a->hder = aux->hder;
    aux->hIzq = a;
    a = aux;
    a->altura = ls->altura + 1;
    a->hIzq->altura = a->hizq->altura - 1;
}

void RotacionDobleIzquierda(Alumnos &a)
{
    RotacionSimpleDerecha (a->hizq);
    RotacionSimpleIzquierda (a);
    a->altura = a->altura - 1;
    a->hder->altura = a->hder->altura - 1;
}

void RotacionDobleDerecha(Alumnos &a)
{
    RotacionSimpleIzquierda (a->hder);
    RotacionSimpleDerecha (a);
    a->altura = a->altura - 1;
    a->hizq->altura = a->hizq->altura - 1;
}

