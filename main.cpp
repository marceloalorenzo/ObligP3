#include <stdio.h>
#include <stdlib.h>
#include "CursoCocina.h"
#include "Menu.h"

int main()
{
    Boolean salir = FALSE;
    int opcion;
    Asignaturas asignaturas;
    Alumnos alumnos;
    String as1,as2;

    crearAlumnos(alumnos);
do
   {
        system("cls");
        fflush(stdin);
        menu(opcion);
        switch(opcion){
            case 1:
                registraAsignaturas(asignaturas);
                break;
                
            case 2:
                listarAsignaturas(asignaturas);
                break;
                
            case 3:
                printf("Ingrese numero de asignatura 1: ");
                strCrear(as1);
                scan(as1);
                printf("Ingrese numero de asignatura 2: ");
                strCrear(as2);
                scan(as2);
                if (existeAsignatura(asignaturas,as1) && existeAsignatura(asignaturas,as2))
                    agregarPreviatura(as1,as2)
                else
                    printf("Alguno de los datos ingresados son incorrectos.\n");

                strDestruir(as1);
                strDestruir(as2);
                
                break;
            
            case 4:
                
              
void ObtenerCamino (Grafo G, int u, int v, Camino &Sol)
{
 Inicializar (Sol);
 boolean visitado[N];
 for (int i=0; i<N; i++)
 visitado[i] = false;
DFS (G, u, v, visitado, Sol);
} 
  
 void DFS (Previatura P, asignatura a, boolean b, Arraycon Tope a)
 visitado[actual] = true;
 if (actual == v)
 InsBack (Sol, actual);
 else
 {
int j=0;
while (j < N && !visitado[v])
{
 if ((G[actual][j]) && (!visitado[j]))
 DFS-Ej2a4 (G, j, v, visitado, Sol);
 j++;
}
if (visitado[v])
InsBack (Sol, actual);
 }
}   
                    
                    
                    
                    
                    
                    
                 
                
                
                
                
                
                
                
                
                
          case 5:
                ingresarNuevoAlumno(alumnos);
                break;
                
            case 6:
                listarAlumnos(alumnos);
                break;
                
            case 7:
                agregarAprobacionAlumno(alumnos, asignaturas);
                
                break;
            case 8:
                listarEscolaridad(alumnos);
                    system("cls");
                    fflush(stdin);
                break;
                
            case 9:
                {
                }
                break;
            default:
                {
                    system("cls");
                    fflush(stdin);
                    printf("\nOpcion invalida, intente nuevamente\n");
                    system("pause");
                     }
        }
    }while (opcion != 9);
}
