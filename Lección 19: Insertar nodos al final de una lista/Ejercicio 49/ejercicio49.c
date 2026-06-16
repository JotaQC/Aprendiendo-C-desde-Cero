#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

void agregarFinal(struct Nodo **cabeza, int valor) {
    struct Nodo *nuevo;

    nuevo = malloc(sizeof(struct Nodo));

    nuevo->dato = valor;
    nuevo->siguiente = NULL;

    if (*cabeza == NULL) {
        *cabeza = nuevo;
        return;
    }

    struct Nodo *actual = *cabeza;

    while (actual->siguiente != NULL) {
        actual = actual->siguiente;
    }

    actual->siguiente = nuevo;
}

void mostrarLista(struct Nodo *cabeza) {
    struct Nodo *actual = cabeza;

    while (actual != NULL) {
        printf("%d\n", actual->dato);
        actual = actual->siguiente;
    }
}

void liberarLista(struct Nodo *cabeza) {
    struct Nodo *actual = cabeza;

    while (actual != NULL) {
        struct Nodo *temp = actual;

        actual = actual->siguiente;
        free(temp);
    }
}

int main() {
    struct Nodo *cabeza = NULL;
    
    int uInput;
    
    for (int i = 0; i < 3; i++) {
        printf("Introduce el %dº número: ", i+1);
        scanf("%d", &uInput);

        agregarFinal(&cabeza, uInput);
    }

    mostrarLista(cabeza);

    liberarLista(cabeza);

    return 0;
}