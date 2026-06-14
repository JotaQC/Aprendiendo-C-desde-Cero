#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {

    struct Persona p = {"Ana", 20};
    struct Persona *ptr = &p;

    printf("%s\n%d\n", ptr->nombre, ptr->edad);

    return 0;
}