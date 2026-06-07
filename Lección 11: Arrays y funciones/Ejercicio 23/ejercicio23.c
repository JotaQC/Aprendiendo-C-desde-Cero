#include <stdio.h>

int suma(int numeros[], int tam){
    int result = 0;

    for (int i = 0; i < tam; i++) {
        result += numeros[i];
    }

    return result;
}

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};

    printf("%d\n", suma(numeros, 5));

    return 0;
}