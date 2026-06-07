## Hasta ahora hemos guardado un único dato:

    int edad = 30;

## ¿Y si queremos guardar 100 números?

## No vamos a hacer:
    int n1;
    int n2;
    int n3;
    ...

### Para eso existen los arrays.

# Crear un array:

    int numero[5];

## Esto crea espacio para:

    5 números enteros.


## Posiciones:

### Las posiciones empiezan en 0.
    
    Índice      Valor
    -------     -------
    0
    1
    2
    3
    4

## Observa:

    Primer elemento -> índice 0
    Último elemento -> índice 4

## Guardar valores:

    int numeros[5];
    
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

## Leer valores:

    printf("%d\n", numeros[0]);

## Salida:

    10

## Inicialización rápida:

    int números[5] = {10, 20, 30, 40, 50};

# Recorrer un array con un bucle:

    #include <stdio.h>
    
    int main() {
    
        int numeros[5] = {10, 20, 30, 40, 50};
    
        for (int i = 0; i < 5; i++) {
            printf("%d\n", numeros[i]);
        }
    
        return 0;
    }

## Salida:

    10
    20
    30
    40
    50

## ¿Por qué usamos `< 5`?

### Porque los índices válidos son:

    0
    1
    2
    3
    4

## Si intentas acceder a:

    numeros[5]

### estarás fuera del array.

### Es uno de los errores más frecuentes en C.
