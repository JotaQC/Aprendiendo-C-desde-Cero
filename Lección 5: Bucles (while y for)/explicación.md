Un bucle permite repetir instrucciones.

La estructura más sencilla es:

while (condicion) {
    // código que se repite
}

Ejemplo:

#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 5) {
        printf("%d\n", contador);
        contador++;
    }

    return 0;
}

Salida:
1
2
3
4
5

¿Qué hace contador++?
Es una forma abreviada de escribir:

contador = contador + 1;

Por ejemplo:

int x = 3;

x++;

Ahora x vale 4.

Cómo funciona el bucle paso a paso.

Inicialmente:

contador = 1

Comprueba:

contado <= 5

Es verdadero -> imprime 1.

Luego:

contador++;

Ahora vale 2.

Vuelve al principio y repite.

Cuando llega a 6:

6 <= 5

es falso y el bucle termina.


Cuidado: bucles infinitos
Este programa nunca termina:

while (1) {
    printf("Hola\n");
}

porque la condición siempre es verdadera.

Otro error típico:

int contador = 1;

while (contador <= 5) {
    printf("%d\n", contador);
}

Aquí olvidamos incrementar contador.

Resultado: Imprime 1 para siempre.


Bucle for:

Muy utilizado cuando sabemos cuántas veces queremos repetir algo.

La estructura es:

for (inicio; condicion; incremento) {
    // código
}

El programa anterior puede escribirse así:

#include <stdio.h>

int main() {
    for (int i = 1; i<= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}

Produce exactamente la misma salida:
1
2
3
4
5

¿Qué significa cada parte?

for (int i = 1; i <= 5; i++)

Inicio:
int i = 1;

Se ejecuta una sola vez.

Condición:
i <= 5;

Mientras sea verdadera, el bucle continúa.

Incremento:
i++

Se ejecuta después de cada vuelta.