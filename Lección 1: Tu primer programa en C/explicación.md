¿Qué significa esta línea?

    #include <stdio.h>

Le dice al compilador que cargue la biblioteca estándar de entrada y salida.

Gracias a ella podemos usar funciones como:

    printf()
    scanf()

Esta es la función principal del programa:

    int main()

Cuando ejecutas un programa en C, la ejecución comienza aquí.

Llaves { }

    {
        ...
    }

Delimitan el bloque de instrucciones de una función.

printf . Muestra texto en pantalla, \n es un salto de línea. Ejemplo:

    printf("Hola\n");
    printf("Adiós\n");

Salida:

    Hola
--> Adiós

-- return 0 . Indica que el programa terminó correctamente.


- # - Regla importante: cada intrucción termina con ;

-- Correcto:

--> printf("Hola");

-- Incorrecto:

--> printf("Hola")
