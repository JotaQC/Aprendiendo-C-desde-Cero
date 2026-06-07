#include <stdio.h>

int main() {
    int nUser;

    printf("Introduce un número: ");
    scanf("%d", &nUser);

    printf("\nUsando bucle for:\n");
    for (int i = 1; i <= nUser; i++) {
        printf("%d\n", i);
    }

    printf("\nUsando bucle while:\n");
    int i = 1;
    while (i <= nUser){
        printf("%d\n", i);

        i++;
    }

    return 0;
}