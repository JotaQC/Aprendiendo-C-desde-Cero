## Hasta ahora solo sabemos eliminar el primer nodo:

    5 -> 10 -> 15 -> NULL

## ↓

    10 -> 15 -> NULL

### Pero ¿qué pasa si queremos eliminar un valor concreto?

# Eliminar un valor

## Lista:

    5 -> 10 -> 15 -> 20

### Queremos eliminar `15`.

## Resultado: 

    5 -> 10 -> 20

## Idea

### Cuando estamos en el nodo `10`:

    5 -> 10 -> 15 -> 20
             ^

### Podemos hacer que `10` apunte directamente a `20`.

    5 -> 10 -------> 20

### Y luego liberar `15`.

## Función

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

# ¿Qué es `anterior`?

## Supongamos:

    5 -> 10 -> 15 -> 20

## Mientras recorremos:

    anterior = 10
    actual = 15

## Entonces hacemos:

    anterior->siguiente = actual->siguiente;

## Es decir:

    10 -> 20

## y eliminamos `15`.

# Buscar y devolver un nodo

## Hasta ahora devolvíamos:

    return 1;

## o

    return 0;

## Pero a veces queremos obtener el nodo encontrado.

# Función

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

# Uso

    struct Nodo *resultado;

    resultado = buscarNodo(cabeza, 20);

    if (resultado != NULL) {
        printf("Encontrado: %d\n", resultado->dato);
    }

# Contar nodos

## Lista:

    10 -> 20 -> 30

## Resultado:

    3

# Función

    int contarNodos(struct Nodo *cabeza) {

        int contador = 0;

        struct Nodo *actual = cabeza;

        while (actual != NULL) {
            contador++;
            actual = actual->siguiente;
        }

        return contador;
    }

# Concepto nuevo importante

## Hoy aparece una variable nueva:

    struct Nodo *anterior;

## Es muy común en listas enlazadas porque muchas operaciones necesitan conocer:

- dónde estás (`actual`)
- quién estaba antes (`anterior`)

## Dominar ese patrón es la clave para manipular listas enlazadas con soltura.
