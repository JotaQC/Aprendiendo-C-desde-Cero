#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

void mostrarPersona(struct Persona *p) {
    printf("%s %d\n", p->nombre, p->edad);
}

int main() {
    struct Persona persona = {"Ana", 20};

    mostrarPersona(&persona);

    return 0;
}