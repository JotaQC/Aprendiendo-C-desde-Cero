#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {
    struct Persona persona1;

    printf("Introduce nombre: ");
    scanf("%19s", persona1.nombre);

    printf("Introduce edad: ");
    scanf("%d", &persona1.edad);

    printf("\n\n");

    printf("Esta es la persona que se ha registrado:\n");
    printf("Nombre: %s\nEdad: %d\n", persona1.nombre, persona1.edad);

    return 0;
}