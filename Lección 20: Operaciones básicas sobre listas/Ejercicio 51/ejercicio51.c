#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int buscar(struct Nodo *cabeza, int valor) {
    struct Nodo *actual = cabeza;

    while (actual != NULL) {
        if (actual->dato == valor) {
            return 1;
        }

        actual = actual->siguiente;
    }

    return 0;
}

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

    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 20);
    agregarFinal(&cabeza, 30);

    mostrarLista(cabeza);

    if (buscar(cabeza, 20)) {
        printf("Encontrado.\n");
    }
    else {
        printf("No se ha encontrado.\n");
    }

    liberarLista(cabeza);
    
    return 0;
}