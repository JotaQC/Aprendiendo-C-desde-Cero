#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main() {
    int a = 5;
    int b = 10;

    printf("%d\n%d\n", a, b);

    intercambiar(&a, &b);

    printf("%d\n%d\n", a, b);

    return 0;
}