#include <stdio.h>

int main() {
    int nUser;

    printf("Introduce un número: ");
    scanf("%d", &nUser);

    for (int i = 1; i <= 10; i++) {
        int result = nUser * i;
        printf("%d x %d = %d\n", nUser, i, result);
    }

    return 0;
}