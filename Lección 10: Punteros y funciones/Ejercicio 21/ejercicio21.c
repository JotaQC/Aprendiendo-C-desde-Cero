#include <stdio.h>

void sumarUno(int *n){
    *n = *n + 1;
}

int main(){
    int n = 10;

    printf("%d\n", n);

    sumarUno(&n);

    printf("%d\n", n);

    return 0;
}