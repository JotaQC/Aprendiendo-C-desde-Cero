#include <stdio.h>

int main() {
    int numero = 10;
    int *p = &numero;

    printf("%d\n", *p);
    printf("%p\n", &numero);

    return 0;
}