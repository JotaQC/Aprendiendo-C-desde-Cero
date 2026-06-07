#include <stdio.h>
#include <stdlib.h>

int mayor(int numeros[], int n) {
    int max = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }
    
    return max;
}

int main() {
    int *numeros;
    int n;

    printf("¿Cuántos números vas a introducir?: ");
    scanf("%d", &n);

    numeros = malloc(n * sizeof(int));

    if (numeros == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Introduce el %dº número: ", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("\nEl mayor es: %d\n", mayor(numeros, n));

    free(numeros);

    return 0;
}