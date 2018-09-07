#include <stdio.h>
#include <stdlib.h>
#define T 15

int main()
{
    char nombre[T];

    printf("Ingrese su nombre: ");

    fflush(stdin);
    gets(nombre);

    printf("%s", nombre);

    return 0;
}
