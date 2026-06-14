#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int main() {

    struct Nodo *n1;
    struct Nodo *n2;
    struct Nodo *n3;

    struct Nodo *actual;

    int sum = 0;

    n1 = malloc(sizeof(struct Nodo));
    n2 = malloc(sizeof(struct Nodo));
    n3 = malloc(sizeof(struct Nodo));

    n1->dato = 5;
    n2->dato = 10;
    n3->dato = 15;

    n1->siguiente = n2;
    n2->siguiente = n3;
    n3->siguiente = NULL;

    actual = n1;

    while (actual != NULL) {
        sum += actual->dato;
        actual = actual->siguiente;
    }

    printf("La suma es %d\n", sum);

    actual = n1;

    while (actual != NULL) {
        struct Nodo *temp = actual;
        actual = actual->siguiente;
        free(temp);
    }

    return 0;
}