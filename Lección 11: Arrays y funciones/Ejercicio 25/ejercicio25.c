#include <stdio.h>

void multiplicarPorDos(int numeros[], int tam) {    
    for (int i = 0; i < tam; i++) {
        numeros[i] = numeros[i] * 2;
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};

    printf("Antes:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n\n");

    multiplicarPorDos(numeros, 5);

    printf("Después:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}