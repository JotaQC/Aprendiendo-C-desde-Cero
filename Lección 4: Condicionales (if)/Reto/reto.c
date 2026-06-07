#include <stdio.h>

int main() {
    int n1;
    int n2;

    printf("Introduce el primer número: ");
    scanf("%d", &n1);

    printf("Introduce el segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("El mayor es %d\n", n1);
    }
    else if (n1 < n2) {
        printf("El mayor es %d\n", n2);
    }
    else {
        printf("Son iguales.\n");
    }

    return 0;
}