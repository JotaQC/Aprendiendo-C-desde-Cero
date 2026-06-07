# Una variable es una caja donde guardamos datos.

    int edad = 25;

    int = tipo entero
    edad = nombre de la variable
    25 = valor

# Tipos básicos

## Enteros

    int numero = 10;

## Decimales

    float altura = 1.75;

## Caracteres

    char letra = 'A';

# Formatos de impresión:

    %d = int
    %f = float
    %c = char

## Ejemplo:

    #include <stdio.h>

    int main() {
        int edad = 25;
        float altura = 1.75;
        char inicial = 'J';

        printf("Edad: %d\n", edad);
        printf("Altura: %f\n", altura);  ## Por defecto mostrará 6 decimales.
        printf("Inicial: %c\n", inicial);

        return 0;
    }

## Para mostrar solo un decimal:

    printf("Altura: %.1f\n", altura); ## en este caso como es 1.75 se redondea a 1.8

## Para mostrar dos decimales:

    printf("Altura: %.2f\n", altura);
**_etc_**


## Salida:

    Edad: 25
    Altura: 1.75000000
    Inicial: J
