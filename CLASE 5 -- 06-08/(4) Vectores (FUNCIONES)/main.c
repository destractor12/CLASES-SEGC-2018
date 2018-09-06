#include <stdio.h>
#include <stdlib.h>
#define T 5

void cargarVector (int[], int);
void ordenarVector (int[], int);

// CARGA ALEATORIA:
// CARGA SECUENCIAL:
// CARGA POR EXTENSION: Es cuando al lado del vector se pone {1,2,3,4}

// constante: Elemento de la programacion que durante el ciclo de vida del programa

int main()
{
    int miVector[T] = {}; //subindice[] // ESTO ES CARGA POR EXTENSION.
    int i;
    int j;
    int aux;
    int buscar;
    int flag = 0;

    printf("El tamanio es: %d\n", sizeof(miVector));


    cargarVector(miVector, T);

    ordenarVector(miVector, T);


    printf("\nIngrese el numero a buscar: ");
    scanf("%d", &buscar);
    for (i=0; i<T; i++)
    {
        if(buscar==miVector[i])
        {
            flag = 1;
            printf("POSICION: %d\n", i);
            break;
        }
    }

    if (flag==0)
    {
        printf("No se encontro el dato\n");
    }


    printf("\nMuestro TODO!\n");
    for (i=0; i<T; i++)
    {
        printf("%d\n", miVector[i]);

    }


    printf("\nMuestro los pares!\n");
    for (i=0; i<T; i++)
    {
        if (miVector[i] %2 == 0)
        {
        printf("%d\n", miVector[i]);
        }



    }

    return 0;
}



void cargarVector (int vector[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &vector[i]);
    }

}

void ordenarVector (int vector[], int tam)
{
    int i;
    int j;
    int aux;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
                if(vector[i] > vector[j]) //CRITERIO DE ORDENAMIENTO.
                {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
                }

        }
    }
}
