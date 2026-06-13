#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {

    struct Persona personas;

    char uInputName[20];
    int findPersona = 0;

    FILE *archivo;

    archivo = fopen("personas.txt", "r");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    printf("Nombre: ");
    scanf("%19s", uInputName);

    while (fscanf(archivo, "%19s %d", personas.nombre, &personas.edad) == 2) {
        if (strcmp(personas.nombre, uInputName) == 0) {
            printf("Encontrado: %s %d\n", personas.nombre, personas.edad);
            findPersona = 1;
            break;
        }
    }

    if (!findPersona) {
        printf("No encontrada.\n");
    }
    
    fclose(archivo);

    return 0;
}