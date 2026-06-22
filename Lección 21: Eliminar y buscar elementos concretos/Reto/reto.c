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

void eliminarValor(struct Nodo **cabeza, int valor) {
    
    struct Nodo *actual = *cabeza;
    struct Nodo *anterior = NULL;

    while (actual != NULL && actual->dato != valor) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        return;
    }

    if (anterior == NULL) {
        *cabeza = actual->siguiente;
    }
    else {
        anterior->siguiente = actual->siguiente;
    }

    free(actual);
}

int contarNodos(struct Nodo *cabeza) {
    
    int contador = 0;

    struct Nodo *actual = cabeza;

    while (actual != NULL) {
        contador++;
        actual = actual->siguiente;
    }

    return contador;
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
    struct Nodo *buscNodo;
    int contNodos;

    agregarFinal(&cabeza, 5);
    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 15);
    agregarFinal(&cabeza, 20);
    agregarFinal(&cabeza, 25);

    printf("Lista inicial:\n");
    mostrarLista(cabeza);

    contNodos = contarNodos(cabeza);
    printf("\nHay una cantidad total de %d nodos.\n", contNodos);

    buscNodo = buscarNodo(cabeza, 20);

    if (buscNodo != NULL) {
        printf("\nEl nodo %d ha sido encontrado.\n", buscNodo->dato);
    }

    eliminarValor(&cabeza, 10);
    printf("\nNodo 10 eliminado.\n");

    printf("\nLista actual:\n");
    mostrarLista(cabeza);

    liberarLista(cabeza);

    return 0;
}
