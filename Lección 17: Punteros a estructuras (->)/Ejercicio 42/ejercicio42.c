#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {
    
    struct Persona p = {"Ana", 20};
    struct Persona *ptr = &p;

    printf("%d\n", p.edad);

    ptr->edad = 30;

    printf("%d\n", p.edad);

    return 0;
}