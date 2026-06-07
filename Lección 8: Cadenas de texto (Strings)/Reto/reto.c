#include <stdio.h>

int main() {
    char nombre[20];
    int edad;

    printf("Introduce tu nombre: ");
    scanf("%19s", nombre);

    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    printf("Hola %s, tienes %d años.\n", nombre, edad);

    return 0;
}