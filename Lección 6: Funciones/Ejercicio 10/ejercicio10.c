#include <stdio.h>

void mostrarLinea() {
    printf("--------------------");
}

int main() {
    for (int i = 1; i <= 3; i++) {
        mostrarLinea();
        printf("\n");
    }

    return 0;
}