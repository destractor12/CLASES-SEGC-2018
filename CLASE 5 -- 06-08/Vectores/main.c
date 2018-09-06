#include <stdio.h>
#include <stdlib.h>

// CARGA ALEATORIA:
// CARGA SECUENCIAL:
// CARGA POR EXTENSION: Es cuando al lado del vector se pone {1,2,3,4}

int main()
{
    int miVector[5] = {}; //subindice[] // ESTO ES CARGA POR EXTENSION.
    int i;

    printf("El tamanio es: %d\n", sizeof(miVector));

    for(i=0; i<5; i++)
    {
        printf("Ingrese el numero: ");
        scanf("%d", &miVector[i]);
    }


    for (i=0; i<5; i++)
    {
        if (miVector[i] %2 == 0)
        {
        printf("%d\n", miVector[i]);
        }

    }

    return 0;
}



/*

int main()
{
    int miVector[5] = {5,9,3,4,7}; //subindice[] // ESTO ES CARGA POR EXTENSION.
    int i;

    printf("El tamanio es: %d\n", sizeof(miVector));

    for (i=0; i<5; i++)
    {
        printf("%d\n", miVector[i]);
    }

    printf("EL NUMERO ES: %d", miVector[2]);
    return 0;
}

*/
