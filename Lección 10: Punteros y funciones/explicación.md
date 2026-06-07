Aquí es donde los punteros empiezan a ser realmente útiles.

Observa este programa:

#include <stdio.h>

void cambiar(int x) {
    x = 100;
}

int main() {
    int numero = 10;

    cambiar(numero);

    printf("%d\n", numero);

    return 0;
}

¿Qué crees que imprime?

Antes de continuar con la explicación, intenta razonarlo.

Pista:
    - numero vale 10.
    - Se llama a cambiar(numero).
    - Dentro de la función se hace:
        x = 100;

¿Cambia realmente numero o no?

No cambia. C copia el valor de numero dentro del parámetro x. Es como si ocurriera esto:

int numero = 10;

int x = numero; // copia

Ahora existen dos variables distintas:

numero = 10
x      = 10

Dentro de la función:

x = 100;

solo modifica la copia.

Queda:

numero = 10
x      = 100

Al terminar la función, x desaparece. Por eso:

printf("%d\n", numero);

Imprime:

10



Paso por valor:

Esto se llama:
    paso por valor

Cuando una función recibe un parámetro normal:

void cambiar(int x)

recibe una copia.



Cómo modificar la variable original:

Aquí entran los punteros.

#include <stdio.h>

void cambiar(int *x) {
    *x = 100;
}

int main() {
    int numero = 10;

    cambiar(&numero);

    printf("%d\n", numero);

    return 0;
}

Salida:

100



Analicémoslo:

En main:

cambiar(&numero);

Estamos enviando:

&numero

o sea:
    la dirección de memoria de numero



En la función:

void cambiar(int *x)

x es un puntero a entero.


Supongamos:

numero = 10

Dirección: 1000

Entonces:

x = 1000


Cuando hacemos:

*x = 100;

significa:
    Ve a la dirección almacenada en x y guarda 100 allí.

Es decir:

Dirección 1000 --> 100

Y esa dirección pertenece a numero.


Ejemplo práctico:

#include <stdio.h>

void duplicar(int *n) {
    *n = *n * 2;
}

int main() {
    int valor = 7;

    duplicar(&valor);

    printf("%d\n", valor);

    return 0;
}

Salida:

14
