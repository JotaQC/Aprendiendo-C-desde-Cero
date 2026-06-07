#include <stdio.h>
#include <string.h>

int main() {

    char nombre[50];
    char apellido[50];

    char uInput[20];

    printf("Escribe tu nombre: ");
    scanf("%19s", uInput);

    strcpy(nombre, uInput);

    printf("Escribe tu apellido: ");
    scanf("%19s", uInput);

    strcpy(apellido, uInput);

    strcat(nombre, " ");
    strcat(nombre, apellido);

    printf("Tu nombre completo es: %s\n", nombre);


    return 0;
}