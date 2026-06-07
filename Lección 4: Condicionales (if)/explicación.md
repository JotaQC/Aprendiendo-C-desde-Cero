Hasta ahora nuestros programas siempre ejecutan las mismas instrucciones.

Con if podemos tomar decisiones.

Ejemplo:

#include <stdio.h>

int main() {
    int edad;

    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    }

    return 0;
}

Si introduces 20 la salida será "Eres mayor de edad."; si introduces 15 no imprime nada.


if y else:

if (condicion) {
    // si es verdadera
}
else {
    // si es falsa
}

Ejemplo:

#include <stdio.h>

int main() {
    int edad;

    printf("Edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Mayor de edad\n");
    }
    else {
        printf("Menor de edad\n");
    }

    return 0;
}


Operadores de comparación:

Operador:               Significado:
    ==                    Igual a
    !=                    Distinto de
    >                     Mayor que
    <                     Menor que
    >=                    Mayor o igual
    <=                    Menor o igual


Ejemplos:

x == 10

x != 10

x >= 18


Error muy común:
if (x = 10)

Esto asigna 10 a x.

Para comparar:
if (x == 10)