#include <stdio.h>

int multiplicar(int nUser1, int nUser2) {
    return nUser1 * nUser2;
}

int main() {
    int nUser1;
    int nUser2;
    int result;

    printf("Introduce el primer número: ");
    scanf("%d", &nUser1);

    printf("Introduce el segundo número: ");
    scanf("%d", &nUser2);

    result = multiplicar(nUser1, nUser2);
    printf("\nEl resultado es: %d\n", result);

    return 0;
}