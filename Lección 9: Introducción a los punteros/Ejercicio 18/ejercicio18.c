#include <stdio.h>

int main() {
    int numero = 10;
    int *p = &numero;

    printf("%d\n", numero);
    printf("%p\n", p);
    printf("%d\n", *p);

    return 0;
}