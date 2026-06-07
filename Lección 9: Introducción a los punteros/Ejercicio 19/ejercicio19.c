#include <stdio.h>

int main() {
    int numero = 10;
    int *p = &numero;

    *p = 50;

    printf("%d\n", *p);

    return 0;
}

// El valor de numero cambia de 10 a 50.