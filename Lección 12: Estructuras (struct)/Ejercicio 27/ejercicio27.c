#include <stdio.h>

struct Personas {
    char nombre[20];
    int edad;
};

int main() {
    struct Personas persona[3] = {
        {"Ana", 20},
        {"Luís", 35},
        {"Marta", 28}
    };

    for (int i = 0; i < 3; i++) {
        printf("%s %d\n",
                persona[i].nombre,
                persona[i].edad);
    }

    return 0;
}