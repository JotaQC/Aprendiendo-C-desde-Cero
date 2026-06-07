#include <stdio.h>
#include <stdlib.h>

int main() {

    int *numeros;
    int n;

    printf("¿Cuántos números quieres guardar?: ");
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

    for (int i = 0; i < n; i++) {
        printf("%d\n", numeros[i]);
    }

    free(numeros);

    return 0;
}