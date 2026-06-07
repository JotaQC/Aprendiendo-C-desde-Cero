#include <stdio.h>

int main() {

    FILE *archivo;
    char texto[100];

    archivo = fopen("archivo_prueba.txt", "r");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    fgets(texto, sizeof(texto), archivo);

    printf("%s\n", texto);

    fclose(archivo);

    return 0;
}