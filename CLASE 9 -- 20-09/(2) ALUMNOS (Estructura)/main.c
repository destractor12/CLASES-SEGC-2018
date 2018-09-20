#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Alumnos.h"

#define A 2
#define VACIO 0
#define OCUPADO 1
#define ELIMINADO -1
int main()
{

    eAlumno listaAlumnos[A];
    inicializarAlumnos(listaAlumnos, A, VACIO);
    int opcion;

    do
    {
        printf("\n====================\n");
        printf("1: CARGAR ALUMNO. \n");
        printf("2: MOSTRAR ALUMNOS. \n");
        printf("10: SALIR. \n");
        printf("====================\n");

        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
                if (cargarAlumnoEnListado(listaAlumnos, A))
                {
                    printf("\n\nDato cargado con exito\n\n");
                }
                else
                {
                    printf("\n\nNo existe espacio disponible\n\n");
                }

            break;

        case 2:
                mostrarListado(listaAlumnos, A);
            break;

        case 10:
                printf("Programa finalizado! \n");
            break;

        default:
            printf("Opcion incorrecta:!");
        }

        system("pause");
        system("cls");

    }while(opcion!=10);


    return 0;
}