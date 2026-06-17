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

void agregarInicio(struct Nodo **cabeza, int valor) {
    struct Nodo *nuevo;

    nuevo = malloc(sizeof(struct Nodo));

    nuevo->dato = valor;
    nuevo->siguiente = *cabeza;

    *cabeza = nuevo;
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

void eliminarPrimero(struct Nodo **cabeza) {
    if (*cabeza == NULL) {
        return;
    }

    struct Nodo *temp = *cabeza;

    *cabeza = (*cabeza)->siguiente;
    free(temp);
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

    printf("Lista sin editar:\n");
    mostrarLista(cabeza);

    printf("\nEdición de lista número 1. (5 al inicio de la lista):\n");
    agregarInicio(&cabeza, 5);
    mostrarLista(cabeza);

    printf("\nBúsqueda del número 20:\n");
    if (buscar(cabeza, 20)) {
        printf("Número 20 encontrado.\n");
    }
    else {
        printf("No se encuentra el número 20.\n");
    }

    printf("\nEdición de lista número 2. (Eliminamos el primer nodo):\n");
    eliminarPrimero(&cabeza);
    mostrarLista(cabeza);

    liberarLista(cabeza);

    return 0;
}