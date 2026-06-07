#include <stdio.h>
#include <stdlib.h>

int main() {

    int *numeros = 0;
    int result = 0;

    numeros = malloc(5 * sizeof(int));

    if (numeros == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    for (int i = 0; i < 5; i++) {
        result = result + numeros[i];
    }
    
    printf("%d\n", result);

    free(numeros);

    return 0;
}