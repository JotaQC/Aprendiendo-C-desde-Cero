#include <stdio.h>

int esPar(int n){
    if (n % 2 == 0) {
        return 1;
    }

    return 0;
}

int main() {
    int n;

    printf("Introduce un número: ");
    scanf("%d", &n);

    if (esPar(n)) {
        printf("El número es par.\n");
    }
    else {
        printf("El número es impar.\n");
    }

    return 0;
}