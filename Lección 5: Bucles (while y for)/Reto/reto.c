#include <stdio.h>

int main() {
    int suma = 0;
    int n;

    printf("Introduce un número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }

    printf("La suma es %d\n", suma);

    return 0;
}