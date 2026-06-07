#include <stdio.h>

int main() {

    FILE *archivo;

    archivo = fopen("mensaje.txt", "w");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    fprintf(archivo, "Hola desde C\n");

    fclose(archivo);

    return 0;
}