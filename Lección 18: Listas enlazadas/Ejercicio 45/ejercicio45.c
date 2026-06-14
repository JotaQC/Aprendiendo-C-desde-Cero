#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int main() {

    struct Nodo *n1;
    struct Nodo *n2;

    struct Nodo *actual;

    n1 = malloc(sizeof(struct Nodo));
    n2 = malloc(sizeof(struct Nodo));

    n1->dato = 10;
    n2->dato = 20;

    n1->siguiente = n2;
    n2->siguiente = NULL;

    actual = n1;

    while (actual != NULL) {
        printf("%d\n", actual->dato);
        actual = actual->siguiente;
    }

    actual = n1;

    while (actual != NULL) {
        struct Nodo *temp = actual;
        actual = actual->siguiente;
        free(temp);
    }

    return 0;
}