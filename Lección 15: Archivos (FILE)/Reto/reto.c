#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {

    struct Persona persona1;
    FILE *archivo;

    printf("Introduce el nombre: ");
    scanf("%19s", persona1.nombre);

    printf("Introduce edad: ");
    scanf("%d", &persona1.edad);

    archivo = fopen("persona.txt", "w");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    fprintf(archivo, "%s %d\n", persona1.nombre, persona1.edad);

    fclose(archivo);

    archivo = fopen("persona.txt", "r");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    fscanf(archivo, "%19s %d", persona1.nombre, &persona1.edad);

    printf("\nDatos leídos:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);

    fclose(archivo);

    return 0;
}