#include <stdio.h>

int main() {

    FILE *archivo;

    archivo = fopen("personas.txt", "w");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    fprintf(archivo, "Ana 20\n");
    fprintf(archivo, "Luis 35\n");

    fclose(archivo);

    return 0;
}