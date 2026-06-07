#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *numero;

    numero = malloc(sizeof(int));

    if (numero == NULL) {
        printf("Error al reservar memoria.\n");
        return 1;
    }

    *numero = 50;

    printf("%d\n", *numero);

    free(numero);

    return 0;
}