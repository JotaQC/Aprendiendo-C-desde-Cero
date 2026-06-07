#include <stdio.h>

void ponerCero(int *n) {
    *n = 0;
}

int main() {
    int n = 10;

    ponerCero(&n);

    printf("%d\n", n);

    return 0;
}