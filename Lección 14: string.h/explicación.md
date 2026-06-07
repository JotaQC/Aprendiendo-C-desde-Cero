# Para usar estas funciones:

    #include <string.h>

# `strlen()` -- longitud de una cadena

## Ejemplo:

    #include <stdio.h>
    #include <string.h>

    int main() {
        char nombre[] = "Carlos";

        printf("%zu\n", strlen(nombre));

        return 0;
    }

## Salida:

    6

## Porque:

    C a r l o s
    1 2 3 4 5 6

# Importante:

### `strlen()` no cuenta el carácter especial de fin de cadena (`'\0'`).

## Por eso:

    char nombre[] = "Ana";

### ocupa 4 posiciones en memoria:

    A n a \0

### pero:

    strlen(nombre)

### devuelve:

    3

# Otra cosa importante:

## La función:

    strlen(nombre)

### no devuelve un `int`.

## Devuelve un tipo llamado:

    size_t

### que se utiliza para tamaños y cantidades de memoria.

## Por eso la forma correcta de imprimirlo es:

    printf("%zu\n", strlen(nombre));

## donde:

    %z --> modificador para size_t
    u --> entero sin signo (unsigned)

## ¿Podría usar `%d`?:

### A veces parece funcionar:

    printf("%d\n", strlen(nombre));

### pero no es lo correcto.

### El compilador puede incluso avisarte:

    warning: format '%d' expects argument of type 'int'

### Por eso se recomienda:

    printf("%zu\n", strlen(nombre));

### siempre que imprimas el resultado de `strlen()`.

# `strcpy()` -- copiar cadenas

## No puedes hacer:

    char nombre[20];
    nombre = "Ana";

### Eso da error.

## Para copiar cadenas:

    strcpy(destino, origen);

## Ejemplo:

    #include <stdio.h>
    #include <string.h>

    int main() {
        char nombre[20];

        strcpy(nombre, "Ana");

        printf("%s\n", nombre);

        return 0;
    }

## Salida:

    Ana

# `strcmp()` -- comparar cadenas:

## Con enteros hacemos:

    if (a == b)

### Con cadenas _NO_.

## Esto es incorrecto:

    if (nombre1 == nombre2)

## Debemos usar:

    strcmp(nombre1, nombre2)

## Ejemplo:

    if (strcmp(nombre1, nombre2) == 0)

## significa:

    Las cadenas son iguales

## Ejemplo completo:

    char a[] = "Ana";
    char b[] = "Ana";

    if (strcmp(a, b) == 0) {
        printf("Iguales\n");
    }

## Salida:

    Iguales

# `strcat()` -- unir cadenas:

## Supongamos:

    char nombre[50] = "Ana";
    char apellido[] = " Garcia";

## Podemos hacer:

    strcat(nombre, apellido);

## Ahora:

    nombre

## contiene:

    Ana García

## Ejemplo:

    printf("%s\n", nombre);

## Salida:

    Ana García

# Cuidado con el tamaño:

## Si haces:

    char nombre[10] = "Ana";

### y luego intentas concatenar mucho texto:

    strcat(nombre, " Fernandez");

### puedes sobreescribir memoria.

### Siempre asegúrate de que el array tenga espacio suficiente.

# Leer nombres con espacios:

## Hasta ahora has usado:

    scanf("%19s", nombre);

# Problema:

## Si escribes:

    Juan Pérez

## solo lee:

    Juan

## Para leer una línea completa:

    fgets(nombre, sizeof(nombre), stdin);

## Ejemplo:

    char nombre[50];

    fgets(nombre, sizeof(nombre), stdin);

# Concepto importante:

## Con cadenas en C:

    ==          ❌
    strcmp      ✅

Ese es probablemente el error más frecuente cuando alguien empieza.
