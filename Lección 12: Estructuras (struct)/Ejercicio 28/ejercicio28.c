#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

void mostrarPersona(struct Persona p) {
    printf("Nombre: %s\nEdad: %d\n", p.nombre, p.edad);
}

int main() {
    struct Persona p = {
        "Ana", 20
    };

    mostrarPersona(p);

    return 0;
}