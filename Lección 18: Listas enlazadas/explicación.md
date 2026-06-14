## Has llegado a un punto donde ya conoces casi todas las herramientas básicas de C. Ahora vamos a aprender una estructura de datos clásica que aprovecha todo lo visto sobre punteros.

## Hasta ahora usábamos arrays:

    int numeros[5];

## Problema:

    - Tamaño fijo.
    - Insertar elementos en medio es incómodo.
    - Si se llena, hay que crear otro array.

### Las listas enlazadas solucionan esto.

# La idea

## Cada elemento guarda:

    1. Un dato.
    2. Un puntero al siguiente elemento.

## Visualmente:

    [10|*] -> [20|*] -> [30|NULL]

# Definición de nodo

    struct Nodo {
        int dato;
        struct Nodo *siguiente;
    };

## ¿Qué significa?

    int dato;

### guarda el valor.

    struct Nodo *siguiente;

### apunta al siguiente nodo.

# Crear un nodo

## Necesitamos memoria dinámica:

    #include <stdlib.h>

## Ejemplo:

    struct Nodo *nodo;

    nodo = malloc(sizeof(struct Nodo));

## Guardar un valor:

    nodo->dato = 10;

## Como no hay siguiente nodo:

    nodo->siguiente = NULL;

# Primer ejemplo completo

    #include <stdio.h>
    #include <stdlib.h>

    struct Nodo {
        int dato;
        struct Nodo *siguiente;
    };

    int main() {
        
        struct Nodo *nodo;

        nodo = malloc(sizeof(struct Nodo));

        nodo->dato = 10;
        nodo->siguiente = NULL;

        printf("%d\n", nodo->dato);

        free(nodo);

        return 0;
    }

# Dos nodos enlazados

## Creamos:

    struct Nodo *n1;
    struct Nodo *n2;

## Reservamos memoria:

    n1 = malloc(sizeof(struct Nodo));
    n2 = malloc(sizeof(struct Nodo));

## Valores:

    n1->dato = 10;
    n2->dato = 20;

## Enlace:

    n1->siguiente = n2;
    n2->siguiente = NULL;

## Visualmente:

    n1 -> [10|*] -> [20|NULL]

# Acceder al siguiente

## Primer nodo:

    n1->dato

### vale:

    10

## Segundo nodo:

    n1->siguiente->dato

### vale:

    20

# Recorrer una lista

## Supongamos:

    10 -> 20 -> 30

## Usamos un puntero auxiliar:

    struct Nodo *actual;

## Empezamos:

    actual = cabeza;

## Mientras exista:

    while (actual != NULL) {
        printf("%d\n", actual->dato);

        actual = actual->siguiente;
    }

## Salida:

    10
    20
    30

# Liberar memoria

## Si haces:

    free(cabeza);

### solo liberas el primer nodo.

### Los demás quedan perdidos.

## Hay que recorrer la lista:

    while (actual != NULL) {
        
        struct Nodo *temp = actual;

        actual = actual->siguiente;

        free(temp);
    }

# Concepto importante

## En un array:

    numeros[0]
    numeros[1]
    numeros[2]

### los elementos están juntos en memoria.

## En una lista enlazada:

    [10] -> [20] -> [30]

### los nodos pueden estar en cualquier parte de la memoria y se conectan mediante punteros.

### Ese cambio de mentalidad es la clave para entender listas enlazadas.