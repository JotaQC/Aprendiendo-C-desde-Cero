#include <stdio.h>

int main() {
    int numeros[5];
    int nUser;

    for (int i = 0; i < 5; i++) {
        printf("Introduce un número: ");
        scanf("%d", &nUser);
        numeros[i] = nUser;
    }

    printf("\nEl usuario ha introducido los siguientes números:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}