#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int sumaLista(struct Nodo *cabeza) {
    struct Nodo *actual = cabeza;
    
    int sum = 0;

    while (actual != NULL) {
        sum += actual->dato;
        actual = actual->siguiente;
    }

    return sum;
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

    agregarFinal(&cabeza, 5);
    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 15);
    
    printf("Se van a sumar los siguiente números:\n");
    mostrarLista(cabeza);

    printf("\nLa suma es %d.\n", sumaLista(cabeza));

    liberarLista(cabeza);

    return 0;
}