#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {

    struct Persona personas;

    int contador = 0;

    FILE *archivo;

    archivo = fopen("personas.txt", "r");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    while (fscanf(archivo, "%19s %d", personas.nombre, &personas.edad) == 2) {
        contador++;
    }

    fclose(archivo);

    printf("Hay %d personas\n", contador);

    return 0;
}