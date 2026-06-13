#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {
    struct Persona personas[3] = {
        {"Ana", 20},
        {"Luis", 35},
        {"Marta", 28}
    };
    
    FILE *archivo;

    archivo = fopen("personas.txt", "w");

    if (archivo == NULL) {
        printf("Error.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        fprintf(archivo, "%s %d\n", personas[i].nombre, personas[i].edad);
    }

    fclose(archivo);

    return 0;
}