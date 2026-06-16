## Siguiente paso: Añadir nodos sin escribir `cabeza->siguiente->siguiente...` (`head->next->next...`).

## Hasta ahora hacíamos algo como:

    cabeza->siguiente = nodo2;
    nodo2->siguiente = nodo3;

### Eso sirve para aprender, pero no es práctico si quieres añadir 100 nodos.

# Crear una función `agregarFinal`

## La idea es:

    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 20);
    agregarFinal(&cabeza, 30);

## Y obtener:

    10 -> 20 -> 30 -> NULL

# Por qué `&cabeza`?

## Si la lista está vacía:

    struct Nodo *cabeza = NULL;

## la función tendrá que modificar `cabeza`.

## Por eso recibe un **puntero al puntero**:

    struct Nodo **cabeza

# Función

    void agregarFinal(struct Nodo **cabeza, int valor) {
        struct Nodo *nuevo;

        nuevo = malloc(sizeof(struct Nodo));

        nuevo->dato = valor;
        nuevo->siguiente = NULL;

## Caso 1: lista vacía

    if (*cabeza == NULL) {
        *cabeza = nuevo;
        return;
    }

## Caso 2: lista con elementos

### Necesitamos ir hasta el último nodo.

    struct Nodo *actual = *cabeza;

    while (actual->siguiente != NULL) {
        actual = actual->siguiente;
    }

### Ahora `actual` apunta al último.

### Lo enlazamos:

    actual->siguiente = nuevo;

# Función completa

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

        while(actual->siguiente != NULL) {
            actual = actual->siguiente;
        }

        actual->siguiente = nuevo;
    }

# Recorrer la lista

## Ya lo conoces:

    void mostrarLista(struct Nodo *cabeza) {
        struct Nodo *actual = cabeza;

        while (actual != NULL) {
            printf("%d\n", actual->dato);
            actual = actual->siguiente;
        }
    }

# Uso

    struct Nodo *cabeza = NULL;

    agregarFinal(&cabeza, 10);
    agregarFinal(&cabeza, 20);
    agregarFinal(&cabeza, 30);

    mostrarLista(cabeza);

### Salida:

    10
    20
    30

# Liberar la lista

    void liberarLista(struct Nodo *cabeza) {
        struct Nodo *actual = cabeza;

        while (actual != NULL) {
            struct Nodo *temp = actual;

            actual = actual->siguiente;
            free(temp);
        }
    }

# Concepto importante

## Has visto por primera vez algo nuevo:

    struct Nodo **cabeza

### Es un **puntero a puntero**.

## No te preocupes si hoy te parece raro. La idea simple es:

    - `struct Nodo *` --> apunta a un nodo.
    - `struct Nodo **` --> apunta a una variable que contiene un puntero a un nodo.

### Lo usamos porque necesitamos modificar `cabeza` desde la función.