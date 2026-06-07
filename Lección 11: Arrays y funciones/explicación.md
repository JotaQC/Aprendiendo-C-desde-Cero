Hasta ahora has hecho cosas como:

int numeros[5] = {1, 2, 3, 4, 5};

y los recorrías en main().

Ahora queremos que una función trabaje con ese array.



Pasar un array a una función:

Ejemplo:

#include <stdio.h>

void mostrar(int numero[5]) {
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    mostrar(numeros);

    return 0;
}

Salida:

1
2
3
4
5



Algo curioso:

Observa la llamada:

mostrar(numeros);

No hemos escrito:

mostrar(&numeros);

Y aun así la función puede acceder al array.



¿Por qué?

Porque en C, cuando pasas un array a una función, lo que realmente se pasa es la dirección del primer elemento.

Es como si fuera:

mostrar(&numeros[0]);

aunque normalmente no se escribe así.



Modificar un array desde la función:

Ejemplo:

#include <stdio.h>

void ponerCeros(int numeros[5]) {
    for (int i = 0; i < 5; i++) {
        numeros[i] = 0;
    }
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    ponerCeros(numeros);

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}

Salida:
0
0
0
0
0



Atención:

Esto es diferente de las variables normales.

Recuerda:

void cambiar(int x)

no modificaba la variable original.




Calcular una suma:

Podemos crear una función que devuelva la suma de un array.

#include <stdio.h>

int suma(int numeros[5]) {
    int resultado = 0;

    for (int i = 0; i < 5; i++) {
        resultado += numeros[i];
    }

    return resultado;
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};

    printf("%d\n", suma(numeros));

    return 0;
}

Salida:

15



Problema de esta versión:

La función solo sirve para arrays de tamaño 5.




Hacerla más flexible:

Podemos pasar también el tamaño.

int suma(int numeros[], int tam)

Implementación:

int suma(int numeros[], int tam) {
    int resultado = 0;

    for (int i = 0; i < tam; i++) {
        resultado += numeros[i];
    }

    return resultado;
}

Uso:

int numeros[] = {1, 2, 3, 4, 5};

printf("%d\n", suma(numeros, 5));



Buscar el mayor elemento:

Ejemplo:

int mayor(int numeros[], int tam) {
    int max = numeros[0];

    for (int i = 1; i < tam; i++) {
        max = numeros[i];
    }

    return max;
}

Si el array es:

3 8 2 15 4

devuelve:

15





Pista importante:

Cuando una función recibe un array, piensa que está recibiendo una dirección de memoria. Por eso puede leer y modificar los elementos originales sin necesidad de usar & en la llamada. Esto será fundamental cuando lleguemos a memoria dinámica (malloc) más adelante.