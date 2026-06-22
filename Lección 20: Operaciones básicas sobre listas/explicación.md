## Vamos a completar las operaciones básicas de una lista enlazada.

## Ya sabes:

    - Crear nodos
    - Añadir al final
    - Recorrer
    - Sumar
    - Liberar memoria

## Ahora aprenderemos:

    - Insertar al principio
    - Buscar un valor
    - Eliminar un nodo

# Insertar al principio

## Hasta ahora:

    5 -> 10 -> 15

## Si añadir `1` al principio:

    1 -> 5 -> 10 -> 15

## Función

    void agregarInicio(struct Nodo **cabeza, int valor) {
        struct Nodo *nuevo;

        nuevo = malloc(sizeof(struct Nodo));

        nuevo->dato = valor;

        nuevo->siguiente = *cabeza;

        *cabeza = nuevo;
    }

## ¿Qué ocurre?

### Si tenemos:

    cabeza
      |
      v
     [5] -> [10] -> NULL

### Creamos:

    [1]

### Luego:

    nuevo->siguiente = *cabeza;

### queda:

    [1] -> [5] -> [10]

### Finalmente:

    *cabeza = nuevo;

### queda:

    cabeza
      |
      v
     [1] -> [5] -> [10]

# Buscar un valor

## Queremos saber si existe un número.

## Lista:

    5 -> 10 -> 15

## Buscar:

    10

## Resultado:

    Encontrado

## Función

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

## Uso:

    if (buscar(cabeza, 10)) {
        printf("Encontrado\n");
    }
    else {
        printf("No encontrado\n");
    }

# Eliminar el primer nodo

## Lista:

    5 -> 10 -> 15

## Queremos borrar:

    5

## Resultado:

    10 -> 15

## Función

    void eliminarPrimero(struct Nodo **cabeza) {
        if (*cabeza == NULL) {
            return;
        }

        struct Nodo *temp = *cabeza;

        *cabeza = (*cabeza)->siguiente;

        free(temp);
    }

## ¿Qué hace?

### Antes:

    cabeza
      |
      v
     [5] -> [10]

### Guardamos:

    temp = *cabeza;

### Movemos:

    *cabeza = (*cabeza)->siguiente;

### Ahora:

    cabeza
      |
      v
     [10]

### Y liberamos:

    free(temp);

## Ejemplo completo:

    struct Nodo *cabeza = NULL;

    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 20);

    agregarInicio(&cabeza, 5);

    mostrarLista(cabeza);

## Salida:

    5
    10
    20


## Con esto entendemos la diferencia entre:

    agregarInicio(...)

## y:

    agregarFinal(...)

- `agregarInicio()` → el último que insertas sale el primero (LIFO).
- `agregarFinal()` → mantiene el orden de inserción (FIFO).

### Es una idea importante porque más adelante aparece en estructuras como pilas (stacks) y colas (queues).
