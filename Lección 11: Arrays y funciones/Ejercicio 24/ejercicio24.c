#include <stdio.h>

int mayor(int numeros[], int tam) {
    int max = numeros[0];

    for (int i = 1; i < tam; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
        else {
            continue;
        }
    }

    return max;
}

int main() {
    int numeros[] = {4, 8, 2, 15, 9};

    printf("%d\n", mayor(numeros, 5));

    return 0;
}