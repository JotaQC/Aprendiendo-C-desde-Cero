#include <stdio.h>
#include <string.h>

int main() {

    char origen[] = "Ana";
    char destino[20];

    strcpy(destino, origen);

    printf("%s\n", destino);

    return 0;
}