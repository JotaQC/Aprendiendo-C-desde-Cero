Sin ejecutarlo, intenta adivinar la salida:

#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;

    printf("%d\n", x);

    *p = 20;

    printf("%d\n", x);

    return 0;
}

// Imprime primero 5, y luego 20.