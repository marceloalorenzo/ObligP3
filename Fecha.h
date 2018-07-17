#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <stdio.h>
#include "Boolean.h"


typedef struct {int dia;
                int mes;
                int anio;
               }Fecha;


//carga una fecha desde teclado
void cargarFecha(Fecha &f);

//muestra una fecha por pantalla
void printFecha(Fecha f);

//selectora del dia
int darDia(Fecha f);

//selectora del mes
int darMes(Fecha f);

//selectora del anio
int darAnio(Fecha f);

//determina si la fecha es válida o no
Boolean esValidaFecha(Fecha f);

// Fecha f1 < f2
Boolean esMenorFecha(Fecha f1, Fecha f2);

// Fecha f1 = f2
Boolean esIgualFecha(Fecha f1, Fecha f2);

// Fecha f1 > f2
Boolean esMayorFecha(Fecha f1, Fecha f2);

// Escanea la Fecha ingresada desde el teclado
void leerFecha(Fecha &f);

#endif // FECHA_H_INCLUDED


