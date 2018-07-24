#include <stdio.h>
#include "Fecha.h"

//carga una fecha desde teclado
void cargarFecha(Fecha &f){
    leerFecha(f);
    while(!esValidaFecha(f)){
        printf("Fecha Invalida, vuelva a ingresar fecha: ");
        leerFecha(f);
    }
}

//muestra una fecha por pantalla
void printFecha(Fecha f){
    printf ("%d/%d/%d", f.dia, f.mes, f.anio);
}

//selectora del dia
int darDia(Fecha f){
    return f.dia;
}

//selectora del mes
int darMes(Fecha f){
    return f.mes;
}

//selectora del anio
int darAnio (Fecha f){
    return f.anio;
}

//determina si la fecha es válida o no
Boolean esValidaFecha(Fecha f){
    int diaTope;
    switch (f.mes){
    case 4: case 6: case 9: case 11:
        diaTope = 30;
        break;
    case 2:
        if (f.anio % 4 == 0){
            diaTope = 29;
        } else {
            diaTope = 28;
        }
        break;
    default:
        diaTope = 31;
    }
    Boolean es;
    if(f.anio>0 && f.mes <=12 && f.mes>=1 && f.dia>=1 && f.dia<= diaTope){
        es = TRUE;
    }else{
        es = FALSE;
    }
    return es;
}

// Fecha f1 < f2
Boolean esMenorFecha(Fecha f1, Fecha f2){
    Boolean es;

    if(f1.anio == f2.anio){
        if(f1.mes == f2.mes){
            if(f1.dia < f2.dia){
                es = TRUE;
            }else{
                es = FALSE;
            }
        }else{
            if(f1.mes < f2.mes){
                es = TRUE;
            }else{
                es = FALSE;
            }
        }
    }else{
        if(f1.anio < f2.anio){
            es = TRUE;
        }else{
            es = FALSE;
        }
    }

    return es;
}

// Fecha f1 > f2
Boolean esMayorFecha(Fecha f1, Fecha f2){
    return esMenorFecha(f2,f1);
}

// Escanea la Fecha ingresada desde el teclado
void leerFecha(Fecha &f){
    scanf("%d/%d/%d", &f.dia, &f.mes, &f.anio);
}

