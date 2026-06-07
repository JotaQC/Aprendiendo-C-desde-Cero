Sin ejecutarlo, intenta adivinar la salida:

#include <stdio.h>

void modificar(int *x) {
    *x = *x + 5;
}

int main() {
    int n = 10;

    modificar(&n);
    modificar(&n);

    printf("%d\n", n);

    return 0;
}


// El resultado es 20. Ya que llama a la función 2 veces y le suma 2 veces el valor de 5 a 10.