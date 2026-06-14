#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

void cumplirAnios(struct Persona *p) {
    p->edad++;
}

int main() {

    struct Persona persona = {"Luis", 35};

    printf("Edad antes: %d.\n", persona.edad);

    cumplirAnios(&persona);

    printf("Edad después: %d.\n", persona.edad);

    return 0;
}