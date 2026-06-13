#include <stdio.h>

int main() {
    
    char nombre[20];
    int edad;

    FILE *archivo;

    archivo = fopen("personas.txt", "r");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    while (fscanf(archivo, "%19s %d", nombre, &edad) == 2) {
        printf("%s %d\n", nombre, edad);
    }

    fclose(archivo);

    return 0;
}