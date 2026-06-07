Hasta ahora solo hemos manejado un carácter:

char letra = 'A';

Pero un nombre contiene muchos caracteres.

Para eso usamos arrays de char.


Crear una cadena:

char nombre[20];

Permite almacenar hasta 19 caracteres más el carácter especial de fin de cadena.


Leer una palabra:

#include <stdio.h>

int main() {
    char nombre[20];

    printf("Introduce tu nombre: ");
    scanf("%19s", nombre);

    printf("Hola %s\n", nombre);

    return 0;
}


%s

Hasta ahora conoces:


%d - para enteros.

%f - para decimales.

%c - para un carácter.


Ahora:

%s - para una cadena.


Curiosidad:

Observa esto:

scanf("%19s", nombre);

Aquí NO usamos:

&nombre

Esto se debe a como funcionan los arrays en C.

Lo estudiaremos en profundidad cuando lleguemos a punteros.

Por ahora memoriza la regla:

scanf("%19s", nombre);

Salida:

Carlos