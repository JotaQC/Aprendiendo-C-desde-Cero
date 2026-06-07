#include <stdio.h>
#include <string.h>

int main() {

    char nombre1[20];
    char nombre2[20];

    printf("Introduce el 1º nombre: ");
    scanf("%19s", nombre1);

    printf("Introduce el 2º nombre: ");
    scanf("%19s", nombre2);

    if (strcmp(nombre1, nombre2) == 0) {
        printf("Son iguales\n");
    }
    else {
        printf("Son diferentes\n");
    }

    return 0;
}