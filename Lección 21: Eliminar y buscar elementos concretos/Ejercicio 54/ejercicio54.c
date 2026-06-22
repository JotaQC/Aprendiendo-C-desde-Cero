#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

void agregarFinal(struct Nodo **cabeza, int valor) {

    struct Nodo *nuevo;

    nuevo = malloc(sizeof(struct Nodo));

    if (nuevo == NULL) {
        printf("Error al reservar memoria.");
        return;
    }

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

struct Nodo *buscarNodo(struct Nodo *cabeza, int valor) {

    struct Nodo *actual = cabeza;

    while (actual != NULL) {

        if (actual->dato == valor) {
            return actual;
        }

        actual = actual->siguiente;
    }

    return NULL;
}

int main() {

    struct Nodo *cabeza = NULL;
    struct Nodo *resultado;

    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 20);
    agregarFinal(&cabeza, 30);

    resultado = buscarNodo(cabeza, 20);

    if (resultado != NULL) {
        printf("Encontrado: %d\n", resultado->dato);
    }

    return 0;
}
