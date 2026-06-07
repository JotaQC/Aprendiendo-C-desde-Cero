#include <stdio.h>

int contarPares(int numeros[], int tam) {
    int pares = 0;

    for (int i = 0; i < tam; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        }
    }

    return pares;
}

int main() {
    int numeros[] = {2, 5, 8, 9, 10};

    printf("Hay %d números pares.\n", contarPares(numeros, 5));

    return 0;
}