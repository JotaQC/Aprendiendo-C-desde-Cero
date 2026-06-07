#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

void solicitarDatosPersona(struct Persona personas[]) {
    for (int i = 0; i < 3; i++) {
        printf("Introduce el nombre de la %dº persona: ", i+1);
        scanf("%19s", persona[i].nombre);

        printf("Introduce la edad de la %dº persona: ", i+1);
        scanf("%d", &persona[i].edad);
    }

    printf("\n\n");

}

void imprimirDatosPersona(struct Persona personas[]) {
    for (int i = 0; i < 3; i++) {
        printf("Persona %d:\nNombre: %s\nEdad: %d años.\n\n", i+1, personas[i].nombre, personas[i].edad);
    }
}

int main() {
    struct Persona personas[3];

    solicitarDatosPersona();
    
    imprimirDatosPersona();

    return 0;
}