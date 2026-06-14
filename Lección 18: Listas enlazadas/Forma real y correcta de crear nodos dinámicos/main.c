#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int data;
    struct Nodo *next;
};

int main() {

    struct Nodo *head = NULL;
    struct Nodo *new;
    struct Nodo *actual;

    // Crear primer nodo
    new = malloc(sizeof(struct Nodo));
    new->data = 10;
    new->next = NULL;
    head = new;

    // Crear segundo nodo
    new = malloc(sizeof(struct Nodo));
    new->data = 20;
    new->next = NULL;
    
    head->next = new;

    // Crear tercer nodo
    new = malloc(sizeof(struct Nodo));
    new->data = 30;
    new->next = NULL;

    head->next->next = new;

    // Recorrer la lista
    actual = head;

    while (actual != NULL) {
        printf("%d\n", actual->data);
        actual = actual->next;
    }

    // Liberar memoria
    actual = head;

    while (actual != NULL) {
        struct Nodo *temp = actual;
        actual = actual->next;
        free(temp);
    }

    return 0;
}