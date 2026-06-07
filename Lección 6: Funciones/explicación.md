Hasta ahora todo nuestro código está dentro de main().

A medida que los programas crecen, esto se vuelve difícil de mantener.

Las funciones permiten dividir un programa en pequeñas tareas.

Primera función:

#include <stdio.h>

void saludar() {
    printf("Hola!\n");
}

int main() {
    saludar();

    return 0;
}

Salida:
Hola!

¿Qué significa void?

void saludar()

void significa:
    Esta función no devuelve ningún valor.
Simplemente ejecuta instrucciones.

Llamar a una función.
Definir una función no la ejecuta.

Hay que llamarla:
saludar();

Función con parámetros.
Las funciones pueden recibir datos.

Ejemplo:

#include <stdio.h>

void saludar(char inicial) {
    printf("Hola %c\n", inicial);
}

int main() {
    saludar('J');

    return 0;
}

Salida:
    Hola J


Más de un parámetro:

void mostrarSuma(int a, int b) {
    printf("La suma es %d\n", a + b);
}

Uso:
mostrarSuma(10, 5);

Salida:
La suma es 15


Funciones que devuelven valores
Hasta ahora:

void saludar()

No devuelve nada.

Ahora:
int sumar(int a, int b)

Devuelve un entero.

Ejemplo:

#include <stdio.h>

int sumar(int a, int b) {
    return a + b;
}

int main() {
    int resultado;

    resultado = sumar(4, 7);

    printf("%d\n", resultado);

    return 0;
}

Salida:
11

¿Qué hace return?

return a + b;

Entrega un valor al lugar donde se llamó la función.


Otro ejemplo:

int cuadrado(int n) {
    return n * n;
}

Uso:
int x = cuadrado(5);

Ahora:
x = 25