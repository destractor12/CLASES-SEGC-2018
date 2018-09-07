#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define T 15

int main()
{
    char nombre[T] = "Alex";
    char otroNombre[T] = "Maxwell";
    int cantidad;
    int compara;
    int i;
    // strcpy(nombre, otroNombre); // destino - origen. Siempre hay que asegurarse de que destino pueda soportar lo que el origen esta pasando.

    // ESTE FOR ME MUESTRA TODA LA CADENA SI NO EXISTIERA %S
    for (i=0; i<strlen(nombre); i++)
    {
        printf("%c", nombre[i]);
    }


    //

    while (nombre[i] != '\0')
    {
        printf("%c", nombre[i]);
        i++;
    }



//____________________________________________________

    /*printf("Ingrese su nombre: ");

    fflush(stdin);
    gets(nombre);
    */

//_______________________________________________________

    compara = stricmp(nombre, otroNombre); // Recibe dos constantes a char. Dos cadenas. Devuelve un entero
    printf("Comparacion: %d", compara); // puede devolver 0, -1, o 1. Si son iguales, 0.

    /*
    if (compara == 0)
    {
        printf("Son iguales.");
    }
    else
    {
        if (compara>0)
        {
            printf("%s esta antes %s", otroNombre, nombre);
        }

        if (compara<0)
        {
            printf("%s esta antes %s", nombre, otroNombre);
        }
    }


*/

    strupr(otroNombre); // Convierte todo a mayuscula.
    strlwr(otroNombre); // Convierte todo a minuscula.

    strcat(otroNombre, " ");
    strcat(otroNombre, nombre); // Recibe dos strings.

    cantidad = strlen(nombre); // Devuelve el tamaño de una cadena.

    printf("\nLa cantidad de caracteres es: %d", cantidad);

    return 0;
}
