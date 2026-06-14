#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int main() {

    struct Nodo *nodo;

    nodo = malloc(sizeof(struct Nodo));

    nodo->dato = 10;
    nodo->siguiente = NULL;

    printf("%d\n", nodo->dato);

    free(nodo);

    return 0;
}