#include <stdio.h>

int main() {
    int a;
    int b;

    printf("Introduce el valor de A: ");
    scanf("%d", &a);

    printf("Introduce el valor de B: ");
    scanf("%d", &b);

    printf("Suma: %d\n", a + b);
    printf("Resta: %d\n", a - b);
    printf("Multiplicación: %d\n", a * b);

    return 0;
}