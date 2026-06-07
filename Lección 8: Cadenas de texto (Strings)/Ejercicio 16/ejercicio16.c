#include <stdio.h>

int main() {
    char nombre[20];

    printf("Introduce tu nombre: ");
    scanf("%19s", nombre);

    printf("Hola %s\n", nombre);

    return 0;
}