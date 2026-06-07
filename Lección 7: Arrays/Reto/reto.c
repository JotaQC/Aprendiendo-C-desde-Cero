#include <stdio.h>

int suma(int numeros[5]) {
    int result = 0;

    for (int i = 0; i < 5; i++) {
        result = result + numeros[i];
    }
    return result;
}

int main() {
    int numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Introduce un número: ");
        scanf("%d", &numeros[i]);
    }

    printf("La suma es: %d\n", suma(numeros));

    return 0;
}