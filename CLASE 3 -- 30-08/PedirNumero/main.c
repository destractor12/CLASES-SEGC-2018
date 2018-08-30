#include <stdio.h>
#include <stdlib.h>

int pedirNumero(char[]);

int main()
{
    int legajo;
    int nota;
    int edad;

    legajo = pedirNumero( "Ingrese legajo: ");
    nota = pedirNumero("Ingrese la nota: ");
    edad = pedirNumero("Ingrese la edad: ");

    return 0;
}

int pedirNumero(char texto[])
{
    int numero;
    printf("%s", texto);
    scanf("%d", &numero);
    return numero;
}
