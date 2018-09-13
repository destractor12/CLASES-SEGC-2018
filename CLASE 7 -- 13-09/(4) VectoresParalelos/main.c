#include <stdio.h>
#include <stdlib.h>
#define T 3
/*
a) Cargar los datos (carga aleatoria)
b) Modificar: Se ingresa el legajo, lo busca. Si lo encunetra, modifica la nota 1;


INFORMES:
1 - Los alumnos con promedio 6 o mas.
2 - El / los alumnos con maximo promedio.
3 - La / las alumnas con minimo promedio
4 - Cantidad de alumnos desaprobados (se aprueba con 6 o mas).
5 - Cantidad de alumnos aprobados.
6 - Porcentaje de aprobados y desaprobados.
7 - Mostrar los alumnos que se llamen Juan
8 - Ordenar los datos alfabeticamente.
9 - Ordnear por nombre, y ante igualdad de nombre, por promedio.
10 - Mostrar los alumnos cuyo nombre comience con P
11 - Ordnear alumnos por sexo
12 - Realizar un grafico que muestre:
    * Alumnos entre 15-18 (inclusive);
    *Alumnos entre 10 y 25 (inclusive);
    *26 o mas
*/

float calcularPromedio (int, int, int);
int cargarAlumnos (char[][50], int[], int[], int[], float[], int);
int mostrarAlumnos (char[][50], int[], int[], int[], float[], int);

int main()
{
    char nombreCompleto[T][20];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    float promedio[T];

    cargarAlumnos(nombreCompleto, nota1, nota2, nota3, promedio, T);
    cargarAlumnos(nombreCompleto, nota1, nota2, nota3, promedio, T);


    return 0;
}

float calcularPromedio (int nota1, int nota2, int nota3)
{
    float promedio;
    promedio = (float)(nota1 + nota2+ nota3) / 3;
    return promedio;
}


int cargarAlumnos (char nombreCompleto[][50], int nota1[], int nota2[], int nota3[], float promedio[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombreCompleto[i]);

        printf("Ingrese la nota 1: ");
        scanf("%d", &nota1[i]);

        printf("Ingrese la nota 2: ");
        scanf("%d", &nota2[i]);

        printf("Ingrese la nota 3: ");
        scanf("%d", &nota3[i]);

        promedio[i] = calcularPromedio(nota1[i], nota2[i], nota3[i]);
    }

    return 0;
}

int mostrarAlumnos(char nombreCompleto[][50], int nota1[], int nota2[], int nota3[], float promedio[], int tam)
{
    int i;
    printf("%s %6s %6s %6s %12s\n", "Nombre", "Nota1", "Nota2", "Nota3", "Promedio" );
    for(i=0; i<T; i++)
    {
        printf("%5s %5d %5d %5d %16f \n", nombreCompleto[i], nota1[i], nota2[i], nota3[i], promedio[i]);
    }
}
