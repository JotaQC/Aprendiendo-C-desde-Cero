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

int main() {
    
    struct Nodo *cabeza = NULL;

    agregarFinal(&cabeza, 5);
    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 15);
    agregarFinal(&cabeza, 20);

    printf("Estos son los datos antes de eliminar:\n");
    mostrarLista(cabeza);

    eliminarValor(&cabeza, 15);

    printf("\nEstos son los datos después de eliminar:\n");
    mostrarLista(cabeza);

    liberarLista(cabeza);

    return 0;
}
