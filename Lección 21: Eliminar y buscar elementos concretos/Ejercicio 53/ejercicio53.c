#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int contarNodos(struct Nodo *cabeza) {

    int contador = 0;

    struct Nodo *actual = cabeza;

    while (actual != NULL) {
        contador++;
        actual = actual->siguiente;
    }

    return contador;
}

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

int main() {

    struct Nodo *cabeza = NULL;
    int resultado;

    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 20);
    agregarFinal(&cabeza, 30);

    resultado = contarNodos(cabeza);

    printf("Hay %d nodos.\n", resultado);

    return 0;
}
