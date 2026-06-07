#include <stdio.h>

int main() {
    int n;

    printf("Introduce la nota (0-10): ");
    scanf("%d", &n);

    if (n >= 5) {
        printf("Aprobado.\n");
    }
    else {
        printf("Suspenso.\n");
    }

    return 0;
}